#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> p(n + 1);
		for(int i = 1; i <= n; i++){
			cin >> p[i];
		}

		vector<int> ans(n + 1, 0);
		vector<bool> visited(n + 1, false);

		for(int i = 1; i <= n; i++){
			if(visited[i]) continue;

			vector<int> cycle;
			int cur = i;

			while(!visited[cur]){
				visited[cur] = true;
				cycle.push_back(cur);
				cur = p[cur];
			}

			int len = (int)cycle.size();
			for(int x : cycle){
				ans[x] = len;
			}
		}

		for(int i = 1; i <= n; i++){
			cout << ans[i] << (i == n ? '\n' : ' ');
		}
	}

	return 0;
}
