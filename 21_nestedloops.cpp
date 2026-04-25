#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << i << '\t';
        }
        cout << '\n';
    }

    return 0;
}