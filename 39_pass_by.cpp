#include <iostream>
void swap(std::string &x, std::string &y);
int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string x = "water";
    string y = "kool aid";

    swap(x, y);

    cout<<"the value of x is "<<x<<'\n';
    cout<<"the value of y is "<<y<<'\n';
}
void swap(std::string &x, std::string &y)
{
    using std::string;
    string temp;
    temp=x;
    x=y;
    y=temp;
}
