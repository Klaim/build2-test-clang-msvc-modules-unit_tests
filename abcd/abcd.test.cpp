
import abcd;


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>


TEST_CASE("simple test")
{
    CHECK(abcd::some_func(42) == 42);
}
