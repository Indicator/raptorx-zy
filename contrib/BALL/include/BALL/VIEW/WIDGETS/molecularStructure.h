// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: molecularStructure.h,v 1.28.16.2 2007-05-13 21:18:57 amoll Exp $
//

#ifndef BALL_VIEW_WIDGETS_MOLECULARSTRUCTURE_H
#define BALL_VIEW_WIDGETS_MOLECULARSTRUCTURE_H

#ifndef BALL_VIEW_KERNEL_MODULARWIDGET_H
# include <BALL/VIEW/KERNEL/modularWidget.h>
#endif

#ifndef BALL_MATHS_VECTOR3_H
 #include <BALL/MATHS/vector3.h>
#endif

#ifndef BALL_VIEW_DIALOGS_AMBERCONFIGURATIONDIALOG_H
 #include <BALL/VIEW/DIALOGS/amberConfigurationDialog.h>
#endif

#ifndef BALL_VIEW_DIALOGS_MINIMIZATIONDIALOG_H
# include <BALL/VIEW/DIALOGS/minimizationDialog.h>
#endif

#ifndef BALL_VIEW_DIALOGS_MOLECULARDYNAMICSDIALOG_H
# include <BALL/VIEW/DIALOGS/molecularDynamicsDialog.h>
#endif

#ifndef BALL_VIEW_DIALOGS_CHARMMCONFIGURATIONDIALOG_H
# include <BALL/VIEW/DIALOGS/charmmConfigurationDialog.h>
#endif

#ifndef BALL_VIEW_DIALOGS_MMFF94CONFIGURATIONDIALOG_H
# include <BALL/VIEW/DIALOGS/MMFF94ConfigurationDialog.h>
#endif

#ifndef BALL_MOLMEC_AMBER_AMBER_H
# include <BALL/MOLMEC/AMBER/amber.h>
#endif

#ifndef BALL_MOLMEC_CHARMM_CHARMM_H
# include <BALL/MOLMEC/CHARMM/charmm.h>
#endif

#ifndef BALL_MOLMEC_MMFF94_MMFF94
# include <BALL/MOLMEC/MMFF94/MMFF94.h>
#endif


#include <QtGui/qwidget.h>

namespace BALL
{
	class Composite;

	namespace VIEW
	{
		class FDPBDialog;

		/**	MolecularStructure provides means to modify molecular structures and do
		 		several calculations. To do so, it contains the AMBER and CHARMM forcefields and
				dialogs to do the setup.
				The widget itself is invisible, but it has several menu entries, e.g.:
				- checkResidue
				- centerCamera
				- buildBonds
				- addHydrogens
				- createGridFromDistance
				- calculateSecondaryStructure
				This class is also necessary to add certain properties to new Composite objects, 
				which were opened with the MolecularFileDialog.
		 		So it reacts to Messages itself and converts some to other Message objects.
				Further it converts the geometric selection sent by Scene to a molecular selection 
				whose objects can be given a new graphical representation by the DisplayProperties dialog.
				See onNotify for information concerning the conversion mechanism. \par
				\ingroup ViewWidgets
		*/
		class BALL_VIEW_EXPORT MolecularStructure
			: public QWidget, 
				public ModularWidget
		{
			Q_OBJECT

			public:

			BALL_EMBEDDABLE(MolecularStructure, ModularWidget)

			///
			enum
			{
				///
				AMBER_FF = 0,

				///
				CHARMM_FF,

				///
				MMFF94_FF
			};
			
			/**	@name	Constructors
			*/	
			//@{

			/** Default Constructor.
					Calls registerWidget.
					\see        ModularWidget
			*/
			MolecularStructure(QWidget* parent = 0, const char* name = 0)
				throw();
			
			/// only needed for Python Interface, dont call it!
			MolecularStructure(const MolecularStructure& m);
			
			//@}
			/** @name Destructors 
			*/
			//@{

			/** Destructor.
			*/
			virtual ~MolecularStructure()
				throw();

			//@}
			/**	@name	Accessors: inspectors and mutators 
			 */
			//@{

			/** Handles messages sent by other registered ConnectionObject objects.
					Converts CompositeMessage if the
					retrieved Composite object is kind of AtomContainer and
					applies molecular properties to it (like normalize_names and
					build_bonds).\par
					\param message the pointer to the message that should be processed
					\see   CompositeMessage
					\see   GeometricObjectSelectionMessage
					\see   MolecularTaskMessage
			*/
			virtual void onNotify(Message *message)
				throw();

			/**	Check the menu entries.
					The menus <b>Select</b>, <b>Deselect</b>, <b>Add Hydrogens</b> and <b>Build Bonds</b>
					will be enabled if the selection of molecular objects is not empty.
					The menu <b>Focus camera</b> will be enabled only if only one molecular object
					is in the selection list.
			*/
			virtual void checkMenu(MainControl& main_control)
				throw();

			/**	Initialize the popup menus for this Widget.
					This method is called automatically	immediately before the main application is started 
					by MainControl::show().
					\param main_control the MainControl object to be initialized
					\see   finalizeWidget
			*/
			virtual void initializeWidget(MainControl& main_control);
		
			/**	Get the currently selected force field instance.
					This returns either a reference to the amber_ff_ member or to the charmm_ff_ member,
					depending on the value of use_amber_.
			*/
			ForceField& getForceField() throw();

			/** Get the instance of the AMBER forcefield.
					The forcefield will be created, when this function is called the first time.
			*/
			AmberFF& getAmberFF() throw();
			
			/** Get the instance of the CHARMM forcefield.
					The forcefield will be created, when this function is called the first time.
			*/
			CharmmFF& getCharmmFF() throw();

			///
			MMFF94& getMMFF94() throw();

			/// Get an instance of an dialog to setup the AMBER forcefield
			AmberConfigurationDialog& getAmberConfigurationDialog()	throw();
			
			/// Get an instance of an dialog to setup the CHARMM forcefield
			CharmmConfigurationDialog& getCharmmConfigurationDialog()	throw();

			///
			MMFF94ConfigurationDialog& getMMFF94ConfigurationDialog() throw();

			/** Fetch the widgets preferences from the INIfile.
					\param  inifile the INIFile that contains the required values
			*/
			virtual void fetchPreferences(INIFile &inifile)
				throw();
					
			/** Writes the widgets preferences to the INIFile.
					\param  inifile the INIFile that contains the needed values
			*/
			virtual void writePreferences(INIFile &inifile)
				throw();

			///
			MolecularDynamicsDialog& getMDSimulationDialog() { return md_dialog_;}

			///
			MinimizationDialog& getMinimizationDialog() { return minimization_dialog_;}

			///
			FDPBDialog* getFDPBDialog() { return fdpb_dialog_;}

					
			public slots:

			/** Centers the camera of Scene to the geometric center of the molecular objects
					in the selection list.
					A SceneMessage will be sent to inform the Scene.
			*/
			void centerCamera(Composite* composite = 0);

			/** Creates bonds.
					If selected molecular objects are available Bond objects will be created
					for each object in the selection list using the build_bonds processor of the FragmentDB.
					A CompositeMessage will be sent for each object in the
					selection list.
					The number of bonds created will be written into the Log object.
			*/
			void buildBonds();
			
			/** Adds hydrogens.
					If selected molecular objects are available hydrogens will be created
					for each object in the selection list
					using the add_hydrogens processor of the FragmentDB.
					A CompositeMessage will be sent for each object in the selection list.
					The number of hydrogens created will be written into the Log object.
			*/
			void addHydrogens();
			
			/** Check the residues
			 */
			virtual bool checkResidue();

			/// Create a RegularData3D instance with the distance from the geometric center
			virtual void createGridFromDistance();

			///
			virtual void createGridFromCameraDistance();

			/// Calculate the secondary structure for a protein
			virtual void calculateSecondaryStructure();

			/// Map two Proteins and apply the resulting transformation matrix
			virtual void mapProteins();

			/// Calculate the RMSD between two Molecules
			virtual void calculateRMSD();

			/// Build a Peptide from a amino acid sequence
			void buildPeptide();

			/// Calculate the H-Bonds for a Protein
			void calculateHBonds();

			/// Calculate a Ramachandran Plot
			void calculateRamachandranPlot();

			// Calculate the charges for a Molecule
//	 		void assignCharges();

			/// Calculate the energy for the currently selected force field
			void calculateForceFieldEnergy();

			/// Run a energy minization with the currently selected force field
			void runMinimization(bool show_dialog_ = true);

			/// Perfomr a molecular dynamics simulation with the currently selected force field
			void MDSimulation(bool show_dialog_ = true);

			/// Show the dialog to setup the AMBER force field
			void showAmberForceFieldOptions();
			
			/// Show the dialog to setup the CHARMM force field
			void showCharmmForceFieldOptions();

			///
			void showMMFF94ForceFieldOptions();
			
			/// Slot for a menu entry to select the AMBER force field
			void chooseAmberFF();

			/// Slot for a menu entry to select the CHARMM force field
			void chooseCharmmFF();
				
			/// Slot for a menu entry to select the MMFF94 force field
			void chooseMMFF94();

			/// 
			void chooseForceField(Position nr);

			/// Show a dialog to setup the currently selected force field
			void setupForceField();

			///
			bool calculateFDPB(bool show = true);
				
			//@}
			
			private:

			virtual void addComposite_(Composite& composite, const String& name)
				throw();

			void applyForceFieldSettings_();

			void selectUnassignedForceFieldAtoms_();

			bool setupForceField_(System* system, bool disable_selection = false);

			QAction* center_camera_id_;
			QAction* build_bonds_id_;
			QAction* add_hydrogens_id_;
			QAction* check_structure_id_;
			QAction* create_distance_grid_id_, *create_distance_grid_id2_;
			QAction* calculate_ss_id_;
			QAction* map_proteins_id_;
			QAction* calculate_RMSD_id_;
			QAction* assign_charges_id_;
			QAction* energy_id_;
			QAction* minimization_id_;
			QAction* mdsimulation_id_;
			QAction* build_peptide_id_;
			QAction* calculate_hbonds_id_;
			QAction* amber_ff_id_;
			QAction* charmm_ff_id_;
			QAction* mmff94_id_;
			QAction* setup_ff_;
			QAction* calculate_ramachandran_;
			QAction* menu_FPDB_;

			AmberFF 										amber_;
			CharmmFF										charmm_;
			MMFF94 											mmff_;
			AmberConfigurationDialog    amber_dialog_;
			CharmmConfigurationDialog 	charmm_dialog_;
			MMFF94ConfigurationDialog 	mmff94_dialog_;
			MinimizationDialog 					minimization_dialog_;
			MolecularDynamicsDialog 		md_dialog_;
			FDPBDialog* 								fdpb_dialog_;
			Position 										force_field_id_;
		};

	} // namespace VIEW
} // namespace BALL

#endif // BALL_VIEW_WIDGETS_MOLECULARSTRUCTURE_H
