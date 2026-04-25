#include<iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::string;

cout<<"**************temp converter*******************\n";
cout<<"f is for converting celcius to farenhite \n";
cout<<"c is for converting farenhite to celcius\n";
cout<<"what would you like to choose\n ";
char choice;
cin>>choice;
cout<<"enter the temp\n";
double temp;
cin>>temp;
if(choice == 'f' || choice == 'F'){
    temp=(1.8*temp)+32;
    cout<< "the temp in farenhite is "<< temp;


}
else if(choice =='c' || choice =='C')
{
    temp = (temp-32)/1.8;
     cout<< "the temp in celcius  is "<< temp;
}
else {

cout<< "please enter a diigit that is between c and f ";
}


cout<<"\n***********************************************";
return 0;
}