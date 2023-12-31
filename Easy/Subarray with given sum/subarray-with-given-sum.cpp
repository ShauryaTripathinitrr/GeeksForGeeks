//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
    // Your code here
        if(s == 0)
        {
        return {-1};
        }
        
        long long int sum=0;
        int l=0;
        int r=0;
        
        while(r<n)////1,2,3,7,5
        {
            if(sum<s) ////t////t///
            {
                sum=sum+arr[r];///1'///3///
               
            }
            
            while(sum>s)///f///
            {
                sum=sum-arr[l];
                l++;
            }
            if(sum==s)///f///
            {
                return {l+1,r+1};
               
            }
             r++;//1///2
        }
          return {-1};
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends