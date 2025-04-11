#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
const ll INF = 1e12 + 1;
using namespace std;

ll solve(std::vector<ll> d, ll n) {
  if (n <= 2) {
    return 0;
  }
  ll x = -1LL*(*std::max_element(d.begin(), d.end()));
  return x;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ll t;
  std::cin >> t;
  while (t--) {
    ll n;
    std::cin >> n;
    std::vector<ll> d(n);
    for (int i = 0; i < n; i++) {
      std::cin >> d[i];
    }
    ll ans = solve(d, n);
    std::cout << ans << std::endl;
  }

  return 0;
}
