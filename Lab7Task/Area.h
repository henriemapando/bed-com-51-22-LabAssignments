# ifndef AREA_H
#define AREA_H
# include<cmath>

# include "Square.h"
# include "Triangle.h"
# include "Circle.h"

namespace shapes {
    class Area{
        public:
        static double calculateArea(const square& square);
        static double calculateArea(const triangle& triangle);
        static double calculateArea(const circle& circle);
    };
}
#endif