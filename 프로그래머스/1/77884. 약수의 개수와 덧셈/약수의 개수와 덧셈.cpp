#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int left, int right) {
    int divisor=0;
    int answer = 0;
    for(int i = left; i <= right; ++i){
        for(int j = 1; j <= i; ++j){
            if(i%j == 0){
                divisor += 1;
            }
        }
        if(divisor%2 == 0){
            answer += i;
            divisor = 0;
        }
        else {
            answer-= i;
            divisor = 0;
        }
    }
    return answer;
        
}