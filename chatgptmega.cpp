#include <iostream>
using namespace std;
void findHighest(int array[], int size);
void findLowest(int array[], int size);
void displayMarks(int array[], int size);

int main()
{
    cout << "enter the number of students" << "\n";
    int n;
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        do
        {
            cin >> marks[i];
        } while (marks[i] < 0 || marks[i] > 150);
    }
    displayMarks(marks, n);
    findHighest(marks, n);
    findLowest(marks, n);
}
void displayMarks(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "marks of student number " << i + i << " is " << array[i] <<"\n";
    }
}
void findHighest(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max){
            max=array[i];
        }
        cout<<"the maximum number of the following list is "<< max <<"\n";
    }}
void findLowest(int array[], int size){
    int min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i]<min){
            min=array[i];
        }
        cout<<"the minimum number of the following list is "<< min <<"\n";
    }
}
