
#include <iostream>

using namespace std;

// You are to write a simple C++ code to find the area of a triangle.

int main()
{


    int base,height;
    float area;

    cout << "This program calculates the area of a triangle.\n"<<endl;

    cout<<"Enter the base of the triangle:\n";
    cin>>base;

    cout<<"Enter the height of the triangle:\n";
    cin>>height;



    area = 0.5 * base * height;


    cout<<"The area of the triagle with the given it's given base and height is: "<<area<<"units";

    return 0;
}
