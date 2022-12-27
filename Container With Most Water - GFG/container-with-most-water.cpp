//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    if(len == 0 || len == 1) return 0;
    int s=0, e=len-1;
    long long area = 0;
    long long mostWater = INT_MIN;
    while(s<e){
        area = min(A[s], A[e])*(e-s);
        mostWater = max(area, mostWater);
        if(A[s]<A[e]) s++;
        else e--;
    }
    return mostWater;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends