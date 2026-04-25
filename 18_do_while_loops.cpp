#include <iostream>
#include <string>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    int number;
    
    do{
        cout << "enter a positive number";
        cin >> number;
    }while(number<0);
    return 0;
}