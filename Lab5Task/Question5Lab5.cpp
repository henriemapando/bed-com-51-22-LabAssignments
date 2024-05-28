# include <iostream>
using namespace std;
// functions of calculation for areas
double calculateSquareArea(double side);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);

int main ()
{
    // decraration of variables
    int choice;
    double side;
    double length;
    double width;
    double base;
    double height;

    do {
        cout <<"Please select area of the shape to calculate :\n"
        <<"1. Square\n"
        <<"2. Rectangle\n"
        <<"3. Triangle\n"
        <<"4. quit program\n";
        cin >> choice;

    switch (choice){
        case 1:
        cout << "Enter the side length of the Square: ";
        cin >> side;
        cout << "Area of the Square is: "<< calculateSquareArea(side) << endl;break;
        case 2:
        cout <<"Enter the length of the rectangle: ";
        cin >> length;
        cout <<"Enter the widith of the rectangle: ";
        cin>>width;
        cout <<"Area ot thr rectangle is: "<<calculateRectangleArea(length, width) << endl; break;
        case 3:
        cout <<"Enter the base length of the triangle: ";
        cin >> base;
        cout <<"Enter the height of the trangle; ";
        cin>> height;
        cout<< "Area of the triangle is: "<<calculateTriangleArea(base, height) <<endl; break;
        case 4:
        cout <<"exiting program.\n"; break;
        default:
        cout << "Invalid input. Please enter a valid option.\n";

    }
        
    }
while (choice != 4);
return 0;
}
// function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}
// function to calculate the area Rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}
// function to calculate the area Triangle
double calculateTriangleArea(double base,double height){
return 0.5 * base * height;
}