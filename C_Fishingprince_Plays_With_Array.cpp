/* Mridul Gupta (ambarsariya_mg) */
 
#include "bits/stdc++.h"
#include <string>
#define int long long
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin(), (x).rend() //Backward traversal
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
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
#define debug3(a, b, temp2) cout<<a<<" "<<b<<" "<<c<<endl; 
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


    int t;
    cin >> t;
    while(t--){
       int n,m; cin>>n>>m; int s=0;
       vi v;
       for(int i=0; i<n; i++){
           int a; cin>>a;
           v.pb(a);
           s+=a;
       }

       int k; cin>>k; vi v2; int sum=0;
       for(int i=0; i<k; i++){
           int a; cin>>a;
           v2.pb(a);
           sum+=a;
       }

if(s==sum){

 vi a1, a2 , aa1, aa2;
 int i=0;
    while(i< n){
        int n1=a1.size();
        int n2=a2.size();
        int flag1=0;
        if(i!=0 && a1[n1-1]==v[i]){
            a2[n2-1]++;
            i++;
        }
        else if(!(v[i]%m)){
            flag1=1;
        }
        else {
            a1.pb(v[i++]);
            a2.pb(1);
            
        }

        if(flag1==1){
            int temp=1, temp2;
            while(!(v[i]%m)){
                temp2=v[i]/m;
                temp=temp*m;
                v[i]=v[i]/m;
            }
            if((i) && a1[n1-1]==temp2){
                a2[n2-1]+=temp;
                i++;
            }
            else {
                i++;
                a2.pb( temp);
                a1.pb( temp2);
                
            }
        }
    }
    i=0;
    while(i< k){
        int n1 =aa1.size();
        int n2 =aa2.size();
        int fl=0;
        if(i!=0 && aa1[n1-1]==v2[i]){
            aa2[n2-1]++; i++;
        }
        else if(!(v2[i]%m)){
            int temp=1, temp2;
            while(!(v2[i]%m)){
                temp2=v2[i]/m;
                temp=temp*m;
                v2[i]=v2[i]/m;
            }
            if((i) && aa1[n1-1]==temp2){
                i++;
                aa2[n2-1]+=temp;
                
            }
            else {
            aa1.pb(temp2);
            i++;
            aa2.pb(temp); 
            }
        }
        else {
fl=1;
        }
        if(fl==1){
            aa1.pb(v2[i++]);
            aa2.pb(1);
        }
    }


bool flag=true;
if( (a1.size() != aa1.size())){
    cout<<"No"<<endl;
  flag=false;
}
else if((a2.size() != aa2.size())){
    cout<<"No"<<endl;
    flag=false;
}
else if((a2.size() != aa1.size())){
    cout<<"No"<<endl;
    flag=false;
}
else if((a1.size() != aa2.size())){
   cout<<"No"<<endl;
    flag=false;
}
else if (a1!=aa1) {
       cout<<"No"<<endl;
    flag=false;
}
else if( a2!=aa2){
       cout<<"No"<<endl;
    flag=false;
}


if(flag==true) cout<<"Yes"<<endl;

}
else{
    cout<<"No"<<endl;
}






   //debug(ans);
   //debugarr(v);


  }
}

