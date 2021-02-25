Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.

sol:

vector<int> Solution::plusOne(vector<int> &A) {
    
    int count=0,n=A.size();
    for(int i=0;i<n;i++){
    if (A[i]==9) count++;
    else break;
}
     if(count==n)
     {
         vector<int>ans;
         ans.push_back(1);
         for(int i=0;i<n;i++) ans.push_back(0);
         return ans;
         
     }
       else if(A[n-1]==9)
       {
           int carry=1;
            for(int i=n-1;i>=0&&carry==1;i--){
                if(A[i]==9) A[i]=0;
                else
                {
                    A[i]++;
                    carry=0;
                }
            }
       }
      else A[n-1]++;
      reverse(A.begin(),A.end());
      for(int i=n-1;i>=0&&A[i]==0;i--)A.pop_back();
      reverse(A.begin(),A.end());
      return A;
      }
