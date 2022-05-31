
/* Mridul Gupta (ambarsariya_mg) */
 
#include "bits/stdc++.h"
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#define all(x) (x).begin(), (x).end() //Forward traversal
 




// loops 
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
 
// vector
#define vi vector<int>
#define vvi vector<vector<int>>
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
 
//  // maths
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
 
signed main(){
 
    int t;
    cin>>t;
    while(t--){
        int mn = INT_MAX, mx =INT_MIN;
       int n;
       cin>>n;
       int s=0;
        vector<int> v;
       map<int, int> mp;
        for(int i=0; i<n+2; i++){
            int a;
            cin>>a;
            v.pb(a); s+=a;
            mp[a]++;
        }
int f=0;
int ans ;
int ss;
        for(int i=0; i<n+2; i++){
            int check  = s-v[i];
            if(check%2!=0) continue;
            int sum = (s-v[i])/2;
            mp[v[i]]--;
            if(mp.find(sum)!=mp.end() && mp[sum]!=0){

                ans =v[i];
                f=1;
                ss=sum;
                break;
            }
            mp[v[i]]++;
        }
      if(f==0){
          cout<<-1<<endl;
      }  
    else {
        int f1=0, f2=0;
        for(int i=0; i<n+2; i++){
            if(v[i]==ss &&f1==0){
                f1=1;
            }
            else if(v[i]==ans && f2==0){
                f2=1;
            }
            else cout<<v[i]<<" ";
        }
        cout<<endl;
    }
   
       
        




    }
}


