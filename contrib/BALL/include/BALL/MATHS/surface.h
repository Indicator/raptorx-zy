// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: surface.h,v 1.29 2004-10-22 20:11:54 amoll Exp $
//

#ifndef BALL_MATHS_SURFACE_H
#define BALL_MATHS_SURFACE_H

#ifndef BALL_MATHS_VECTOR3_H
#	include <BALL/MATHS/vector3.h>
#endif

namespace BALL 
{
	/** \defgroup GeometricSurface Surface in three-dimensional space.

	 		\ingroup GeometricObjects
	 */
	//@{

	/**	Generic Three-dimensional Surface class.
			This class describes a three-dimensional triangulated surface. 
			Each triangle is represented by three indices to vertices (as
			described by the  \link TSurface::Triangle TSurface::Triangle \endlink ). Each of the vertices has
			a position and possibly a normal vector associated.
	*/
	template <typename T>
	class TSurface
	{
		public:

		BALL_CREATE(TSurface)

		/**	@name	Type definitions
		*/
		//@{

		/**
		*/
		class Triangle
		{
			public:
			Index	v1;
			Index	v2;
			Index	v3;

			bool operator == (const Triangle& triangle) const throw()
			{
				return (v1 == triangle.v1) && (v2 == triangle.v2) && (v3 == triangle.v3);
			}


			bool operator != (const Triangle& triangle) const throw()
			{
				return !(v1 == triangle.v1) && (v2 == triangle.v2) && (v3 == triangle.v3);
			}
		};
			
		/// A vertex
		typedef TVector3<T> Vertex;

		/// A normal
		typedef TVector3<T> Normal;
		//@}

		/**	@name	Constructors and Destructors
		*/
		//@{

		///
		TSurface()
			throw();

		///
		TSurface(const TSurface& surface)
			throw();

		///
		virtual ~TSurface()
			throw();
		//@}

		/**	@name	Assignment
		*/
		//@{

		///
		void set(const TSurface& surface)
			throw();

		///
		TSurface& operator = (const TSurface& surface)
			throw();

		///
		void get(TSurface& surface) const
			throw();

		///
		void clear()
			throw();

		/**	Read from MSMS file.
				Read the contents of the vertex and faces file created by Michael
				Sanners software MSMS.
		*/
		void readMSMSFile(const String& vert_filename, const String& face_filename)
			throw(Exception::FileNotFound);
		//@}

		/**	@name	Accessors
		*/
		//@{

		/** Compute the surface area.
				The area is computed as the sum of the areas of all 
				triangles.
		*/
		float getArea() const
			throw();

		/// Return the number of triangles
		Size getNumberOfTriangles() const
			throw();
		
		/// Return the number of vertices
		Size getNumberOfVertices() const
			throw();

		/// Return the number of normals
		Size getNumberOfNormals() const
			throw();

		/// Return a triangle with a given index
		Triangle& getTriangle(Position index)
			throw();

		/// Return a triangle with a given index
		const Triangle& getTriangle(Position index) const
			throw();
			
		/// Clear all triangles
		void clearTriangles();

		/// Resize the triangle array
		void resizeTriangles(Size size);

		/// Add a triangle
		void pushBackTriangle(const Triangle& triangle)
			throw();

		/// Return the position of a vertex
		Vertex& getVertex(Position index)
			throw();

		/// Return the position of a vertex
		const Vertex& getVertex(Position index) const
			throw();

		/// Clear all vertices
		void clearVertices();

		/// Resize the vertex array
		void resizeVertices(Size size);

		/// Add a vertex
		void pushBackVertex(const Vertex& vertex)
			throw();

		/// Return the position of a normal
		Normal& getNormal(Position index)
			throw();

		/// Return the position of a normal
		const Normal& getNormal(Position index) const
			throw();

		/// Clear all normals
		void clearNormals();

		/// Resize the normal array
		void resizeNormals(Size size);

		/// Add a normal
		void pushBackNormal(const Normal& n)
			throw();

		//@}

		/**	@name	Predicates
		*/
		//@{

		///
		bool operator == (const TSurface& surface) const
			throw();

		///
		bool operator != (const TSurface& surface) const
			throw();
		//@}

		/**	@name	Attributes
		*/
		//@{

		/// the vertices
		vector<Vertex>		vertex;

		/// the normals for each vertex
		vector<Normal>		normal;

		/// the triangles
		vector<Triangle>	triangle;
		//@}
	};
	//@}

	template <typename T>
	TSurface<T>::TSurface()
		throw()
	{
	}

	template <typename T>
	TSurface<T>::TSurface(const TSurface<T>& surface)
		throw()
		:	vertex(surface.vertex),
			normal(surface.normal),
			triangle(surface.triangle)
	{
	}

	template <typename T>
	TSurface<T>::~TSurface()
		throw()
	{
	}

	template <typename T>
	void TSurface<T>::clear()
		throw()
	{
		vertex.clear();
		normal.clear();
		triangle.clear();
	}
	
	template <typename T>
	void TSurface<T>::set(const TSurface<T>& surface)
		throw()
	{
		vertex = surface.vertex;
		normal = surface.normal;
		triangle = surface.triangle;
	}

	template <typename T>
	TSurface<T>& TSurface<T>::operator = (const TSurface<T>& surface)
		throw()
	{
		vertex = surface.vertex;
		normal = surface.normal;
		triangle = surface.triangle;
		return *this;
	}
	
	template <typename T>
	void TSurface<T>::get(TSurface<T>& surface) const
		throw()
	{
		surface.vertex = vertex;
		surface.normal = normal;
		surface.triangle = triangle;
	}
	
	template <typename T>
	void TSurface<T>::readMSMSFile(const String& vert_filename, const String& face_filename)
		throw(Exception::FileNotFound)
	{
		// delete old contents
		normal.clear();
		vertex.clear();
		triangle.clear();

		std::ifstream file(vert_filename.c_str());
		if (!file)
		{
			throw Exception::FileNotFound(__FILE__, __LINE__, vert_filename);
		}

		// there are two formats: one with three lines of 
		// header and one without
		String line;
		while ((line.countFields() != 9) && file)
		{
			line.getline(file);
		}
		
		String s[6];
		while (file && (line.countFields() == 9))
		{
			// read the vertex coordinates and the normal vector 
			line.split(s, 6);
			vertex.push_back(Vertex(s[0].toFloat(), s[1].toFloat(), s[2].toFloat()));
			normal.push_back(Normal(s[3].toFloat(), s[4].toFloat(), s[5].toFloat()));
			
			// read the next line
			line.getline(file);
		}
		file.close();
		// workaround for trouble in File
		file.clear();

		// now read the faces file:
		file.open(face_filename.c_str());
		if (!file)
		{
			throw Exception::FileNotFound(__FILE__, __LINE__, face_filename);
		}

		// there are two formats: one with three lines of 
		// header and one without
		while ((line.countFields() != 5) && file)
		{
			line.getline(file);
		}
		
		Triangle t;
		Size number_of_vertices = (Size)vertex.size();
		while (file && (line.countFields() == 5))
		{
			// read the vertex indices
			line.split(s, 5);
			t.v1 = (Index)s[0].toInt() - 1;
			t.v2 = (Index)s[1].toInt() - 1;
			t.v3 = (Index)s[2].toInt() - 1;

			// if all three vertex indices are valid, insert the triangle
			if ((t.v1 < (Index)number_of_vertices) && (t.v1 >= 0)
					&& (t.v1 < (Index)number_of_vertices) && (t.v1 >= 0)
					&& (t.v1 < (Index)number_of_vertices) && (t.v1 >= 0))
			{
				triangle.push_back(t);
			}
			
			// read the next line
			line.getline(file);
		}
		file.close();
	}

	template <typename T>
	float TSurface<T>::getArea() const
		throw()
	{
		// add the areas of all triangles
		double area = 0;
		for (Size i = 0; i < triangle.size(); i++)
		{
			// add the length of the vector products of two sides of each triangle
			// this is equivalent to the surface area of the parallelogram, and thus to twice the triangle area
			area += ((vertex[triangle[i].v2] - vertex[triangle[i].v1]) % (vertex[triangle[i].v3] - vertex[triangle[i].v1])).getLength();
		}
		
		// A = 1/2 \sum |r1 x r2|
		return (float)( area * 0.5 );
	}

	template <typename T>
	bool TSurface<T>::operator == (const TSurface<T>& surface) const
		throw()
	{
		return ((surface.vertex == vertex) 
						&& (surface.normal == normal) 
						&& (surface.triangle == triangle));
	}

	template <typename T>
	BALL_INLINE
	Size TSurface<T>::getNumberOfTriangles() const
			throw()
	{
		return (Size)triangle.size();
	}
		
	template <typename T>
	BALL_INLINE
	Size TSurface<T>::getNumberOfVertices() const
			throw()
	{
		return (Size)vertex.size();
	}

	template <typename T>
	BALL_INLINE
	Size TSurface<T>::getNumberOfNormals() const
			throw()
	{
		return (Size)normal.size();
	}

	
	template <typename T>
	BALL_INLINE
	typename TSurface<T>::Triangle& TSurface<T>::getTriangle(Position index)
		throw()
	{
		return triangle[index];
	}

	template <typename T>
	BALL_INLINE
	const typename TSurface<T>::Triangle& TSurface<T>::getTriangle(Position index) const
		throw()
	{
		return triangle[index];
	}

	
	template <typename T>
	BALL_INLINE
	void TSurface<T>::clearTriangles()
	{
		triangle.clear();
	}

	template <typename T>
	BALL_INLINE
	void TSurface<T>::resizeTriangles(Size size)
	{
		triangle.resize(size);
	}

	template <typename T>
	BALL_INLINE
	void TSurface<T>::pushBackTriangle(const Triangle& t)
		throw()
	{
		triangle.push_back(t);
	}

	
	template <typename T>
	BALL_INLINE
	typename TSurface<T>::Vertex& TSurface<T>::getVertex(Position index)
		throw()
	{
		return vertex[index];
	}

	template <typename T>
	BALL_INLINE
	const typename TSurface<T>::Vertex& TSurface<T>::getVertex(Position index) const
		throw()
	{
		return vertex[index];
	}

	template <typename T>
	BALL_INLINE
	void TSurface<T>::clearVertices()
	{
		vertex.clear();
	}

	template <typename T>
	BALL_INLINE
	void TSurface<T>::resizeVertices(Size size)
	{
		vertex.resize(size);
	}

	
	template <typename T>
	BALL_INLINE
	void TSurface<T>::pushBackVertex(const typename TSurface<T>::Vertex& position)
		throw()
	{
		vertex.push_back(position);
	}

	template <typename T>
	BALL_INLINE
	typename TSurface<T>::Normal& TSurface<T>::getNormal(Position index)
		throw()
	{
		return normal[index];
	}

	template <typename T>
	BALL_INLINE
	const typename TSurface<T>::Normal& TSurface<T>::getNormal(Position index) const
		throw()
	{
		return normal[index];
	}

	template <typename T>
	BALL_INLINE
	void TSurface<T>::clearNormals()
	{
		normal.clear();
	}

	template <typename T>
	BALL_INLINE
	void TSurface<T>::resizeNormals(Size size)
	{
		normal.resize(size);
	}

	template <typename T>
	BALL_INLINE
	void TSurface<T>::pushBackNormal(const typename TSurface<T>::Normal& n)
		throw()
	{
		normal.push_back(n);
	}

	template <typename T>
	bool TSurface<T>::operator != (const TSurface<T>& surface) const
		throw()
	{
		return !(*this == surface);
	}


	/**	Default surface type.
	 		\ingroup GeometricSurface
	*/
	typedef TSurface<float> Surface;

} // namespace BALL

#endif // BALL_MATHS_SURFACE_H
