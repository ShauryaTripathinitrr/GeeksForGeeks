//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  private:
  int solver(int &target,int &kount)
  {
      if(target==1)
      {
          return kount;
      }
      
      if(!(target&1))
      {
          target=target/2;
          kount=kount+1;
          return solver(target,kount);
      }
      else
      {
          target=target-1;
          kount+=1;
          return solver(target,kount);
      }
  }
  public:
    int minOperation(int n)
    {
        int kount=0;
        long long ans=solver(n,kount);
        ++ans;
        
        return ans;
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
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends