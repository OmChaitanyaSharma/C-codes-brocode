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
    int max = marks[0];
    int min = marks[0];
    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "the marks for the student number : " << i + 1 << " is " << marks[i] << '\n';

        sum += marks[i];

        if (max < marks[i])
        {
            max = marks[i];
        }

        if (min > marks[i])
        {
            min = marks[i];
        }

        if (marks[i] >= 40)
        {
            count++;
        }
    }
    cout << "the sum of the numbers is " << sum << "\n";
    cout << "the average of the numbers is " << (double)sum / size << "\n";
    cout << "students passed: " << count << "\n";
    cout << "the max of these numbers is " << max << "\n";
    cout << "the min of these numbers is " << min << "\n";
}