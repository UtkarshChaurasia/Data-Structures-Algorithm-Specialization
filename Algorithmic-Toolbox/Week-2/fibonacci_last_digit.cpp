#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	vector<int64_t>fib(n+1);
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<=n;i++)
	{
		fib[i]=(fib[i-1])%10+(fib[i-2])%10;
	}
	if(fib[n]<10)
	{
		cout<<fib[n];
	}
	else
	{
		cout<<(fib[n]%10)<<endl;
	}
}
