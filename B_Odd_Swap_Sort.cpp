/* Mridul Gupta (ambarsariya_mg) */
 
#include "bits/stdc++.h"
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#define all(x) (x).begin(), (x).end() //Forward traversal
 
// loops 
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
 
// vector
#define vi vector<int>
#define pb push_back
#define fi first
#define se second
 
#define endl "\n"
 
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
 
using namespace std;
 
const int mod = 1e9 + 7;
const int inf = 1e17;
 
 
 // maths
int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int inv(int i) { if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int pwr(int a, int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
 
 // strings 
int isPalindrome(string S){
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) return 1;
    else return 0;
}
 
signed main(){
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
     
        int mn = INT_MAX, mx =INT_MIN;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            arr[i]=a;
            
        }

        vi v;
        for(auto  val : arr){
            v.pb(val);
    }
sort(all(v));
int f=0;
int i=0;
int even=-1, odd=-1;
even=arr[0]%2==0?0:-1;
odd=arr[0]%2!=0?0:-1;
while(i<n){
    if(arr[i])

    i++;
}




    }
}


