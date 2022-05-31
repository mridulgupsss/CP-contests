
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
int rev(int n){
    int reversed_number=0, remainder;
  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  return reversed_number;
}
int ct(int n){
    int count =0;
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
   return count;
}
 int summ(int n){
{  
int m;int sum=0;   
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
    
return sum;  
}  


 }
signed main(){
 
    int t;
    cin>>t;
    int cas=1;
    while(t--){
   
     int n;
     cin>>n;  
    int sum = summ(n);
    int x= 9-(sum%9);
    if(x==9){
n=rev(n);
int c = ct(n);
int f=0;
int ans=0;
int ten=1;
int it=c-1;
while(it--){
    ten*=10;
}
int d= n%10;
n=n/10;
ans+=d*10*ten;
ten/=10;
               while(n!=0){
                   int d= n%10;
               ans+=(d*ten);
               ten/=10;
                n=n/10;
               }
  cout<<"Case #"<<cas<<": "<<ans<<endl;

    }
else{
int c = ct(n);
int f=0;
int ans=0;
int ten=1;
int it=c-1;
while(it--){
    ten*=10;
}
int pp=n;
 n = rev(n);
int z=0;

   while(n!=0)  
   {  
      int d=n%10;
       
           if(d<=x){
               ans+=(d*ten);
               ten/=10;
           }
           else{
          ten*=10;
  int y=x*ten;
  ans*=10;
               ans+=y;
               ten/=10;
               while(n!=0){
                   int d= n%10;
               ans+=(d*ten);
               ten/=10;
                n=n/10;
               }

           }
       

     n=n/10;
       
       
   }  
   if(pp==ans){
       
       ans=ans*10 + x;
   }

    cout<<"Case #"<<cas<<": "<<ans<<endl;

}

     
     cas++;
    }
}



