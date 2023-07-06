#include <bits/stdc++.h>
#define RTinFew
using namespace std;

int n, m, s, t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void dfs(int u){
    visited[u] = true;
    for (int v : adj[u]){
        if (!visited[v]) {
            parent[v] = u;
            dfs(v);
        }
    }
}

void Path(int s, int t){
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    if (!visited[t]){

    }
    else {
        vector<int> path;
        while (t!=s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for (int x: path){
            cout << x << " ";
        }
    }
}

int main()
{
    #ifndef RTinFew
    freopen("nhap.in", "r", stdin);
    freopen("xuat.out", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	auto start = chrono::high_resolution_clock::now();
    cin >> n >> m >> s >> t;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        for
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    Path(s,t);
	auto end = chrono::high_resolution_clock::now();
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count()*1e-9;
	cout << "Time taken by program is: " << time_taken << " sec" << endl;
	return 0;
    
}
