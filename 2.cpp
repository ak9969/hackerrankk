#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
        {
        long int d,i=-1;
        cin>>d;
        long int a[5000],sum=0;

	do 
            {  i++;
	
	a[i+1]=0;
        if(i==0)
            {
            a[0]=1;
        }
        else if(i==1)
            {
            a[1]=2;
        }
        else 
            {
            a[i]=a[i-1]+a[i-2];
        }
	if(a[i]>d)
	break;
        if(a[i]%2==0)
            {
            sum=sum+a[i];
	

        }
        } while(a[i]<d);  
      cout<<sum<<"\n";
    
    }
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


