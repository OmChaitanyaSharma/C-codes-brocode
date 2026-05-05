#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    cout << "enter the size of the array";
    int size;
    cin >> size;

    char *parray = NULL;
    parray = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter your grades";
        cin >> parray[i];
        cout << '\n';
    }

    for (int i = 0; i < size; i++)
    {
        cout << parray[i] << '\n';
    }

    delete[] parray;
}