#include "rectangle.h"


Rectangle::Rectangle(int x, int y, int width, int height)
    : x(x), y(y), width(width), height(height) {}

bool overlapX(int a0, int b0, int a1, int b1) {
    return a0 < b1 && b0 < a1;
}

bool Rectangle::overlap(const Rectangle & other) const {
    bool res = overlapX(x, other.x, x + width, other.x + other.width);
    res &= other.y < y + height;
    res &= y < other.y + other.height;
    return res; 
}
