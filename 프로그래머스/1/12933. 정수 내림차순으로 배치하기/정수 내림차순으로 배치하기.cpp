#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> vec;
    while(n > 0){
        vec.push_back(n%10);
        n = n / 10;
    }
    sort(vec.rbegin(), vec.rend());
    for(int i = 0; i < vec.size(); ++i){
        answer = answer * 10 + vec[i];
    }
    return answer;
}