1. Given an array (or string), the task is to reverse the array/string.
       * i/p : [1,2,3,4]
* o/p: [4,3,2,1]
sol:
#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
      void reverseArray(int arr[],int start, int end)
      {
          while(start<end)
          {
          int temp=arr[start];
          int[start]=arr[end];
          int [end]=temp;
          start++;
          end--;
          }
        }
        void PrintArray(int arr[],int size)
        {
            for(int i=0;i<size;i++)
            cout<<arr[i]<<" "<<endl;
        }
        int main()
        {
            int arr[]={1,2,3,4,5}
            int n=sizeof(arr)/sizeof(arr[0]);
            printArray(arr,n);
            reverseArray(arr,0,n-1);
            cout<<"Reversed array is"<<endl;
            printArray(arr,n);
            return 0;
        }

