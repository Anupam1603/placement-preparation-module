//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printF( int ind , vector<int>&ds , int sum, vector<int>&arr, int n ) {
        
        if( ind == n) {
            ds.push_back(sum);
            return;
        }
        
        //pick condition 
        printF(ind+1 , ds,sum+arr[ind] , arr, n);
        
        //not condition
        printF(ind+1 , ds, sum , arr, n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int sum = 0;
        vector<int>ds;
        printF(0 , ds , 0,arr,N);
        sort(ds.begin() , ds.end());
        return ds;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends