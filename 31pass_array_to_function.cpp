#include<iostream>
double add(double prices[] , int size);

int main(){
    using std::cout;
    using std::cin;
    using std::string;

    double prices[]={49.99,12.32,123.78};
    int size = sizeof(prices)/sizeof(double);
    double total=add(prices , size);
    cout<<"the total is "<< total;

    return 0;
}

double add(double prices[] , int size){
    double total=0;

   for (int i = 0; i < size; i++)
   {
    total=total+prices[i];
   }
return total;   

}