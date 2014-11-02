// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: dockingAlgorithm.h,v 1.3.18.2 2007-06-17 07:02:21 oliver Exp $
//
// Author:
//
//

#ifndef BALL_STRUCTURE_DOCKING_DOCKINGALGORITHM_H
#define BALL_STRUCTURE_DOCKING_DOCKINGALGORITHM_H

#ifndef BALL_DATATYPE_OPTIONS_H
# include <BALL/DATATYPE/options.h>
#endif

#ifndef BALL_KERNEL_SYSTEM_H
# include <BALL/KERNEL/system.h>
#endif

#ifndef BALL_STRUCTURE_DOCKING_CONFORMATIONSET_H
# include <BALL/STRUCTURE/DOCKING/conformationSet.h>
#endif

namespace BALL
{
	/** Interface class for docking algorithms.
			\ingroup Docking
	*/
	class BALL_EXPORT DockingAlgorithm
	{
		public:

			virtual ~DockingAlgorithm() {};

			/** Attributes
			*/
			Options options;


			/** Operations
			*/

			/** Full setup.
			 *  Assigns systems 1 and two and the options for this DockingAlgorithm.
			 */
			virtual void setup(System& system1, System& system2, Options& new_options)
				throw();

			/** Alternative setup.
			 *  Assigns systems 1 and two without changing the options for this DockingAlgorithm.
			 */
			virtual void setup(System& system1, System& system2)
				throw();

			/**
			*/
			virtual void start()
				throw();

			/**
			*/
			virtual void pause()
				throw();

			/**
			*/
			virtual void proceed()
				throw();

			/**
			*/
			virtual void abort()
				throw();

			/**
			*/
			virtual bool hasFinished() const
				throw();

			///
			virtual bool wasAborted() const
				throw() { return abort_;}

			///
			virtual bool wasPaused() const
				throw() { return pause_;}

			/**
			*/
			virtual float getProgress() const
				throw();

			/** Return total_conformations putative complexes, ordered
			 *  according to their rank.
			 *  If total_conformations == 0, the option TOP_N is used
			 */
			virtual ConformationSet getConformationSet(Index total_conformations = 0)
				throw();

		protected:
			System system1_;
			System system2_;
			bool   pause_;
			bool   abort_;
	};

} // namespace BALL

#endif
