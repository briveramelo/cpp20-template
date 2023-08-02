//no need to include the test .cpp files, as these are implicity added with RUN_ALL_TESTS and the CMakeLists.txt line with GLOB_RECURSE *.cpp
#include "gtest/gtest.h"

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
