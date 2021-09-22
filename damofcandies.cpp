//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        int low=0,high=n-1,res=0;
        
        while(low<high)
        {
            int temp=(high-low-1)*min(height[low],height[high]);
            res=max(temp,res);
            //as we want maximum height
            if(height[low]<height[high])
            low++; 
            else
            high--;
    }   
    return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
