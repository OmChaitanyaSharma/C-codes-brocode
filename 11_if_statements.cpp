#include<iostream>

int main (){
    using std::cout;
    using std::cin;
    using std::string;

    int age;
    cout<<"enter your age ";
    cin>>age;

    if (age>=65){
        cout<<"you are an senior  ";

        }
    else if(age >=18){
        cout<<"you are an adult";

    }
    else if(age <=17 && age>0){
        cout<<"you are a child ";

    }
    else {
        cout<<"you have not been born yeet";
    }
    return 0;
}