#include <iostream>
using namespace std;

long long int gcd(long long int  a, long long int b) {
  if (b==0)
  {
  	return a;
  }
  else
  {
  	long long int r= a%b;
  	return gcd(b,r);
  }

}




int main() {
  long long int a, b;
  cin >> a >> b;
  long long int div=gcd(a,b);
  long long int ans = (a*b)/div;
  cout << ans<<endl;
  
  return 0;
}
