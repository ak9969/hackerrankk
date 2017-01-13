#include <iostream>
using namespace std;


int main()
	{
    int q,c=0,a;
    cin>>q;
    
    for(int a0 = 0; a0 < q; a0++)
    {
        c=0;
        long x;
        cin >> x;
            // your code goes here
    	for( long int a=1;a<x;a++)
    	{
    		if((a^x)>(x))
    		{
    			c++;
    		}
    	}
    	cout<<c<<"\n";
    }
    return 0;
}
