#include <iostream>
void bubblesort(int numbers[], int size);
int main()
{
    int numbers[]= {10, 7, 2, 9, 1, 3, 6, 4, 5};
    int size = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        std::cout <<i << "   ";
    }

    bubblesort(numbers, size);
}
void bubblesort(int numbers[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)

    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if(numbers[j]>numbers[j+1]){
                temp=numbers[j];
                numbers[j] =numbers[j+1];
                numbers[j+1]= temp;
            }
            
        }
    }
}