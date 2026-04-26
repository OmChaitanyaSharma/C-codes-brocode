#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string cars[][3] = {{"mustang", "endevour", "fiat"},
                        {"mustang", "endevour", "fiat"},
                        {"mustang", "endevour", "fiat"}};

    string foods[2][3];

    cout << cars[0][0] << " ";
    cout << cars[0][1] << " ";
    cout << cars[0][2] << "\n";
    cout << cars[1][0] << " ";
    cout << cars[1][1] << " ";
    cout << cars[1][2] << "\n";
    cout << cars[2][0] << " ";
    cout << cars[2][1] << " ";
    cout << cars[2][2] << "\n";
}