#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
int n,col[2][MAXN],col_to_pos_1[MAXN];
long long output;
bool vis_0[MAXN];
int T,cnt;
long long c;
void dfs(int pos)
{
	if(vis_0[pos])return;
	vis_0[pos]=true;
	++cnt;
	dfs(col_to_pos_1[col[0][pos]]);
}
int main()
{
	int T; cin>>T;

	while(T--)
	{
		int n ; cin>>n;
		for(int i=1;i<=n;++i)
		{
			vis_0[i]=false;
		}
		for(int i=1;i<=n;++i)
		{
			cin>>col[0][i];
		}
		for(int i=1;i<=n;++i)
		{
			cin>>col[1][i];
			col_to_pos_1[col[1][i]]=i;
		}
		c=0;
		for(int i=1;i<=n;++i)
		{
			cnt=0;
			dfs(i);
			c+=cnt/2;
		}
		cout<< ((c*(n-c))<<1)<<endl;
	}
	
	return 0;
}