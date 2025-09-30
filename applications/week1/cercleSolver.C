#include <iostream>
#include "../../lnInclude/week1/cercle.H"
#include "/home/smalik/development/PROJECTS_CXX/EPFL/src/utility/vectors/vector2D.H"

//#include "greeting.H"
//using namespace std;
//using namespace essentialTraining;
int main(){


//Define the radius and centre of the cercle
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
	return 0;

}//end-of-main



	//std::cout << std::endl;

	/*
	std::cout << "The first circle C2 - ";
	std::cout << "Circle initialized only with radius:" 
	          << std::endl;
	cercle C2(2.5);
	std::cout << std::endl;

	std::cout << "The Third circle C3 - ";
	std::cout << "Circle initialized with radius and a point:" 
			  << std::endl;
	cercle C3(2.5,0.32,0.013);
	std::cout << std::endl;	

	std::cout << "The Fourth circle C4 - ";
	std::cout << "Circle initialized with a point:" 
			  << std::endl;
	cercle C4(0.32,0.013);
	std::cout << std::endl;	


	std::cout << "The point to be checked for C4 is :"
			  << "(" << C4.getPoint().x_coordinate
			  << ", "<< C4.getPoint().y_coordinate
			  << ")" << std::endl;


	std::cout << "The radius of circle C3 is: "
			  << C3.getRadius() << std::endl;

	std::cout << "The radius of the default circle C2 is: "
			  << C2.getRadius() << std::endl;

	*/

	/*
	std::cout << "The radius before modification: "
			  << C1.getRadius() << std::endl;
	*/
	/*
	std::cout << "The Second circle C1 - ";
	std::cout << "Circle with default constructor:" 
			  << std::endl;
	cercle C1;
	C1.setRadius(2.5);
*/
	/*
	std::cout << "The radius after modification: "
			  << C1.getRadius() << std::endl;

	std::cout << "The point before modifications :"
			  << "(" << C1.getPoint().x_coordinate
			  << ", "<< C1.getPoint().y_coordinate
			  << ")" << std::endl;

	C1.setPoint(0.8,1.35);

	std::cout << "The point after modifications :"
			  << "(" << C1.getPoint().x_coordinate
			  << ", "<< C1.getPoint().y_coordinate
			  << ")" << std::endl;
		  
	*/
	/*
	std::cout << "The surface of the circle C1: "
			  << C1.surface() 
			  << std::endl;

	// Set point to be checked
	C1.setCentre(0.0,0.0);
	std::cout << "The centre of the circle is :"
			  << "(" << C1.getPoint().x_coordinate
			  << ", "<< C1.getPoint().y_coordinate
			  << ")" << std::endl;
		  
	double checkPoint_x = 0.2;
	double checkPoint_y = 0.5;
	*/
	/*
	std::cout << "The point (" << checkPoint_x << "," << checkPoint_y << ") is ";
			  if(C1.isInterior(checkPoint_x,checkPoint_y)==0) std::cout << "not ";
	std::cout << "in the interior of the cirlce." 
			  << std::endl;
	*/
/*
	// Using Ternary conditional operator
		// Ternary Conditional Operator Syntax
		// condition ? expression1 : expression2; 
	std::string result=(C1.isInterior(checkPoint_x,checkPoint_y)==1) ? 
					   "is " : "is not ";
	std::cout << "The point (" << checkPoint_x << "," << checkPoint_y << ") ";
	std::cout << result << "in the interior of the cirlce." 
			  << std::endl;

	*/
	
