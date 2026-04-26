#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    string temp;
    int count=0;
    string items[4];
    int size = sizeof(items) / sizeof(string);
    cout << "enter the items you want and if you want to quit just enter q\n";
    for (int i = 0; i < size; i++)

    {
        count++;
        std::getline(cin>>std::ws,temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            items[i] = temp;
        }
    }
    for (int i = 0; i < count-1; i++){
        cout<< "the item number " << i+1 << " is " << items[i] << "\n";
    }
}