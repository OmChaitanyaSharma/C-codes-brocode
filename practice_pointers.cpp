#include <iostream>
int main()
{
    using std::cout;
    int num;
    int *pnum = NULL;
    pnum = new int;
    *pnum= 21;

    cout << pnum << " address \n";
    cout << *pnum << " value \n";

    delete pnum;
}