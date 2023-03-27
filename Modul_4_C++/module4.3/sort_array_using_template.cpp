// Write a program of to sort the array using templates. 

#include <iostream>
using namespace std;
#define n 10

template <class T>
void sort (T arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr [i] > arr[j])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
}
int main()
{
    int array[n];
    cout << "Enter intiger array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, n);
    cout << "After sorting they are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ",";
    }
    
    return 0;
}