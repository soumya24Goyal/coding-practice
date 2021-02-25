2.Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array,
and it should return false if every element is distinct.
 Example 1:
 Input: [1,2,3,1]  =1
 Output: true

 Example 2:
 Input: [1,2,3,4] = 0
 Output: false

 Example 3:
 Input: [1,1,1,3,3,4,3,2,4,2]= 4
 Output: true

sol:
#include<iostream.h>

bool Duplicates(int arr[], int n)
{
   
    unordered_map<int, int> freq;
    for (int i=0; i<n; i++)
        freq[arr[i]]++;
 
  
    unordered_map<int, int>:: iterator itr;
    for (itr=freq.begin(); itr!=freq.end(); itr++)
    {
        if (itr->second > 1)
        {
            return true;

        }
    }
 
   else 
   return false;
}
 int main()
{
    int arr[] = {12, 11, 40, 12, 5, 6, 5, 12, 11};
    int n ;
cout<<”Enter the number of elements”;
cin>>n;
cout<<”Enter the elements of Array”;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
Duplicates(arr, n);
}



