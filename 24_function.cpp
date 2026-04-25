#include <iostream>
#include <string>

void happybirthday(std::string birthdayboieee, int age);
int main()
{
    using std::cin;
    using std::cout;

    std::string name;
    cout << "enter your name :\n";
    std::getline(cin >> std::ws, name);

    int age;
    cout << "enter your age: \n";
    cin >> age;

    happybirthday(name, age);
}

void happybirthday(std::string birthdayboieee, int age)
{
    using std::cout;
    cout << "happy birthday to " << birthdayboieee << '\n';
    cout << "happy birthday to " << birthdayboieee << '\n';
    cout << "happy birthday to dear " << birthdayboieee << '\n';
    cout << "you are " << age << " years old\n";
    cout << "happy birthday to you " << birthdayboieee << '\n';
}
