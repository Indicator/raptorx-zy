// $Id: slickScore.h,v 1.2 2006-05-21 18:15:29 anker Exp $

#ifndef BALL_SCORING_FUNCTIONS_SLICKSCORE_H
#define BALL_SCORING_FUNCTIONS_SLICKSCORE_H

#ifndef BALL_COMMON_H
#	include <BALL/common.h>
#endif

#ifndef BALL_MOLMEC_COMMON_FORCEFIELD_H
#	include <BALL/SCORING/COMMON/scoringFunction.h>
#endif

#ifndef BALL_KERNEL_SYSTEM_H
#	include <BALL/KERNEL/system.h>
#endif

#ifndef BALL_DATATYPE_HASHMAP_H
#	include <BALL/DATATYPE/hashMap.h>
#endif

namespace BALL 
{
	/** SLICKEnergy scoring function
			{\bf Definition:} \URL{BALL/SCORING/FUNCTIONS/slickScore.h}
	*/
	class SLICKScore
		: public ScoringFunction
	{

		public:

		/**	@name Constant Definitions
		*/
		//@{

		/**	Option names
		*/
		struct Option
		{
			/**	The additive constant (@see Default::CONST)
			*/
			static const char* CONST;

			/**
			*/
			static const char* CHPI;

			/**
			*/
			static const char* HB;

			/**
			*/
			static const char* VDW;

			/**
			*/
			static const char* POLAR;

		};


		/** Default values for SLICKEnergy options.
		*/
		struct Default
		{

			/**	The additive constant (@see Default::CONST)
			*/
			static const float CONST;

			/**
			*/
			static const float CHPI;

			/**
			*/
			static const float HB;

			/**
			*/
			static const float VDW;

			/**
			*/
			static const float POLAR;

		};



		//@}
		/** @name	Constructors and Destructors
		*/
		//@{

		BALL_CREATE(SLICKScore)

		/**	Default constructor.
		*/
		SLICKScore()
			throw();

		/** Construct a SLICKScore with pointers to protein and
				ligand
		*/
		SLICKScore(Molecule& protein, Molecule& ligand)
			throw();

		/** Construct a SLICKScore with options.
		*/
		SLICKScore(Molecule& protein, Molecule& ligand,
				const Options& options)
			throw();

		/**	Copy constructor
		*/
		SLICKScore(const SLICKScore& slick)
			throw();

		/** Destructor
		*/
		virtual ~SLICKScore()
			throw();

		//@}
		/**	@name Assignment
		*/
		//@{

		/**	Assignment operator.
		*/
		const SLICKScore& operator = (const SLICKScore& slick)
			throw();

		/** Clear method.
		*/
		virtual void clear()
			throw();

		//@}
		/**	@name	Setup Methods
		*/
		//@{

		/**	Force field specific setup
		*/
		virtual bool specificSetup()
			throw();

		//@}
		/**	@name Accessors specific to the SLICKScore scoring function
		*/
		//@{

		/**
		*/
		double getVDWScore() const
			throw();

		/**
		*/
		double getCHPIScore() const
			throw();

		/**
		*/
		double getPolarSolvationScore() const
			throw();

		/**
		*/
		double getNonpolarSolvationScore() const
			throw();

		/**
		*/
		double getHydrogenBondScore() const
			throw();
		//@}


		private:

		/*_
		*/
		void registerComponents_()
			throw();

	};

} // namespace BALL

#endif // BALL_SCORING_FUNCTIONS_SLICKSCORE_H
