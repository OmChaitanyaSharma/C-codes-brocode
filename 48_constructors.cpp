#include <iostream>
class stud
{
public:
    std::string name;
    int age;

    stud(std::string name, int age)
    {
        this->age = age;
        this->name = name;
    }
};
int main()
{
    stud stud1("om chaitanya sharma",21);
    stud stud2("aditya tanmay sharma",14);
    std::cout << stud1.name << '\n'
              << stud1.age << '\n';
    std::cout << stud2.name << '\n'
              << stud2.age << '\n';
}