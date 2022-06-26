/* Mridul Gupta (ambarsariya_mg) */
 
#include "bits/stdc++.h"
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin(), (x).rend() //Backward traversal
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define pb push_back
#define fi first
#define se second 
#define endl "\n"
#define lcm(a, b) int lcm(int a, int b) { return (a / __gcd(a, b)) * b; }
#define setbits(x) __builtin_popcountll(x)
#define debug(a) cout<<a<<endl;
#define debug2(a, b) cout<<a<<" "<<b<<endl;
#define debug3(a, b, c) cout<<a<<" "<<b<<" "<<c<<endl; 
#define debug4(a, b, c, d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;  
#define debug5(a, b, c, d, e) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;  
#define debugarr(v) for(auto i : v){cout<<i<<" ";}cout<<endl;
#define debugmp(v) for(auto it:v){cout<<it.first<<" "<<it.second<<endl;}
using namespace std;
const int mod = 1e9 + 7;

// count digits
//  int countDigit(int n)
// {
//    if(n == 0)
//      return 1;
//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         ++count;
//     }
//     return count;
// }
 
// // maths
// int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
// int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
// int inv(int i) { if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
// int pwr(int a, int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
// int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}

// // string palindrome 
// int isPalindrome(string S){string P = S; reverse(P.begin(), P.end()); if (S == P) return 1; else return 0; }

// compare function
// bool sortbysec(pair<long long int, long long int> &a, pair<long long int, long long int> &b) { return (a.second < b.second); } 
// bool cmp(pair<long long int a, pair<long long int b){if (a.first > b.first)return true;else if (a.first == b.first){if (a.second > b.second)return true;}return false;}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

 


// Actual Code Here : 


const int N = 1050, K = 103;
int n, k, a[N], gr[K][K], pr[K][K], dis[K][K];
pair<int, int> out[N];

signed main(){
     
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++) {
			dis[i][j] = abs(i - (k+1)/2) + abs(j - (k+1)/2);
		}
	}
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++) {
			dis[i][j] += dis[i][j-1];
		}
	}
 
	for (int x = 0; x < n; x++) {
		pair<int, int> mn ={0,0};
		int mv = LONG_LONG_MAX;
		for (int i = 1; i <= k; i++) {
			for (int j = 1; j <= k-a[x]+1; j++) {
				if (pr[i][j+a[x]-1] - pr[i][j-1] == 0 && dis[i][j+a[x]-1] - dis[i][j-1] < mv) {
					mn = {i,j};
					mv = dis[i][j+a[x]-1] - dis[i][j-1];
				}
			}
		}
	
		out[x] = mn;
		if (mv == LONG_LONG_MAX) continue;
 
		for (int i = mn.se; i < mn.se + a[x]; i++) {
			gr[mn.fi][i] = 1;
		}
		for (int i = 1; i <= k; i++) {
			pr[mn.fi][i] = pr[mn.fi][i-1] + gr[mn.fi][i];
		}
	}
 
	for (int i = 0; i < n; i++) {
		if (!out[i].fi) {
			cout << -1 << endl;
		}
		else {
			cout << out[i].fi << ' ' << out[i].se << ' ' << out[i].se + a[i]-1 << endl;
		}
	}

}
