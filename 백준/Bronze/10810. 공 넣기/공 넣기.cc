#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int balls[N+1] = {0};  // 공 번호를 저장할 배열 (1번 공부터 N번 공까지, 1-indexed)

    // M번의 작업 처리
    for (int i = 0; i < M; i++) {
        int start, end, new_val;
        cin >> start >> end >> new_val;

        // start부터 end까지의 공 번호를 new_val로 바꾼다
        for (int j = start; j <= end; j++) {
            balls[j] = new_val;
        }
    }

    // 결과 출력 (1번 공부터 N번 공까지 출력)
    for (int i = 1; i <= N; i++) {
        cout << balls[i] << " ";
    }
    cout << endl;

    return 0;
}

