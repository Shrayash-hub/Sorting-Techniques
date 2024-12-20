//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        int a;
        float b;
        char c;
        double d;
        long e;
        if(str=="Character"){
            return sizeof(c);
        }
        else if(str=="Integer"){
            return sizeof(a);
        }
        else if(str=="Float"){
            return sizeof(b);
        }
        else if(str=="Double"){
            return sizeof(d);
        }
        else{
            return sizeof(e);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends