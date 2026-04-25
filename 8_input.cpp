#include<iostream>

int main(){
using std::cout;
using std::cin;
std::string name;
int age;


cout<< "what is your name\n";
std::getline(cin>> std::ws,name);

cout<< "what is your age\n";
cin>> age;
cout<< "the name of the person is " << name<< "\n";
cout<< "the age of the person is " << age;
return 0;
}