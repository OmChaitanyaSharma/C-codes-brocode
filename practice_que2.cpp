#include <iostream>
#include<ctime>
#include<cstdlib>
int main()
{
    using std::cin;
    using std::cout;
    srand(time(NULL));
    int number =(rand()%6)+1;
    cout<<number;
}