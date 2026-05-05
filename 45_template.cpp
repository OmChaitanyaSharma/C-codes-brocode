#include <iostream>
using namespace std;

template <typename T, typename Z>
auto myMax(T x, Z y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << myMax(1, 2.232);
} 