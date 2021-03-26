#include <iostream>
#include <algorithm>

#define rep(i,n) for(int i=0;i<n;++i)
#define repp(i,a,b) for(int i=a;i<b;++i)
using namespace std;
typedef long long int ll;

const int mod = 1e9+7;
const ll INF = 1e18;
const int CHAR_BIT = 8;

ll akd(ll *a)
{
  ll ans = INF;
  rep(i, sizeof(a))
    ans = ans ^ ((a[i] ^ ans) & -(a[i] < ans)); // min(x, y)
  return ans;
}

ll boobi(ll *a)
{
  int j = 0;
  repp(i, 1, sizeof(a))
    {
    int v = a[j] - a[i];
    int sign = +1 | (v >> (sizeof(long long int) * CHAR_BIT - 1));
    if(sign)
      j = i;
    }
  return a[j];
}

int main()
{
  ll n;
  cin>>n;
  ll a[n];
  rep(i, n)
    cin>>a[i];
  cout<<*min_element(a,a+n)<<"\n";
  cout<<akd(a)<<"\n";
  cout<<boobi(a)<<"\n";

return 0;
}
