#pragma once
#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include <thread>
using std::cout;
using std::cin;
struct DataArray
{
    int* array;
    int size_of_array = 0;
    int min = 0;
    int max = 0;
    int average = 0;
};
void input_size_of_array(int& size_of_array);

void input_elements_of_array(int& size_of_array, int* array);

int find_min_element(int size_of_array, int* array);

int find_max_element(int size_of_array, int* array);

int find_average(int size_of_array, int* array);

void min_max(DataArray* arrayStruct);

void average(DataArray* arrayStruct);