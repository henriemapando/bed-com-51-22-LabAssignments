# ifndef RECTANGLE_H
# define RECTANGGLE_H

class Rectangle {
    private:
    float length;
    float width;

    public:
    Rectangle (); // default constructor
    ~Rectangle(); // destuctor
    void setLength(float len);
    void setWidth (float wid);
    float getLength() const;
    float getwidth() const;
    float calculateArea() const;
};
#endif