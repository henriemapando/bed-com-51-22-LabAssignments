# include <iostream >
# include "Square.h"
# include "Triangle.h"
#include "Circle.h"
# include "Area.h"

using namespace std;
using namespace shapes;
int main( ) {
    char choice;
    do {
        cout << "Select an option: " << endl;
        cout << "1. calculate the area of a square" << endl;
        cout << "2. calculate the area of a triangle" << endl;
        cout << "3. calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                cout <<"Enter the side length of the square: "<<endl;
                cin >> side;
                square square(side);
                cout << " Area of the square: "<< Area::calculateArea(square) << endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter the base and height of the triangle: "<<endl;
                cin >> base >> height;
                triangle triangle(base, height);
                cout << "Area of the triangle: "<< Area::calculateArea(triangle) <<endl;
                break;
            }
            case '3': {
                double radius;
                cout <<"Enter the radius of the circle: "<< endl;
                cin >> radius;
                circle circle(radius);
                cout << "Area of the circle: " << Area:: calculateArea(circle) << endl;
                break;
                default:
                cout << "Invalid choice. please try again\n";
            }
        } while (choice != '4') ;
        
        return 0;
    }
}