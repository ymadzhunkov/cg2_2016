#include "rectangle.h"


Rectangle::Rectangle(int x, int y, int width, int height)
    : x(x), y(y), width(width), height(height) {}


bool Rectangle::overlap(const Rectangle & other) const {
    bool res = x < other.x + other.width;
    res &= other.x < x + width;
    return res; 
}
