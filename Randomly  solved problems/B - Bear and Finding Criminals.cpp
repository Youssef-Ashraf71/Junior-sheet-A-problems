/*
       ____            ___________
      /\   \          |
     /  \   \         |
    /    \   \        |___________
   /______\   \                  |
  /        \   \                 |
 /          \  /       __________|
/            \/

 ___  ___              F
|\  \|\   \            F
\ \  \_\   \           F
 \ \ ___    \          F
  \  \ \\ \  \         F
   \  \__\\ \_\        F
    \ |__| \|__|       F

 */
#include <bits/stdc++.h>
#include <map>
#include<unordered_set>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
using namespace std;
#define REPi(a,b) for (int i = a; i <= b; i++)
#define REPj(a,b) for (int j = a; j <= b; j++)
#define genMod(x,Mod) (x<0)?(x % Mod + Mod) : (x % Mod)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (int) v.size()
#define cin(vec) for(auto& i : vec) cin >> i;
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define coutv(vec) for(auto& i : vec) {cout << i << " " ; cout << "\n";}
#define couth(vec) for(auto& i : vec) {cout << i << " " ;}
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
const ll N = 1e6+1211,NN = 105, mod = 1e9 + 7;
ll REMINDER = 1000000007;
/*
int n, m;
char grid[1001][1001];
int vis[1001][1001];
1
int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};
const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
*/
void solve() {
    ll n, i = 0, j = 0, cnt = 0;
    ll m;  cin>>n>>m; vector<ll>x(n); cin(x); m--;
    if(x[m]) cnt++;
    ll dis=max(llabs(n-m+1),llabs(m)); ll tmp=dis; i=1; ll l ,r;
    while (dis--){
        l=m-i; r=m+i;
        if(l>=0 && r<=n-1){
            if(x[l] && x[r]){ cnt+=2;}
        }
        else if(l>=0){
            if(x[l]) cnt++;
        }
        else if(r<=n-1){
            if(x[r]) cnt++;
        }
       // cout<<i<<" "<<cnt<<endl;
        i++;
    }
    cout<<cnt<<endl;
}

int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;  //    cin >> test_case;

    while (test_case--)
    {
        solve();
    }
    return 0;
}