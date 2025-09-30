#include <iostream>
#include "../../lnInclude/week1/triangle.H"
#include "/home/smalik/development/PROJECTS_CXX/EPFL/src/utility/vectors/vector3D.H"

int main(){


// Construct the triangle
	//Scalene triangle
	
	//Isosceles triangle.
	//vector3D A(7, 10, 0), B(-2, 5, 0), C(3, -4, 0);
	//vector3D A(0,0,0), B(2.5, 2.5, 0), C(0, 5, 0);
	
	//Equilateral triangle
	//vector3D A(2,5,0), B(8,5,0), C(5,10.196152,0);
	//vector3D A(0,0,1), B(0,1,0), C(1,0,0);

	//Scalene triangle
	vector3D A(5,8,0), B(1,2,0), C(8,6,0);

	triangle ABC(A,B,C);

	// Length of the sides of the triangle
	//double AB = ABC.length(A,B);
	//double BC = ABC.length(B,C);
	//double CA = ABC.length(C,A);
	std::cout << std::endl;
	double perimeter = ABC.perimeter();

	std::cout << "The perimeter of the triangle is: " << perimeter << std::endl;
	std::cout << std::endl;

	std::string triangleType;
	triangleType=ABC.triangleTypeBySide();
	std::cout << "This is " 
			  << triangleType 
			  << " triangle."
			  << std::endl;
	
/*
	double radius=2.5;
	vector2D centre(0.1,0.3);
	
	//Circle initialzed with radius and centre.
	std::cout << "Cercle C1>>" << std::endl;
	cercle C1(radius,centre);
	std::cout << std::endl;

	//Circle initialized with radius
	std::cout << "Cercle C2>>" << std::endl;
	cercle C2(radius);
	std::cout << std::endl;

	//Circle initialized with centre
	std::cout << "Cercle C3>>" << std::endl;
	cercle C3(centre);
	std::cout << std::endl;

	std::cout << "C3 Centre abscissa: " 
	          << centre.getXCoordinate()
			  << std::endl;	
	
	std::cout << "C3 Centre ordinate: " 
	          << centre.getYCoordinate() 
			  << std::endl;

	std::cout << std::endl;

	// Note: radius of C3 has default value 0.0
	// Set the radius of the circle C3
	C3.setRadius(radius);
	// Calculate the surface of the circle
	std::cout << "Surface of circle C3: "
	<< C3.surface()
	<< std::endl;

	std::cout << std::endl;
	
	std::cout << "Test: is interior or not ?" << std::endl;
	// Check wether a point is in the interior of the cirlce
	double checkPoint_x = 0.2;
	double checkPoint_y = 0.5;
	vector2D checkPoint(2.2,7.5);
	std::string result;

	// Using Ternary conditional operator
		// Ternary Conditional Operator Syntax
		// condition ? expression1 : expression2; 
	std::cout << "Using coordinates>>" << std::endl;
	result=(C3.isInterior(checkPoint_x,checkPoint_y)==1) ? 
					   "is " : "is not ";
	std::cout << "The point (" << checkPoint_x << "," << checkPoint_y << ") ";
	std::cout << result << "in the interior of the cirlce." 
			  << std::endl;


	std::cout << "Using vectors>>" << std::endl;
	result=(C3.isInterior(checkPoint)==1) ? 
					   "is " : "is not ";
	std::cout << "The point ";
				checkPoint.coordinates();
	std::cout << result << "in the interior of the cirlce." 
			  << std::endl;

*/			  
	return 0;

}//end-of-main

