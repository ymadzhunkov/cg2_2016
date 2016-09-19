#include "rectangle.h"


Rectangle::Rectangle(int x, int y, int width, int height)
    : x(x), y(y), width(width), height(height) {}


bool Rectangle::overlap(const Rectangle & other) const {
    return true;
}
