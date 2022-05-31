
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
       int n,m;
       cin>>n>>m;
       vvi vv(n, vi(m));

       f(i, n){
           f(j, m){
               cin>>vv[i][j];

           }
       }

 
           vi index;
           f(i, n){
               vi temp = vv[i];
               sort(temp.begin(), temp.end());
               int flag2=0;
               f(j, m){
                   if(vv[i][j]!=temp[j]){
                       index.pb(j);
                       flag2=1;
                   }
               }
               if(flag2==1) break;
           }

    if(index.size()==0){
        cout<<1<<" "<<1<<endl;
    }
    else if(index.size()>2){
        cout<<-1<<endl;

    }
    else{
        f(i, n){
            swap(vv[i][index[0]], vv[i][index[1]]);
        }


int flag3=0;
        f(i, n){
               vi temp = vv[i];
               sort(temp.begin(), temp.end());
            f(j, m){
                if(vv[i][j]!=temp[j]){
                    flag3=1; break;
                }
            }
        }


        if(flag3==1){
            cout<<-1<<endl;
        }
        else{
            cout<<index[0]+1<<" "<<index[1]+1<<endl;
        }
    }
       

  
   
       
        




    }
}



