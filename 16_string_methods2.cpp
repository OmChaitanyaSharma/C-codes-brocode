#include <iostream>
#include<string>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    cout<< "enter your name";
    string name;
    std::getline(cin>>std::ws,name);

    cout<< "enter your brother name";
    string bname;
    std::getline(cin>>std::ws,bname);


    name.append("@gmail.com"); // adds something in the last
    cout<<name<< '\n';

    cout<<name.at(0)<<'\n'; // character at that location starting form zero
     
    bname.insert(2, "@gmail.com");
    cout<<bname;

    cout<<name.find("tan") <<'\n';

    name.erase(0 , 3); 
    cout<< name;
    return 0;
}