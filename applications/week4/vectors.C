// Test script to test utility/vector 
#include <iostream>
#include "/home/smalik/development/PROJECTS_CXX/EPFL/src/week4/vector/vector.H"

int main(){

    Vector A(1.2,0.3);
    Vector B(2.4,3.0,1.5);
     A.coordinates();
    std::cout << "Coordinates of the vector are : ";
     A.coordinates() ;
     std::cout << std::endl;
    std::cout << "X coordinate of the vector is : " 
         << A.getXCoordinate() << std::endl;
    std::cout << "Y coordinate of the vector is : " 
         << A.getYCoordinate() << std::endl;

     A+=B;

     std::cout << "After addition : " << A << std::endl;

     A-=B;
     std::cout << "After subtraction : " << A << std::endl;

     Vector C;
     C= A+A;
     std::cout << "External addition : " << C << std::endl;

     Vector D;
     D= B-A;
     std::cout << "External addition : " << D << std::endl;

     A*=5.0;
     std::cout << "After scalar multiplication : " << A << std::endl;

    Vector E(1,2,-0.1);
    std::cout << "Negative of vector : " << E << std::endl;
    std::cout << "is : " << -E << std::endl;

    std::cout << "Multiplying vector : " << E << std::endl;
    std::cout << "by 3 : " << 3*E << std::endl;

    Vector G(2.6,3.5,4.1);
    std::cout << E << " * " << G << " = " << E*G<< std::endl;

    std::cout << G << " * " << E << " = " << G*E<< std::endl;
    
    std::cout << " || " << E << " || =  " << E.norm()<< std::endl;
    
    std::cout << " || " << G << " || =  " << G.norm()<< std::endl;
  
    std::cout << "angle ( " << G << ", " << E
              << " = " <<  angle(G,E) << std::endl;
         

    return 0;

}//end-of-main