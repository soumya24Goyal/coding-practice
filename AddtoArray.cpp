//4.For a non-negative integer X,
  //the array-form of X is an array of its digits in    left to right order.

//For example, if X = 1231, then the array form is [1,2,3,1].

//Given the array-form A of a non-negative integer X, return the array-form of the integer X+K
//(X+K)*K

//Input: A = [1,2,0,0], K = 34
//Output: [1,2,3,4] / 1234
//Explanation: 1200 + 34 = 1234

//Input: A = [2,7,4], K = 181
//Output: [4,5,5]
//Explanation: 274 + 181 = 455

//sol:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>

  vector<int> addToArrayForm(vector<int>& A, int K) 
    {    
        int carry=K%10;
        vector<int>v;
        for(int i=A.size()-1;i>=0;i--)
        {
             
            int temp=A[i]+carry;
            A[i]=(temp)%10;
            carry=temp/10;
        }
        while(carry){
           
            int temp=carry%10;
            v.push_back(temp);
            carry=carry/10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<A.size();i++)
        {
            v.push_back(A[i]);
        }
        return v;
    }
int main()
{
   int temp,n,k;
   cin>>k;
   vector<int>v;
    cin>>n;
      for(int i=0;i<n;i++)
       cin>>temp;
    v.push_back(temp);
   
   addToArrayForm( v,n); 
for(int i=0;i<n;i++)
cout<<v[i]<<" ";
}

