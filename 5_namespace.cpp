#include<iostream>

typedef std::string text;
typedef int number;

using text = std::string;
using number = int;

int main(){
    using std:: cout;
    using std:: cin;
    text fn = "om";
  number age =21;

     cout<< fn<< '\n';
     cout << "my age is " << age;
    return 0;
}
