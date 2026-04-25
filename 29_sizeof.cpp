#include<iostream>
int main(){

    double gpa=2.5;
    std::cout<< sizeof(gpa)<< " bytes\n";



    int array[]={1,23,45,67};


    int elements=sizeof(array)/sizeof(int);
    int elements1=sizeof(array)/sizeof(array[0]);

    std::cout<< elements<<'\n';
    std::cout<< elements1<<'\n';
.




}