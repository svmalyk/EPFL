// Test script to test utility/vector 
#include <iostream>
#include "/home/smalik/development/PROJECTS_CXX/EPFL/src/utility/vectors/vector2D.H"

int main(){

    vector2D A(1.2,0.3);
     A.coordinates();
    std::cout << "Coordinates of the vector are : ";
     A.coordinates() ;
     std::cout << std::endl;
    std::cout << "X coordinate of the vector is : " 
         << A.getXCoordinate() << std::endl;
    std::cout << "Y coordinate of the vector is : " 
         << A.getYCoordinate() << std::endl;
    return 0;

}//end-of-main