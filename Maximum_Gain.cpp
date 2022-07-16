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
         

// Actual Code Here : 

signed main(){
int t ;
cin>>t; 
for (int casee=1; casee<=t; casee++){
    int idx=0;
    int n; cin>>n; vi v; int p=0;
    for(int i=0; i<n; i++){
        int a ; cin>>a; v.pb(a); p+=a;
    }
    int m; cin>>m; vi v2; int q=0;
    int sum=n+m; int temp1, temp2, ww=0;
    for(int i=0; i<m; i++){
        int a ; cin>>a; v2.pb(a); q+=a;
    }
    int k; cin>>k; int ii, jj; 
    int kk =sum-k;
    while( idx<=kk){
        if(!(kk-idx>m) && !(idx>n)){
            jj=0; ii=0;
            while(ii<idx )jj=v[ii++]+jj;
            temp1=jj;
            while(ii<n){
                int xx1= v[ii];
                int xx2 =v[ii++ -idx];
                jj=xx1+jj-xx2;
                if(jj<temp1) temp1=jj;
                else{

                }
                
            }
            jj=0; ii=0;
            while( ii<kk-idx ){
                jj=v2[ii++]+jj;
              
            }
              temp2=jj;
            while(ii<m){
                int xx1 = v2[ii];
                int xx2=v2[idx-kk+ii++];
                jj=xx1-xx2+jj;
                if(jj<temp2) temp2=jj;
                else{

                }
                
            }
            int nn = p-temp1;
            int mm= q-temp2;
            if(nn+mm>ww) ww=nn+mm;
            else{

            }
            


        }

        idx++;

    }


 cout<<"Case #"<<casee<<": ";
 debug(ww);


    //
   // debugarr(v)
}

}












