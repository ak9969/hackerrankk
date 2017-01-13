#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,t,sum=0;
    cin>>t;
    while(t--)
    
        {
        cin>>n;
        --n;    
        long long int n1,n2,n3,sum;
        n1=n/3;
        n2=n/5;
        n3=n/15;
        sum=(3*n1*(n1+1))/2+(5*n2*(n2+1))/2-(15*n3*(n3+1))/2;
        cout<<sum<<"\n";    
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
