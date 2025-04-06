#pragma once
#include "OS2.h"
using std::string;
using std::thread;
int main(int argc, char** argv)
{
    DataArray* data_array = new DataArray;
    input_size_of_array(data_array->size_of_array);
    data_array->array = new int[data_array->size_of_array];
    input_elements_of_array(data_array->size_of_array, data_array->array);
    for (int i = 0; i < data_array->size_of_array; i++)
    {
        cout << data_array->array[i] << ' ';
    }
    cout << '\n';
    thread min_max_thread(min_max, data_array);
    thread average_thread(average, data_array);
    min_max_thread.join();
    average_thread.join();
    cout << "Max element: " << data_array->max;
    cout << "\nMin element: " << data_array->min;
    cout << "\nAverage: " << data_array->average;
    for (int i = 0; i < data_array->size_of_array; i++)
    {
        if (data_array->array[i] == data_array->min || data_array->array[i] == data_array->max)
        {
            data_array->array[i] = data_array->average;
        }
    }
    cout << '\n';
    for (int i = 0; i < data_array->size_of_array; i++)
    {
        cout << data_array->array[i] << ' ';
    }
    delete[] data_array->array;
    delete data_array;
    return 0;
}