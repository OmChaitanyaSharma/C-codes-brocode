#include<iostream>
int main(){
    using std::cout;
    using std::cin;
    using std::string;

    int age=10;
    int *p_age = &age;

    cout<<age<<"\n";
    cout<<&age<<"\n";
    cout<<p_age<<"\n";
    cout<<*p_age<<"\n";
}