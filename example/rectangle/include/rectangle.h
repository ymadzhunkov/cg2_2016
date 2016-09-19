#pragma once
struct Rectangle {
    Rectangle(int x, int y, int width, int height);
    int x, y;
    int width, height;
    bool overlap(const Rectangle & other) const;
};
