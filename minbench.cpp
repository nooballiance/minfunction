#include <iostream>
#include <algorithm>

#define rep(i,n) for(int i=0;i<n;++i)
#define repp(i,a,b) for(int i=a;i<b;++i)
using namespace std;
typedef long long int ll;

const int mod = 1e9+7;
const ll INF = 1e18;

ll akd(ll *a) {
  ll ans = INF;
  rep(i, sizeof(a))
    if(a[i] < ans)
      ans = a[i];
  return ans;
}

ll boobi(ll *a) {
  int j = 0;
  repp(i, 1, sizeof(a))
    if(a[i] < a[j])
      j = i;
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
