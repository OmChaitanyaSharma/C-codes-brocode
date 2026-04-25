#include <iostream>
int ind(int numbers[], int size, int mynum);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);
    int index;
    int mynum;
    std::cout << "enter the number you want to enter\n";
    std::cin >> mynum;
    index = ind(numbers, size, mynum);

    if (index != -1)
    {
        std::cout << "your number" << mynum << "is at the index of" << index;
    }
    else
    {
        std::cout << "your number is not in the array";
    }
}

int ind(int numbers[], int size, int mynum)
{

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == mynum)
        {
            return i;
        }
    }
    return -1;
}