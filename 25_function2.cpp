#include<iostream>
double areaofsq(double side);

int main(){
    using std::cin;
    using std::cout;
    double length;
    cout<< "enter the side of the square:\n";
    cin>>length;
    double area=areaofsq(length);
    cout<<area;
}
double areaofsq(double side){
    return side*side;
}