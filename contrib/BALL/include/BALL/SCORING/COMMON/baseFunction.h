// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: baseFunction.h,v 1.1 2005-11-21 19:27:02 anker Exp $

#ifndef BALL_SCORING_COMMON_BASEFUNCTION
#define BALL_SCORING_COMMON_BASEFUNCTION

namespace BALL
{

	/** Define the interface for the base function
	 */
	class ScoringBaseFunction
	{

		public:

			/**
			 */
			enum BaseFunctionType
			{
				/**
				 */
				BASE_FUNCTION_TYPE__LINEAR,

				/**
				 */
				BASE_FUNCTION_TYPE__FERMI
			};


			///
			ScoringBaseFunction()
				throw();

			///
			ScoringBaseFunction(float lower, float upper)
				throw();

			///
			virtual ~ScoringBaseFunction()
				throw();

			///
			virtual void setLower(float lower)
				throw();

			///
			virtual void setUpper(float upper)
				throw();

			///
			virtual float calculate(float x) const
				throw();

			///
			virtual float calculate(float x, float lower, float upper) 
				throw();


		protected:

			//_
			float lower_;

			//_
			float upper_;

	};

}


#endif // BALL_SCORING_COMMON_BASEFUNCTION
