//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
      string ans="";
      int n=str1.size();
      string jam="";
      if(n==2)
      {
          if(str1==str2)
          {
              return true;
          }
          return false;
      }
      if(str1.size()!=str2.size())
      {
          return false;
      }
      for(int i=2;i<n;i++)
      {
          ans.push_back(str1[i]);
      }
      for(int i=0;i<2;i++)
      {
          ans.push_back(str1[i]);
      }
      for(int i=n-2;i<n;i++)
      {
        jam.push_back(str1[i]);
      }
      for(int i=0;i<n-2;i++)
      {
          jam.push_back(str1[i]);
      }
      if(ans==str2 || jam==str2)
      {
          return true;
      }
      return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends