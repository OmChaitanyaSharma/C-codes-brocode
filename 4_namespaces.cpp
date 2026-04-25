#include<iostream>

namespace first{
    int x =1;
}
namespace second{
    int x=2;
}

int main(){
    using std::cout;
    using std::string;
    using std::cin;
    using namespace std;


  int x=0;

using namespace second;

std:: cout<< x;
std:: cout<< first ::x;
std:: cout<< second :: x;
    return 0;
}