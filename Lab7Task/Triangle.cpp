# include "Triangle.h"

namespace shapes {
    triangle::triangle() : base (0), height (0) {}
    triangle::triangle(double base, double height) : base(base), height(height) {}

    double triangle::getBase() const {
        return base;
        }
    double triangle::getHeight() const{
        return height;
    }
    void triangle::setBase(double base) {
        this-> base = base;
    }
    void triangle:: setHeight(double height) {
            this->height = height;
        }
        triangle::~triangle(){}
      }