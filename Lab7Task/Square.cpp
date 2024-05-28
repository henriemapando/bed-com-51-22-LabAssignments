# include "Square.h"

namespace shapes {
    square::square() : sideLength (0) {}
    square::square(double side) : sideLength (side) {}

    double square::getSideLength() const {
        return sideLength;
    }
    void square::setSideLength(double side) {
     sideLength = side;
    }
    double square::calculateArea() const {
        return sideLength * sideLength;
    }
    square::~square() {}
}