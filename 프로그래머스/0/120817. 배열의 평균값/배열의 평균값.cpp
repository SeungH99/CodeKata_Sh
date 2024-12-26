#include <string>
#include <vector>
#include <cmath>

using namespace std;

double solution(vector<int> numbers) {
    float result;
    for(auto iter = numbers.begin(); iter != numbers.end(); iter++){
        result += *iter;
    }
    return result/numbers.size();
}