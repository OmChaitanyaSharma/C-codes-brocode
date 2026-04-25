/*Write a C++ program that:

Uses a typedef (or type alias) to create a new name for double.
Declares a const variable for GST rate (e.g., 18%).
Takes user input:
A string (product name)
Price of the product
Quantity
Uses arithmetic operators to calculate:
Total cost = price × quantity
Final cost after adding GST
Demonstrates type conversion (e.g., converting int quantity to double if needed).
Uses a namespace (either std or create your own small namespace for GST logic).
Prints a formatted bill like:
Product: <name>*/

#include<iostream>
typedef double decimal;

int main(){
    using std::cout;
    using std::cin;
    using std::string;

const decimal gst=18;
string name;
cout<<"enter the name of the product you want to buy\n";
std::getline(cin>> std::ws, name);

cout<<"enter the price of the product\n";
decimal price;
cin>>price;
cout<<"enter the number of products you want\n";
int number;
cin>>number;
decimal total= (decimal)number*price;
decimal final= total+ (total*gst/100);


cout<<"the name of the product is "<< name<<"\n";
cout<<"the price of the prodcut is  "<< price<<"\n";
cout<<"the number of products to be purchased is "<< number<<"\n";
cout<<"the total price of the product is "<<total <<"\n";
cout<<"the final price of thee product is  "<< final<<"\n";
return 0;
}


