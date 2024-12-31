#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long is_sqrt = sqrt(n);
    
    if(is_sqrt*is_sqrt == n){
        is_sqrt+=1;
        return is_sqrt*is_sqrt;
    }
    else{
        return -1;
    }
}