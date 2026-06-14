#include <iostream>
int main()
{
    using namespace std;
    int students;
    cout << "enter the number of students";
    cin >> students;
    int array[students];
    for (int i = 0; i < students; i++)
    {
        cout << "enter the marks for each student number " << i + 1 << '\n';
        cin >> array[i];
    }
    for (int i = 0; i < students; i++)
    {
        cout << "marks of the student number " << i + 1 << " is " << array[i] << "\n";
    }
    int pass=0;
    for (int i = 0; i < students; i++)
    {
        if (array[i] >= 40){
             pass++;
        }
       
    }
    cout << "the total number of students that have passed is " << pass<<"\n";
    int fail = students - pass;
    cout << "the total number of students that have failed is " << fail <<"\n";

    int max = 0;
    for (int i = 0; i < students; i++)
    {
        if (array[i] >= max)
        {
            max = array[i];
        }
        
    }
    cout << "the max marks scored is " << max <<"\n";
    int min = 100;
    for (int i = 0; i < students; i++)
    {
        if ( array[i]<= min)
        {
            min = array[i];
        }
    }
    cout << "the minimum number is " << min <<"\n";
    return 0;
}
