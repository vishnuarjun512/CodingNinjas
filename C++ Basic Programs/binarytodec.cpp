#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int rem;
	int base=1;
    int dec=0;
	while(n>0)
	{   
        rem=n%10;
        dec=dec+rem*base;
        n=n/10;
        base=base*2;
    }

    cout<<dec;
	
	
}
