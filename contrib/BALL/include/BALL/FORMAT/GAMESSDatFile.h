// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: GAMESSDatFile.h,v 1.2 2005-10-05 09:59:45 anhi Exp $
//

#ifndef BALL_FORMAT_GAMESSDATFILE_H
#define BALL_FORMAT_GAMESSDATFILE_H

#ifndef BALL_FORMAT_GENERICMOLFILE_H
#	include <BALL/FORMAT/genericMolFile.h>
#endif

#ifndef BALL_DATATYPE_STRINGHASHMAP_H
# include <BALL/DATATYPE/stringHashMap.h>
#endif
namespace BALL
{
	/** GAMESSDat file class.
	 * 	This class enables BALL to read and write input and output .dat files for
	 * 	the GAMESS quantum chemistry application.
	 *
	 * 	\ingroup StructureFormats
	 */
	class BALL_EXPORT GAMESSDatFile
		: public GenericMolFile
	{
		public:

			BALL_CREATE(GAMESSDatFile)

			/** Nested class for the data blocks of the GAMESSFile **/
			class block
			{
				public:
					/** The name of this block **/
					String blockname;
					/** Stores the data in key - value format **/
					StringHashMap<String> data;

					void operator >> (std::ostream& os) const
						throw();
					
			};
			
			/** State of the parser **/
			struct State
			{
				GAMESSDatFile* current_parser;
			};

			/** @name Constructors and Destructors
			 */
			//@{
			
			/** Default constructor
			 */
			GAMESSDatFile()
				throw();

			/** Copy constructor
			 */
			GAMESSDatFile(const GAMESSDatFile& file)
				throw(Exception::FileNotFound);

			/** Detailed constructor
			 */
			GAMESSDatFile(const String& filename, File::OpenMode open_mode = std::ios::in)
				throw(Exception::FileNotFound);

			/** Destructor
			 */
			virtual ~GAMESSDatFile()
				throw();
			
			//@}
			/** @name Assignment.
			 */
			//@{
			
			/** Assignment operator.
			 */
			const GAMESSDatFile& operator = (const GAMESSDatFile& rhs)
				throw(Exception::FileNotFound);

			//@}

			/** @name Reading and Writing of Kernel Datastructures
			 */
			//@{
			
			/** Write a molecule to a GAMESSDatFile.
			 *  If additional GAMESS - keywords are stored in this class, they
			 *  will be written as well.
			 */
			virtual bool write(const Molecule& molecule)
				throw(File::CannotWrite);

			/** Write a system to a GAMESSDatFile.
			 *  If additional GAMESS - keywords are stored in this class, they
			 *  will be written as well.
			 */
			virtual bool write(const System& molecule)
				throw(File::CannotWrite);

			/** Read a Molecule from the GAMESSDatFile.
			 *  If the GAMESS .dat - file contains additional lines apart from the
			 *  molecule itself, they are stored in this class.
			 */
			virtual Molecule* read()
				throw(Exception::ParseError);

			/** Read a System from the GAMESSDatFile.
			 *  If the GAMESS .dat - file contains additional lines apart from the
			 *  molecule itself, they are stored in this class.
			 */
			virtual bool read(System& system)
				throw(Exception::ParseError);

			//@}

			/** @name Accessors
			 */
			//@{
			void newMolecule()
				throw();

			void setMoleculeName(char* name)
				throw();			
			
			void insertAtom(char* element, float charge, float x, float y, float z)
				throw();

			void insertBond(Index a1, Index a2)
				throw();
			
			void inBlock(const char* blockname)
				throw();

			void insertBlockedData(const char* key, const char* value)
				throw();

			void insertBlockedData(const String& key, const String& value)
				throw();

			String& getBlockedData(const String& block, const String& key)
				throw();

			const String& getBlockedData(const String& block, const String& key) const
				throw();

			void clearParameters()
				throw();
			//@}
			
			static State state;

		protected:
			virtual void initRead_();

			Molecule*	molecule_;
			
			String current_block_;
			StringHashMap<block> blocks_;
			String	symmetry_group_;
	};
}

#endif // BALL_FORMAT_GAMESSDATFILE_H
