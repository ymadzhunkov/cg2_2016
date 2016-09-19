#include "doctest.h"
#include "rectangle.h"

TEST_CASE("Create rectangle") {
    Rectangle a(0, 0, 10, 12);
    REQUIRE(a.x == 0);
}
