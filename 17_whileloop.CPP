#include<iostream>
#include<string>

int main(){
   using std::cout;
   using std::cin;
   using std::string;

   string name;

   while(name.empty()){
   cout<<"enter your name ";
   std::getline(cin,name);
   }

   cout<<"hello\t"<<name;






   return 0;
}