#include <iostream>
int add(int a, int b);
int add(int a, int b, int c);
int add(int a, int b, int c, int d);

int main()
{
    using std::cin;
    using std::cout;
    int a, b, c, d;
    cout << "enter 3 numbers";
    cin >> a;
    cin >> b;
    cin >> c;

    d = add(a, b, c);
    cout << d;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int add(int a, int b, int c, int d)
{
    return a + b + c + d;
}