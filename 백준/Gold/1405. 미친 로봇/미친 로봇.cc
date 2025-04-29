#include <bits/stdc++.h>
using namespace std;

int N;
double p[4];
bool visited[29][29];
double ans = 0.0;
// 동, 서, 남, 북
int dr[4] = { 0,  0,  1, -1};
int dc[4] = { 1, -1,  0,  0};

void dfs(int r, int c, int depth, double prob) {
    if (depth == N) {
        ans += prob;
        return;
    }
    for (int dir = 0; dir < 4; dir++) {
        if (p[dir] == 0.0) continue;
        int nr = r + dr[dir];
        int nc = c + dc[dir];
        if (!visited[nr][nc]) {
            visited[nr][nc] = true;
            dfs(nr, nc, depth + 1, prob * p[dir]);
            visited[nr][nc] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    // 입력은 % 단위이므로 100으로 나눠서 [0,1] 확률로 변환
    for (int i = 0; i < 4; i++) {
        int pi;
        cin >> pi;
        p[i] = pi / 100.0;
    }

    // 시작점을 배열 중앙에 놓고 방문 표시
    int start = 14;
    visited[start][start] = true;
    dfs(start, start, 0, 1.0);

    cout << fixed << setprecision(10) << ans << "\n";
    return 0;
}

    
