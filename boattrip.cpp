#include <iostream>
#include <cstdio>
using namespace std;

int main() 
	{
		int n,a,b,t;
		int p[50];
		cin>>n>>a>>b;
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		int max = p[0];
		
		for(int i=0;i<n;i++)
    	{
    	if(max < p[i])
    		{
    			
    			max = p[i];
    	   }
    	}

    	if(max<=a*b)
    	{
    		cout<<"Yes";
    	}
    	else 
    	{
    		cout<<"No";
    	}
    return 0;
	}