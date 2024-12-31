#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int sign = 1;
    int num = 0;
    int start = 0;
    if(s[0] == '+'){
        sign = 1;
        start = 1;
    }
    else if(s[0] == '-'){
        sign = -1;
        start = 1;
    }
    for(int i = start; i < s.size(); ++i){
        num = num * 10 + (s[i] - '0');
    }
    
    return sign * num;
}
