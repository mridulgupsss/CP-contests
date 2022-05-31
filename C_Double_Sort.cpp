
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
        vector<int> v;
        vector<int> v11;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.pb(a); 
            v11.pb(a); 
        }
        sort(v11.begin(), v11.end());
        
            vector<int> v2;
            vector<int> v22;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v2.pb(a); 
            v22.pb(a); 
        }
        sort(v22.begin(), v22.end());
   int f2=0;
   vector<pair<int, int>> ans;
   for(int i=0; i<n; i++){
       if(v[i]!=v11[i] || v2[i]!=v22[i]){
           int f=0;
           for(int j=i+1; j<n; j++){
               if(v[j]==v11[i] && v2[j]==v22[i]){
                   f=1;
                   swap(v[i],v[j]);
                   swap(v2[i],v2[j]);
                   ans.push_back({i, j});
                   break;
               }
           }

           if(f==0){
                f2=-1;
                break;
           }
       }
   }


   if(f2==-1){
       cout<<-1<<endl;
   }
   else{
       cout<<ans.size()<<endl;
       for(auto val : ans){
           cout<<val.first+1<<" "<<val.second+1<<endl;
       }
   }
        




    }
}



