#include <iostream>
void bubblesort(int numbers[], int size);
int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    int numbers[4];
    cout << "enter 4 positive numbers or -1 to quit";
    int size = sizeof(numbers) / sizeof(int);
    int temp;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cin >> temp;
        cout << '\t';
        if (temp != -1)
        {
            numbers[i] = temp;
        }
    }

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cout << numbers[i] << " ";
    }
}