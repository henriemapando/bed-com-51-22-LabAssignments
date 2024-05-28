# ifndef CIRCLE_H
# define CIRCLE_H

namespace shapes {
    class circle {
        private:
        double radius;
        public:
        circle();
        circle(double radius);
        double getRadius() const;
        void setRadius(double radius);
        ~circle();
    };
}
#endif //Circle_H