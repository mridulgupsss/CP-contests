#include <bits/stdc++.h>     

using namespace std;

const int modulusss = 998244353;

int sum(int a, int b)
{
    a += b;
    while(a >= modulusss) a -= modulusss;
    while(a < 0) a += modulusss;
    return a;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> second(n + 1);
    for(int i = 0; i < n; i++) second[i + 1] = second[i] + (s[i] - '0');
    vector<vector<int>> Comb(n + 1);
    for(int i = 0; i <= n; i++)
    {
        Comb[i].resize(i + 1);
        Comb[i][0] = Comb[i][i] = 1;
        for(int j = 1; j < i; j++)
            Comb[i][j] = sum(Comb[i - 1][j], Comb[i - 1][j - 1]);
    }
    int ans = 1;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
        {
            int count = j + 1 - i;
            int count1 = second[j + 1] - second[i];
            if(count1 > k || second[n] < k) continue;
            count -= 2;
            if(s[i] == '0') count1--;
            if(s[j] == '0') count1--;
            if(count1 <= count && count1 >= 0 && count >= 0)
                ans = sum(ans, Comb[count][count1]);
        }
    cout << ans << endl;
}