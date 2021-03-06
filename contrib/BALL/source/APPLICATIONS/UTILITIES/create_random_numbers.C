// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: create_random_numbers.C,v 1.1.22.1 2007-08-07 18:26:18 oliver Exp $
//
// A small example application for creating random numbers.

#include <BALL/MATHS/randomNumberGenerator.h>
#include <BALL/DATATYPE/string.h>

using namespace BALL;

int main(int argc, char** argv)
{
	Size numbers;

	if (argc != 2)
	{
		numbers = 20;
		std::cerr << "Creating 20 random numbers. Call me with the number of random numbers you want." 
			<< std::endl;
	}
	else
	{
		String argument(argv[1]);
		numbers = argument.toInt();
	}
	
	std::cout << "******************************" << std::endl;

	double r, rmin=1e32, rmax=-1e32;

	RandomNumberGenerator rng;
	rng.setup(1802, 9373);

	for (Size i=0; i < numbers; i++)
	{
		r = rng.randomUniform();
		if (r < rmin) rmin = r;
		if (r > rmax) rmax = r;
		std::cout << r << std::endl;
	}
	std::cout << "******************************" << std::endl;
	std::cout << "min: " << rmin << "  max: " << rmax << std::endl; 

}
