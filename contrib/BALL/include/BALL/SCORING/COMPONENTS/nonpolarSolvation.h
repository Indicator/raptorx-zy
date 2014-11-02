// $Id: nonpolarSolvation.h,v 1.2 2006-05-21 17:33:47 anker Exp $

#ifndef BALL_SCORING_COMPONENTS_NONPOLAR_H
#define BALL_SCORING_COMPONENTS_NONPOLAR_H

#include <BALL/SCORING/COMMON/scoringComponent.h>
#include <BALL/SCORING/COMMON/scoringFunction.h>
#include <BALL/SOLVATION/uhligCavFreeEnergyProcessor.h>
#include <BALL/SOLVATION/PCMCavFreeEnergyProcessor.h>
#include <BALL/SOLVATION/pair6_12InteractionEnergyProcessor.h>

namespace BALL
{

	/** SLICK nonpolar solvation component.
			{\bf Definition:} \URL{BALL/SORING/COMMON/nonpolarSolvation.h}
	*/
	class NonpolarSolvation
		:	public ScoringComponent
	{

		public:

		/**
		*/
		enum CalculationMethod
		{

			/**
			*/
			CALCULATION__NONE,

			/**
			*/
			CALCULATION__UHLIG,

			/**
			*/
			CALCULATION__PCM,

			/** 
			*/
			CALCULATION__VDW_SOLVENT,

			/** 
			*/
			CALCULATION__VDW_INTERACTION

		};


		/**
		*/
		struct Option
		{

			/**
			*/
			static const char* PROBE_RADIUS;

			/**
			*/
			static const char* SURFACE_TENSION;

			/**
			*/
			static const char* UHLIG_CONSTANT;

			/**
			*/
			static const char* SOLVENT_NUMBER_DENSITY;

			/**
			*/
			static const char* ABSOLUTE_TEMPERATURE;

			/**
			*/
			static const char* NONPOLAR_METHOD;

			/**
			*/
			static const char* VERBOSITY;

			/**
			*/
			static const char* SOLVENT_DESCRIPTOR_FILE;

			/**
			*/
			static const char* LJ_PARAM_FILE;

			/**
			*/
			static const char* ATOM_TYPE_FILE;

			/**
			*/
			static const char* NONPOLAR_OVERWRITE_RADII;

			/**
			*/
			static const char* NONPOLAR_RADIUS_RULES;

			/**
			*/
			static const char* NONPOLAR_RADIUS_SCALING;

		};

		
		/**
		*/
		struct Default
		{

			/**
			*/
			static const float PROBE_RADIUS;

			/**
			*/
			static const float SURFACE_TENSION;

			/**
			*/
			static const float UHLIG_CONSTANT;

			/**
			*/
			static const float SOLVENT_NUMBER_DENSITY;

			/**
			*/
			static const float ABSOLUTE_TEMPERATURE;

			/**
			*/
			static const Size NONPOLAR_METHOD;

			/**
			*/
			static const Size VERBOSITY;

			/**
			*/
			static const String SOLVENT_DESCRIPTOR_FILE;

			/**
			*/
			static const String LJ_PARAM_FILE;

			/**
			*/
			static const String ATOM_TYPE_FILE;

			/**
			*/
			static const bool NONPOLAR_OVERWRITE_RADII;

			/**
			*/
			static const String NONPOLAR_RADIUS_RULES;

			/**
			*/
			static const float NONPOLAR_RADIUS_SCALING;

		};


		/** @name	Constructors and Destructors	
		*/
		//@{ 

		/**	Default constructor.
		*/
		NonpolarSolvation()
			throw();

		/**	Constructor.
		*/
		NonpolarSolvation(ScoringFunction& sf)
			throw();

		/**	Copy constructor
		*/
		NonpolarSolvation(const NonpolarSolvation& fhb)
			throw();

		/**	Destructor.
		*/
		virtual ~NonpolarSolvation()
			throw();

		//@}
		/**	@name	Assignment
		*/
		//@{

		/** Assignment.
		*/
		const NonpolarSolvation& operator = (const NonpolarSolvation& fr)
			throw();

		/** Clear method.
		*/
		virtual void clear()
			throw();

		//@}
		/**	@name	Predicates.
		*/
		//@{

		bool operator == (const NonpolarSolvation& fr) const
			throw();

		//@}
		/**	@name	Setup Methods	
		*/
		//@{

		/**	Setup method.
		*/
		virtual bool setup()
			throw();

		//@}
		/**	@name	Accessors	
		*/
		//@{

		/**	Calculates and returns the component's energy.
		*/
		virtual double calculateScore()
			throw();

		//@}

		private:

		/*_
		*/
		System receptor_;

		/*_
		*/
		System ligand_;

		/*_
		*/
		System complex_;

		/*_
		*/
		EnergyProcessor* processor_;

		/*_
		*/
		Size verbosity_;

		/*_
		*/
		double factor_;

		/*_
		*/
		Size calculation_method_;

		/*_
		*/
		float probe_radius_;

		/*_
		*/
		float surface_tension_;

		/*_
		*/
		float constant_;

		/*_
		*/
		float solvent_number_density_;

		/*_
		*/
		float absolute_temperature_;

		/*_
		*/
		UhligCavFreeEnergyProcessor uhlig_;

		/*_
		*/
		PCMCavFreeEnergyProcessor pcm_;

		/*_
		*/
		Pair6_12InteractionEnergyProcessor vdw_solvent_;

	};

} // namespace BALL

#endif // BALL_SCORING_COMPONENTS_NONPOLAR_H
