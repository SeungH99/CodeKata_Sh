#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    sort(score.begin(), score.end());
    
    int n = score.size();
    int income = 0;
    for(int i = n - m; i >=0; i-=m){
        income += score[i] * m;
    }
    
    return income;
}

int main(){
    int k,m;
    cin >> k >> m;
    vector<int> score;
    int x;
    
    while(cin >> x){
        score.push_back(x);
    }
    cout << solution(k,m,score) << endl;
    return 0;
}