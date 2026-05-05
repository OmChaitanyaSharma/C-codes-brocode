#include <iostream>
struct stud
{
    std::string name;
    int age;
    char gender = 'm';
};
int main()
{
    using std::cout;
    stud student1;
    student1.name="aditya tanmay sharma";
    student1.age=15;

     stud student2;
    student2.name="om chaitanya sharma";
    student2.age=21;

    cout<<student1.name<<'\n'<< student1.age<<'\n'<<student2.name<<'\n'<<student2.age; 
    

}