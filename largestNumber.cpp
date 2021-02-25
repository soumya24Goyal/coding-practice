6.Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.


sol:
bool mycompare(string a, string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0?1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> arr(A.size());
    int count=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]==0)
            count++;
        arr[i]=to_string(A[i]);
    }
    if(count==A.size())
        return "0";
    sort(arr.begin(),arr.end(),mycompare);
    string ans=arr[0];
    for(int i=1; i<arr.size(); i++)
        ans+=arr[i];
    return ans;
    
}

