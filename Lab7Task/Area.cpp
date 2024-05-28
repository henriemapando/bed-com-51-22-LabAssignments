# include "Area.h"
#include <cmath>

namespace shapes {
    double Area:: calculateArea(const square& square) {
        return square.getSideLength() * square.getSideLength();
    }
    double Area:: calculateArea(const triangle& triangle) {
        // Implement triangle area calculation
        return 0.5 * triangle.getBase() * triangle.getHeight();
    }
    double Area::calculateArea(const circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius();
    }
}