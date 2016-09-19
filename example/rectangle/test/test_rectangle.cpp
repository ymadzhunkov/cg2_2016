#include "doctest.h"
#include "rectangle.h"

TEST_CASE("Create rectangle") {
    Rectangle a(0, 0, 10, 12);
    REQUIRE(a.x == 0);
    REQUIRE(a.y == 0);
    REQUIRE(a.width == 10);
    REQUIRE(a.height == 12);
}

TEST_CASE("Test overlaping rectangles") {
    Rectangle a(0, 0, 10, 12);
    Rectangle b(1, 2, 3, 4);
    bool overlap = a.overlap(b);
    REQUIRE(overlap == true);
}

TEST_CASE("Test non overlaping rectangles") {
    Rectangle a(6, 7, 10, 12);
    Rectangle b(1, 2, 3, 4);
    bool overlap = a.overlap(b);
    REQUIRE(overlap == false);
}

TEST_CASE("Test non overlaping rectangles") {
    Rectangle a(1, 2, 3, 4);
    Rectangle b(6, 7, 10, 12);
    bool overlap = a.overlap(b);
    REQUIRE(overlap == false);
}

TEST_CASE("Test non overlaping rectangles") {
    Rectangle a(1, 2, 3, 4);
    Rectangle b(1, 7, 10, 12);
    bool overlap = a.overlap(b);
    REQUIRE(overlap == false);
}

TEST_CASE("Test non overlaping rectangles") {
    Rectangle a(1, 7, 10, 12);
    Rectangle b(1, 2, 3, 4);
    bool overlap = a.overlap(b);
    REQUIRE(overlap == false);
}
