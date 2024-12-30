#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    int sum = 0;
    for(auto it = numbers.begin(); it != numbers.end(); ++it){
        sum += *it;
    }
    return answer - sum;
}