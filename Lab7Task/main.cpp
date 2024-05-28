# include <iostream>
# include "Rectangle.h" // header
using namespace std;

int main () {
    float length, width;
    cout <<"Enter the length of the rectangle: "; // prompting the user input for length
    cin >> length;
    cout << "Enter the width of the rectangle: ";// prompting user input for width
    cin >> width;

    Rectangle rectangle;
    rectangle.setLength(length);
    rectangle.setWidth(width);

    cout << "Area of the rectangle: " << rectangle.calculateArea() <<endl;

    return 0;
}