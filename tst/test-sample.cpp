#include <gtest/gtest.h>
#include "../src/examples/sample.h"

using SampleProject::sample;

class Sample_Add : public testing::TestWithParam<std::tuple<int, int, int>> {};

INSTANTIATE_TEST_CASE_P(add, Sample_Add, testing::Values(
    std::make_tuple(1, 2, 3),
    std::make_tuple(2, 1, 3),
    std::make_tuple(0, 1, 1),
    std::make_tuple(-1, 1, 0),
    std::make_tuple(0, 0, 0)
));
TEST_P(Sample_Add, isMelodyUnitValid) {
    int a = std::get<0>(GetParam());
    int b = std::get<1>(GetParam());
    int expected = std::get<2>(GetParam());
    sample sample;
    int actual = sample.add(a, b);
    ASSERT_EQ(expected, actual);
}
