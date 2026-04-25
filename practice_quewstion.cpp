#include <iostream>

int search(int arr[], int size, int key);

int main()
{
    using std::cin;
    using std::cout;

    int arr[10] = {12, 45, 7, 89, 23, 56, 91, 3, 18, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter number to search: ";
    cin >> key;

    int result = search(arr, size, key);

    if (result != -1)
    {
        cout << "Element found at index " << result;
    }
    else
    {
        cout << "Element not found";
    }
}

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}