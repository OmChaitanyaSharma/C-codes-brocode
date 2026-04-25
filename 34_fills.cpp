#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string foods[100];
    fill(foods,foods+100,"pizaa");

    for(string i : foods){
    cout<<i<<'\n';}
}