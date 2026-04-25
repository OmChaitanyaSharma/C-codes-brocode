#include <iostream>

void showbalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main()
{
    using std::cin;
    using std::cout;

    double balance = 0;
    int option;
    do{
        cout << "*********welcome to the bank*********\n";
    cout << "enter the choice you want to choose;\n";
    cout << "choose 1 to check the bank balance\n";
    cout << "choose 2 to deposit some amount of money\n";
    cout << "choose 3 to withdraw some amount of money\n";
    cout << "choose 4 to exit the program \n";
    cout << "***************************************\n";

    cin >> option;

    cin.clear();
    fflush(stdin);

    switch (option)
    {
    case 1:
        showbalance(balance);
        break;
    case 2:
        balance= deposit(balance);
        cout<<"your new balance is " << balance;
        break;

    case 3:
        balance = withdraw(balance);
        cout<<"your new balance is " << balance;
        break;
    case 4:
        cout << "thank you for visiting hope you have a great day";
        break;
    default:
        cout<<"please enter a number between 1-4\n";
    }
}while(option!=4);


    }
    
void showbalance(double balance){
    std::cout<<"your bank balance is"<<balance << "\n";
}

double deposit(double balance){
    std::cout<<"enter the amount of money you want to deposit";
    double amount;
    std::cin>>amount;
    if(amount>=1){
        return balance+=amount;
    }
    else
    {std::cout<<"you have entered so little amount of money that it cannot be deposited just go home";}
    return balance;
}

double withdraw(double balance){
    using std::cout;
    using std::cin;

    cout<<"enter the amount of money you want to withdraw from the account";
    double amount;
    cin>>amount;
    if (amount>=balance){
        cout<<"you have insuffecient funds";
        return balance;
    }
    else {
        return balance-=amount;
    }

}
