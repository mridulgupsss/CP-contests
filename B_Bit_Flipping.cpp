
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
 

 void flip_bits(string &s, int idx){
    for(int i=0; i<s.size(); i++){
        if(i!=idx){
            if(s[i]=='1') s[i]='0';
            else s[i]='1';
        }
    }
 }
signed main(){
 
    int t;
    cin>>t;
    while(t--){
        int mn = INT_MAX, mx =INT_MIN;
       int n,k;
       cin>>n>>k;
       string s ;
       cin>>s;
       vector<int> v(n, 0);
       for(int i=0; i<n; i++){
           if((k>0) && ((s[i]=='1' && k%2!=0 ) || (s[i]=='0' && k%2==0 ))){
               k--;
               v[i]++;
            //    flip_bits(s, i);
           }

       }
        int extraaa=k;
        while(k>0){
            //  flip_bits(s, s.size()-1);
             v[n-1]++;
             k--;
        }
            int idx=-1;
        for(int i=0; i<n; i++){

            if(v[i]!=0) idx=i;
        }
        
        if(idx==-1){
            while(n--){
                cout<<"0";
            }
            cout<<endl;
            
        }
        else{
            if(idx==n-1){
                for(int i=0; i<n-1; i++){
                    cout<<"1";
                }
                if(extraaa%2!=0) cout<<"0";
                else cout<<"1";
            }
            else{
                for(int i=0; i<=idx; i++){
                    cout<<"1";
                }
                for(int i=idx+1; i<n; i++){
                    char ch = s[i]=='0'?'1':'0';
                    cout<<ch;
                }
            }
            cout<<endl;
        }




        for(auto val: v){
            cout<<val<<" ";
        }
        cout<<endl;


     
        
       
        




    }
}



