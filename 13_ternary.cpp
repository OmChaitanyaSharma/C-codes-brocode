#include<iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::string;

    cout<<"enter your grade";
    int grade;
    cin>> grade;
    grade>=60? cout<< "you havee passed " : cout<< "you have failed";
    return 0;
}