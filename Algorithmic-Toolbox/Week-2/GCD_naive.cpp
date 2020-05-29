#include<iostream>
using namespace std;
int main()
{
	int i,small,a,b;
	cin>>a>>b;
	if(a>b)
	{
		small=b;
	}
	else
	{
		small=a;
	}
	int best=0;
	for(i=1;i<=small;i++)
	{
		if(a%i==0 && b%i==0)
		{
			best = i;
		}
	}
	cout<<best;
	return 0;
}
