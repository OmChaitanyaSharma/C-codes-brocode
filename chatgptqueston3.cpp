#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    int n;
    cout << "enter the size of the array";
    cin >> n;
    int array[n];
    cout << "enter the value inside each element between 0 and 100 only ";
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value for the element number " << i + 1 << '\n';
        cin >> array[i];
        if (array[i] < 0 ||  array[i] > 100)
        {
            while (array[i] < 0 ||  array[i] > 100)
            {
                cout << "enter the value for the element number " << i + 1 << '\n';
                cin >> array[i];
            }
        }
    }
   
}