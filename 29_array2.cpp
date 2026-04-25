#include<iostream>
#include<iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::string;

    string students[]={"spongebob","squarepants","patrick","bateman"};
    for (int i = 0; i < sizeof(students)/sizeof(string); i++)
    {
        cout<<students[i]<<"\n";
    }
    

return 0;
}