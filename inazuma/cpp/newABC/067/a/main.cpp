#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int a, b;
  cin >> a >> b;
  if(a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0) cout << "Possible" << endl;
  else cout << "Impossible" << endl;

}
