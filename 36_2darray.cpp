#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string cars[][3] = {{"mustang", "endevour", "fiat"},
                        {"mustang", "endevour", "fiat"},
                        {"mustang", "endevour", "fiat"}};

    int rows = sizeof(cars) / sizeof(cars[0]);       // size of whole/size of one row
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]); // size of one row/ size of one element

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }
}