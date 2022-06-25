// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        
        
        vector<int>v3;
        unordered_map<int,int>v;
        for(int i =0;i<v1.size();i++){
            v[v1[i]]++;
            
        }
            for(int j=0;j<v2.size();j++){
                if(v.find(v2[j])!=v.end() && v[v2[j]]>0){
                    v3.push_back(v2[j]);
                    v[v2[j]]--;
                }
            }
        sort(v3.begin(),v3.end());
        return v3;
    }
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}  // } Driver Code Ends
