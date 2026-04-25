#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    int i;
    for (i = 0; i <= 10; i++)
    {
        if (i == 5)
        {

            break;
        }
        cout << i << '\t';
    }
    cout << '\n';
    for (int j = 0; j <= 10; j++)
    {
        if (j == 5)
        {
            continue;
        }
        cout << j << '\t';
    }
}