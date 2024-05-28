# include "Circle.h"
# include <cmath>
using namespace std;

namespace shapes {
    circle:: circle() : radius(0) {}
    circle:: circle(double r) : radius(r) {}

    double circle:: getRadius() const {
        return radius;
    }
    void circle::setRadius(double r); const {
        radius = r;
    }
    double calculateArea() const {
        return M_PI * radius * radius;
    }
    circle::~circle() {}
}