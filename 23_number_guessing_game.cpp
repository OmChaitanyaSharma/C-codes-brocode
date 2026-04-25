#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
    using std::cin;
    using std::cout;

    srand(time(NULL));
    int num = (rand() % 20) + 1;

    int guess;

    int tries=0;
cout<<"******************number guessing game**************\n";
    do
    {
        cout << "enter your guess\n";
        cin >> guess;
        tries++;
        if (num == guess)
        {
            cout << "you have won\n";
            break;
            
        }
        else if (num>guess){
            cout<<"you guessed too low \n";
        }
        else if (num<guess){
            cout<<"you guessed too high\n";
        }
        
    }while (num!=guess);
    cout<<"total number to tries taken by you : "<< tries<<'\n';
cout<<"******************************************";
}