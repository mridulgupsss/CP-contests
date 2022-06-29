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
const int inf = 1e18;
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
         
 
typedef long long int64;
typedef vector<int> vint;
 
#define SIZE(X) ((int)((X).size())) 
#define ALL(X) (X).begin(), (X).end()
#define FOR(IT, X) for (__typeof((X).begin()) IT = (X).begin(); IT != (X).end(); ++IT)
 
template<typename T> string toStr(const T &x) { ostringstream os; os << x; return os.str(); }
template<typename T> void toMin(T &x, const T &y) { x = min(x, y); }
template<typename T> void toMax(T &x, const T &y) { x = max(x, y); }
 
map<string, int> best;
int lst[1005];
 

// Actual Code Here : 
signed main(){

    int n;
    string name;
    int score;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> score;
        if (best.find(name) == best.end()) {
            best.insert(make_pair(name, score));
        } else {
            toMax(best[name], score);
        }
    }
    cout << SIZE(best) << endl;
    int ptr = 0;
    FOR (it, best) {
        lst[ptr] = it->second;
        ptr++;
    }
    sort(lst, lst + ptr);
    FOR (it, best) {

int p =(upper_bound(lst, lst + ptr, it->second) - lst);
        string ans ="";
    if (100 * p < SIZE(best) * 50) ans = "noob";
    else if (100 * p < SIZE(best) * 80) ans= "random";
    else if (100 * p < SIZE(best) * 90) ans= "average";
    else if (100 * p < SIZE(best) * 99) ans= "hardcore";
     else ans= "pro";
        cout << it->first << " " << ans << "\n";
    }
    cout << flush;
 

 







   //debug(ans);
   //debugarr(v);


  
}

