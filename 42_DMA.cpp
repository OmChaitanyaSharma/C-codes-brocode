#include<iostream>
int main(){
    using std::cin;
    using std::cout;
    
    int *p_num=NULL;
    p_num= new int;
    cout<<"enter the value of the dma integer ";
    cin>>*p_num;

    cout<<"the memory address of the operator is "<< p_num<<'\n';
    cout<<"the value of the address is  "<< *p_num<<'\n';

    delete p_num;
}