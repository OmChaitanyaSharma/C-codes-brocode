#include <iostream>
class stud
{
public:
    std::string name;
    int age;
    void study()
    {
        std::cout << "this student is studying" << "\n";
    }
    void notstudy()
    {
        std::cout << "this student is notstudying" << "\n";
    }
};
int main()
{
    stud stud1;
    stud1.name = "rick";
    stud1.age = 123;
    std::cout << stud1.name << '\n'
              << stud1.age << '\n';
    stud1.study();
    stud1.notstudy();
}