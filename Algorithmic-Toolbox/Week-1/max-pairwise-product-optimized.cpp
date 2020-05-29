#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;

int64_t MaxPairwiseProduct(vector<int64_t>numbers)
{
	int n = numbers.size();
	int maxind1=-1;
	for(int i=0;i<n;i++)
	{
		if(maxind1==-1 || numbers[maxind1]<numbers[i])
		{
			maxind1=i;
		}
	}
	int maxind2=-1;
	for(int j=0;j<n;j++)
	{
		if(j!=maxind1 &&(maxind2==-1 || (numbers[j]>numbers[maxind2])))
		{
			maxind2=j;
		}
	}
	int64_t result = numbers[maxind1]*numbers[maxind2];
	return result;
}

int main()
{
	int n;
	cin>>n;
	vector<int64_t> numbers(n);
	for (int i=0;i<n;i++)
	{
		cin>>numbers[i];
	}
	cout<<MaxPairwiseProduct(numbers)<<"\n";
	return 0;
}
