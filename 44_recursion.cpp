#include <iostream>
int factorial(int number);
int main()
{
    int a = factorial(10);
    std::cout<<"the factorial of the number is "<< a ;
}
int factorial(int number)
{
    int num = 1;
    if (number > 1)
    {
        num = number * factorial(number - 1);
        return num;
    }
    else 
    return 1;
}