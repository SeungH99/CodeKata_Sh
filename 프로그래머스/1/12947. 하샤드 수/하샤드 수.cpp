#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int a = x;
    int b = 0;
    while(a > 0){
        b = a % 10;
        a /= 10;
        sum += b;
    }
    if(x % sum == 0){
        return true;
    }
    return false;
}