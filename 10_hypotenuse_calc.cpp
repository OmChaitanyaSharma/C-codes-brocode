#include<iostream>
#include<cmath>
int main(){
    using std::cout;
    using std::cin;
    using std::string;

cout<< "enter one side of a triangle\n";
int a,b;
cin>>a;
cout<< "enter another side of a triangle\n";
cin>>b;
int c ;
int d=pow(a,2)+pow(b,2);
c=sqrt(d);

cout<<"the hypotenuse of the triangle is "<< c;








return 0;
}