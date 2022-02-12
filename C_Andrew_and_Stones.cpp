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
        vector<int> v(n);
        for(auto &val : v){
            cin>>val;
        }
        int ans=0;
        vi even, odd;
        for(int i=1; i<n-1; i++){
            int val =v[i];
            if(val%2==0) even.push_back(val);
            else odd.push_back(val);
        }
    int ansf=0;
        if(even.size()==0 && odd.size()==1) {
            cout<<-1<<endl;
            ansf=1;
        }
        else if(even.size()==0){
            int ff=0;
            for(int i=1; i<n-1; i++){
                if(v[i]!=1) ff=1;
            }
            if(ff==0) {
                cout<<-1<<endl;
                ansf=1;
            }
            else{
                int fff=1; ans=0;
                for(int i=1; i<n-1; i++){
                    int val=v[i];
                    if(val==1) ans+=1;
                    else if(fff==1){
                        fff=0;
                        ans=ans+((val-1)/2);
                        ans++;
                    }
                    else{
                        ans=ans+((val+1)/2);
                    }
                }

                cout<<ans<<endl;
            }
        }
        else{
            for(auto a: even){
                ans+=(a/2);
            }
            int ct=ans;
            for(auto b: odd){
                ans=ans+((b+1)/2);
            }
            cout<<ans<<endl;
        }
    }
}
