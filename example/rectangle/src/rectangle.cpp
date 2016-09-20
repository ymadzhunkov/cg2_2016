#include "rectangle.h"


Rectangle::Rectangle(int x, int y, int width, int height)
    : x(x), y(y), width(width), height(height) {}

bool overlap1D(int a0, int b0, int a1, int b1) {
    return a0 < b1 && b0 < a1;
}

bool Rectangle::overlap(const Rectangle &other) const {
    return overlap1D(x, other.x, x + width, other.x + other.width) &&
           overlap1D(y, other.y, y + height, other.y + other.height);
}
