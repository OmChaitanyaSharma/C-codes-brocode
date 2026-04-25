// Question:// Write a C++ program to:

// // Take 10 integers as input from the user and store them in an array.
// // Display the original array.
// // Sort the array using the Bubble Sort algorithm in ascending order.
// // Display the sorted array.

#include <iostream>

void bubblesort(int array[], int size);

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    int array[10];
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        cout << "\t";
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << '\n';
    }

    bubblesort(array, size);
}

void bubblesort(int array[], int size)
{
    using std::cin;
    using std::cout;
    using std::string;
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "\n"
         << "the sorted algorithm is as follows\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\n";
    }
}
