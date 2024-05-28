# include <iostream>
# include "Rectangle.h" // header
using namespace std;

int main () {
    float length, width;
    cout <<"Enter the length of the first rectangle: "; // prompting the user input for length
    cin >> length;
    cout << "Enter the width of the first rectangle: ";// prompting user input for width
    cin >> width;

    Rectangle rectangle1;
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    cout << "Area of the rectangle: " << rectangle1.calculateArea() <<endl;

    cout  << "Enter the length of the second rectangle: ";
    cin >> length;
    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    Rectangle rectangle2(length, width);
    cout <<"Area of the second rectangle: " << rectangle2.calculateArea() << endl;

    return 0;
}