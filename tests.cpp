#pragma once
#include <gtest/gtest.h>
#include "OS2.h"

TEST(ArrayTest, FindMin) {
    int arr[] = { 5, 3, 8, 1, 4 };
    EXPECT_EQ(find_min_element(5, arr), 1);
}

TEST(ArrayTest, FindMax) {
    int arr[] = { 5, 3, 8, 1, 4 };
    EXPECT_EQ(find_max_element(5, arr), 8);
}

TEST(ArrayTest, FindAverage) {
    int arr[] = { 5, 3, 8, 1, 4 };
    EXPECT_EQ(find_average(5, arr), 4);
}

TEST(ArrayTest, MinMaxFunction) {
    DataArray data;
    data.size_of_array = 5;
    data.array = new int[data.size_of_array] {5, 3, 8, 1, 4};

    min_max(&data);
    EXPECT_EQ(data.min, 1);
    EXPECT_EQ(data.max, 8);

    delete[] data.array;
}

TEST(ArrayTest, AverageFunction) {
    DataArray data;
    data.size_of_array = 5;
    data.array = new int[data.size_of_array] {5, 3, 8, 1, 4};

    average(&data);
    EXPECT_EQ(data.average, 4);

    delete[] data.array;
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}