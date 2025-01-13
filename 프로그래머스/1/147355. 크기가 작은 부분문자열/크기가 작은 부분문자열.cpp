#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long pvalue = stoll(p);
    
    for (size_t i = 0; i <= t.length() - p.length(); ++i) {
        string temp = t.substr(i, p.length()); // 부분 문자열 추출
        long long value = stoll(temp);  // 부분 문자열을 숫자로 변환
        if (value <= pvalue) {
            ++answer; // 조건을 만족하면 카운트 증가
        }
    }
    return answer;
}