#include<iostream>
#include<iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::string;

    string students[]={"spongebob","squarepants","patrick","bateman"};

    for( string i: students){
        cout<<i<<'\n';
    }
    
    

return 0;
}