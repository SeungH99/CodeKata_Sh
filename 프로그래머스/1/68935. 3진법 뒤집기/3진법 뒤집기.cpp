#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
    vector<int> base3;
    while(n > 0){
        base3.push_back(n % 3);
        n /= 3 ;
    }
    
    reverse(base3.begin(), base3.end());
    
    int answer = 0;
    int power = 1;
    for(int a : base3){
        answer += a * power;
        power *= 3;
    }
    return answer;
}