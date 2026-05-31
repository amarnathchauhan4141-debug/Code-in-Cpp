#include<iostream>
using namespace std;
int main()
{
	int n,r,c;
	cout<<"Enter no.ofRows:";
	cin>>n;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n-r; c++)
		{
			cout<< "   ";
		}
		for(c=1; c<=r; c++)
	    {
	    	cout<<"@  ";
	    }
	    cout<<endl;
	}
}