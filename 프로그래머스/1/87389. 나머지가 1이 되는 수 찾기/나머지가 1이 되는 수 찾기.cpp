#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;
    for(int i = 1; i <= n; ++i){
        if(n % i == 1){
            vec.push_back(i);
        }
    }
    sort(vec.begin(), vec.end());
    answer = *vec.begin();
    return answer;
}