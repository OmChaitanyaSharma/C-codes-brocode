#include <iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string name;
    cout << "enter your name:\n";
    std::getline(cin >> std::ws, name);

    int a = name.length(); // this method gives the lenght of the character

    if (name.empty())
    { // this method check if a string is empty or not and then retunns the boolean value
        cout << "your name cannot be empty";
    }
    else
    {
        cout << "hello" << name;
    }

    cout << "enter your brothers name";
    string bname;
    std::getline(cin >> std::ws, bname);

    bname.clear();// clear method clears the string
    cout << bname;

    return 0;
}