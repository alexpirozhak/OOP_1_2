//
// Created by Олександр Пірожак on 28.02.2024.
//

#include "gtest/gtest.h"
#include "../Triangle.h"

TEST(TriangleTestSuite, TriangleTest)
{
    Triangle triangle = makeTriangle(7, 7, 7, 60, 60, 60);
    EXPECT_EQ(triangle.geta(), 7);
}
