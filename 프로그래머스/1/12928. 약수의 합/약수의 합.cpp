#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int result = 0;
    for(int i = 1; i <= sqrt(n); ++i){ //100의 약수는 제곱근인 10을 1~10까지의 수와 나눴을 때 나머지가 0인 수가 약수 0
        if(n % i == 0){//작은 약수
            result += i; 
            if(i != n / i){// 작은 약수와 짝꿍인 큰 약수. 
                result += n / i;
            }
        }
    }
    return result;
}