// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: DSN6File.h,v 1.1.4.1 2007-03-25 21:23:41 oliver Exp $
//

#ifndef BALL_FORMAT_DSN6FILE_H
#define BALL_FORMAT_DSN6FILE_H

#ifndef BALL_SYSTEM_FILE_H
#	include <BALL/SYSTEM/file.h>
#endif

#ifndef BALL_DATATYPE_REGULARDATA3D_H
# include <BALL/DATATYPE/regularData3D.h>
#endif

namespace BALL
{
	/** DSN6 density map file format. This class enables BALL to read and
	 		write DSN6 - type binary electron density maps as used by FRODO and
			O.
    	\ingroup  Format
	*/
	class BALL_EXPORT DSN6File
		:	public File
	{

		public:

		BALL_CREATE(DSN6File)

		/** @name Constructors and Destructor
		*/
		//@{

		/// Default constructor
		DSN6File()
			throw();

		/// Copy constructor
		DSN6File(const DSN6File& file)
			throw(Exception::FileNotFound);

		/// Detailed constructor
		DSN6File(const String& name, File::OpenMode open_mode = std::ios::in)
			throw();

		/// Destructor
		virtual ~DSN6File()
			throw();

		//@}
		/** @name Assignment
		*/
		//@{

		/// Assignment operator
		const DSN6File& operator = (const DSN6File& file)
			throw();

		/// Clear method
		virtual void clear()
			throw();

		//@}
		/** @name Predicates
		*/
		//@{

		/// Equality operator
		bool operator == (const DSN6File& file) const
			throw();

		///
		bool isSwappingBytes() const
			throw();

		//@}
		/// @name Public methods for file handling
		//@{

		/** open a DSN6File
		*/
		virtual bool open(const String& name, File::OpenMode open_mode = std::ios::in)
			throw(Exception::FileNotFound);

		/** Read the header of an existing file.
				Return true if the header could be read successfully, false ow.
		*/
		virtual bool readHeader()
			throw();

		/** Read the file into a RegularData3D field. **/
		virtual bool read(RegularData3D& map)
			throw();

		/** Write a header
				Return true if the header could be written successfully, false ow.
		*/
		virtual bool writeHeader()
			throw();

		//@}
		/** @name Accessors 
		*/
		//@{

		//@}

		protected:

			short int readHeaderValue_(char* header, Position pos)
				throw();

			void convertBrick_(char* brick)
				throw();

			/// a flag indicating that we have to swap bytes when reading header values
			bool swap_bytes_;

			/// the start coordinates in grid coordinates, i.e. indices
			Vector3 start_;

			/// the extent of the map
			Vector3 extent_;

			/// the sampling rates used for the map
			Vector3 sampling_rate_;
			
			/// dimension of the crystal unit cell in Angstrom/sample
			Vector3 crystal_dimension_;

			/// angles of the crystal unit cell
			Angle alpha_, beta_, gamma_;

			/// scaling factor for the cell geometry
			float cell_scaling_;

			/// conversion factors for the density map
			float prod_;
			float plus_;

			/// geometry in cartesian coordinates
			Vector3 origin_, xaxis_, yaxis_, zaxis_;
	};
} // namespace BALL

#endif // BALL_FORMAT_DCDFILE_H 
