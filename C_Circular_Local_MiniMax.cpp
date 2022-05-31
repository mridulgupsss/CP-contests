
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
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vi arr(n);
		unordered_map<int, int> freq;
		for(int i=0; i<n; i++)
			{
               cin >> arr[i];
			   freq[arr[i]]++;
			}
 
		sort(all(arr));
        vector<int>  temp(arr.size()); 
int f=0;
		for(auto it: freq){
			if(it.second>n/2){
				cout<<"NO"<<endl;
				f=1;
				break;
			}
		}
if(f==0){
		if(n%2==1 ) cout<<"NO"<<endl;
		
		else{
        int j=n-1;
        int i=1;
        while(j>=0){
            temp[i]=arr[j--];
            if(i==n-1 || i==n-2){
                i=0;
            }
            else i+=2;
        }
 
		

			cout << "YES\n";
			for(int i=0; i<n; i++)
				cout << temp[i] << " ";
			cout << "\n";
		}
}



		
 
 
	}
}


