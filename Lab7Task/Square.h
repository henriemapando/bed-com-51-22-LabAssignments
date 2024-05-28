# ifndef SQUARE_H
# define SQUARE_H

namespace shapes {
    class square{
        private:
        double sideLength;
        public:
        square();
        square(double side);
        double getSideLength() const;
        void setSideLength(double side);
        double calculateArea() const;
        ~square();
    };
}
#endif // Square_H