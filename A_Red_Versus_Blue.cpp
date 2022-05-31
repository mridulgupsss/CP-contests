
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
       int n,r,b;
       cin>>n>>r>>b;
        int diff=r-b;
        int diff_1 =diff-1;
        int div = diff_1/(b+1);
        int rem =   diff_1%(b+1);
string str="R";
        for(int i=0; i<b; i++){
            str.pb('B');
            str.pb('R');
        }
        // int put_all=-1;
        // int not_all=-1;
        // if(div==0){
        //     put_all=diff_1;
        // }
        // else if (rem==0){
        //     put_all = div;
        // }
        // else{
        //     put_all=div;
            
        // }
        string str2="";
        for(int i=0; i<div; i++){
            str2.pb('R');
        }
int idx=3;
int kk =b;
        while(kk--){
            str.insert(idx, str2);
            idx+= div+2;
        }
        str.insert(0, str2);
        idx=0;
        while(rem>0){
            str.insert(idx, "R" );
            for(int i=idx; i<str.size(); i++){
                if(str[i]=='B'){
                    idx=i+1; break;
                }
            }

            rem--;
        }
for(int i=0; i<str.size(); i++){
    cout<<str[i];
}
cout<<endl;

   
       
        




    }
}



