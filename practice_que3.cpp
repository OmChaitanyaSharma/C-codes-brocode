#include <iostream>
void bubblesort(int numbers[], int size);
int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    int numbers[10];
    int size = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cin >> numbers[i];
        cout << '\t';
    }

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cout << numbers[i] << " ";
    }
    bubblesort(numbers, size);

 cout<<"the sorted algo is as follows\n";
for (int i = 0; i < size; i++)
{
   
    cout << numbers[i] << " \n";   
}
}

void bubblesort(int numbers[],int size){ 
    using std::cout;
    using std::cin;
    using std::string;
    int temp=0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {

            if( numbers[j]>numbers[j+1]){
            temp=numbers[j];
            numbers[j]=numbers[j+1];
            numbers[j+1]=temp;}
        }
        
    }
    



}
