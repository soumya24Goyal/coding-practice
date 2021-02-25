3. Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

   i/p: {1,2,3,4,5,6,7}
   o/p: {3,4,5,6,7,1,2}

sol:
include <iostream.h>
using namespace std;

void RotateebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}
 
void Rotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        RotatebyOne(arr, n);
}
 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
   
    Rotatee(arr, 2, n);
    printArray(arr, n);
 
    return 0;
}

