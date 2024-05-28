# ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class triangle{
        private:
        double base;
        double height;
        public:
        triangle ();
        triangle(double base, double height);
        double getBase() const;
        double getHeight() const;
        void setBase(double base);
        void setHeight(double height);
        ~triangle();
    };
}
#endif // triangle_h
