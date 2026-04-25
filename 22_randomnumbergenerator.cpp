#include <iostream>
#include<ctime>

int main()
{
    using std::cin;
    using std::cout;

    srand(time(NULL));

    int num=(rand()%6)+1;
    cout<<num;

 

    return 0;
}