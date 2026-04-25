#include <iostream>
void bubblesort(int numbers[], int size);
int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    int numbers[10];
    int size = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cin >> numbers[i];
        cout << '\t';
    }

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cout << numbers[i] << " ";
    }
    bubblesort(numbers, size);
}

void bubblesort(int numbers[],int size){
    



}
