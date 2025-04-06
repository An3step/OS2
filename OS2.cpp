#include "OS2.h"

void input_size_of_array(int& size_of_array)
{
    while (size_of_array == 0)
    {
        cout << "Input size of array\n";
        cin >> size_of_array;
        if (cin.fail() || size_of_array < 1)
        {
            cout << "Incorrect input\n";
            size_of_array = 0;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void input_elements_of_array(int& size_of_array, int* array)
{
    bool good_input;
    for (int i = 0; i < size_of_array; i++)
    {
        good_input = false;
        while (!good_input)
        {
            good_input = true;
            cout << "Input element #" << i << " of array\n";
            cin >> array[i];
            if (cin.fail())
            {
                cout << "Incorrect input\n";
                good_input = false;
            }
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

int find_min_element(int size_of_array, int* array)
{
    int min_element = array[0];
    for (int i = 1; i < size_of_array; i++)
    {
        if (min_element > array[i])
        {
            min_element = array[i];
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(7));
    }
    return min_element;
}

int find_max_element(int size_of_array, int* array)
{
    int max_element = array[0];
    for (int i = 1; i < size_of_array; i++)
    {
        if (max_element < array[i])
        {
            max_element = array[i];
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(7));
    }
    return max_element;
}

int find_average(int size_of_array, int* array)
{
    int sum = array[0];
    for (int i = 1; i < size_of_array; i++)
    {
        sum += array[i];
        std::this_thread::sleep_for(std::chrono::milliseconds(12));
    }
    int average_value = sum / size_of_array;
    return average_value;
}

void min_max(DataArray* arrayStruct)
{
    arrayStruct->min = find_min_element(arrayStruct->size_of_array, arrayStruct->array);
    arrayStruct->max = find_max_element(arrayStruct->size_of_array, arrayStruct->array);
}

void average(DataArray* arrayStruct)
{
    arrayStruct->average = find_average(arrayStruct->size_of_array, arrayStruct->array);
}