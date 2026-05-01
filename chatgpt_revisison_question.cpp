#include <iostream>
#include <string>
void printResult(int marks[], int size);
int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    int n;

    cout << "enter the number of students :\n";
    cin >> n;

    int marks[n];
    int size = sizeof(marks) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << "enter the marks of the student number : " << i + 1 << '\n';
        cin >> marks[i];
        while (marks[i] < 0 || marks[i] > 100)
        {
            cout << "you have enetered an invalid number" << '\n';
            cout << "enter a number between 0 and 100" << '\n';
            cin >> marks[i];
        }
    }
    printResult(marks, size);

    return 0;
}
void printResult(int marks[], int size)
{
    using std::cin;
    using std::cout;
    using std::string;
    for (int i = 0; i < size; i++)
    {
        cout << "marks of student number " << i + 1 << " is " << marks[i] << '\n';
    }

    double avg = 0;
    for (int i = 0; i < size; i++)
    {
        avg = avg + marks[i];
    }
    double avge = avg / size;

    cout << "the average marks of the students is : " << avge << '\n';

    int max = marks[0];

    for (int i = 0; i < size; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }
    cout << "the highest marks of the following is " << max << "\n";

    int min = marks[0];

    for (int i = 0; i < size; i++)
    {
        if (min > marks[i])
        {
            min = marks[i];
        }
    }
    int count;
    cout << "the smallest number of the following is  " << min << "\n";
    for (int i = 0; i < size; i++)
    {
        if(marks[i]>=40){
        count++;}
    }
    cout<<"the total number of students who have passed is " << count << '\n' ;}