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

	int t; cin>>t;
	for(int test=1; test<=t; test++){

		int n, q; cin>>n>>q; vpii vv;
		for(int i=0; i<q; i++){
			int u, v;
			cin>>u>>v;
            vv.pb({u, v});
        }
        int idx=0;
        while(idx<vv.size()){

			vi arr1, arr11, arr2, arr22;
            int i=2; int flag=0;
            while( i*i<=vv[idx].se){
                flag=0;
                int x=0;
                while(!(vv[idx].se%i)){
                    x+=1;
                    vv[idx].se/=i;
                }
                if(x){
                    flag=1;
                }
                if(flag==1){
                    arr2.pb(i);
                    arr22.pb(x);
                }

                i++;

            }
                if(vv[idx].se!=1){
                    arr2.pb(vv[idx].se);
                    arr22.pb(idx);
                }
                arr2.pb(2147483647);
                arr22.pb(0);
                reverse(all(arr2));
                reverse(all(arr22));

            int j=2; flag=0;
            while(j*j<=vv[idx].fi){
                flag=0;
                int x=0;
                while(!(vv[idx].fi%j)){
                    x+=1;
                    vv[idx].fi/=j;
                }
                if(x){
                    flag=1;
                }
                if(flag==1){
                    arr1.pb(j);
                    arr11.pb(x);
                }

                j++;

            }
                if(vv[idx].fi!=1){
                    arr1.pb(vv[idx].fi);
                    arr11.pb(idx);
                }

                arr1.pb(2147483647);
                arr11.pb(0);
                reverse(all(arr1));
                reverse(all(arr11));

                int ans =0;

                int n1=arr1.size();
                int n2=arr2.size();
                flag=0;
                while(n1>0 || n2>0){
                    flag=0;
                    if(arr1[n1-1]>arr2[n2-1]){
                        flag=1;
                    }
                    else if(arr1[n1-1]==arr2[n2-1]){

                        flag=2;
                       
                    }
                    else if(arr1[n1-1]<arr2[n2-1]){
                        flag=3;
                       
                    }

                    if(flag==1){
                        ans +=arr22[n2-1]*arr2[n2-1];

                        arr2.pop_back();
                        arr22.pop_back();
                    }
                    if(flag==2){


                        int val;
                        if(arr11[n1-1]>arr22[n2-1]){
                            val=arr11[n1-1]-arr22[n2-1];
                        }
                        else if(arr11[n1-1]<arr22[n2-1]){
                            val =arr22[n2-1]-arr11[n1-1];
                        }
                        else {
                            val=0;
                        }
                        val = val*arr1[n1-1];
                        ans+=val;

                        arr1.pop_back();
                        arr11.pop_back();
                        arr22.pop_back();
                        arr2.pop_back();
                    }
                    if(flag==3){
                        int mul = arr11[n1-1]*arr1[n1-1];
                            ans +=mul;
                        arr1.pop_back();
                        arr11.pop_back();
                    }
                 n1=arr1.size();
                 n2=arr2.size();
                }

		 debug(ans);

         idx++;
		}












		
		// debugarr(v);
	}

}












