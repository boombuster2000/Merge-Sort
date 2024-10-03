#include <iostream>



void print_int_array(int array_variable[], int array_length)
{
    for (int i = 0; i < array_length; i++)
    {
        std::cout << array_variable[i];
        if (i != array_length - 1) std::cout << ",";
    }

    std::cout << "\n";

}


int main()
{
    int data[] = { 0,232,4,3,43,5,4,3,25,432,54,5,43,2,56574,7,6547,564,7654,76,5,65,356,5 };
}

