#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> sumSet;

    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            sumSet.insert(numbers[i] + numbers[j]);
        }
    }

    vector<int> answer(sumSet.begin(), sumSet.end());

    return answer;
}
