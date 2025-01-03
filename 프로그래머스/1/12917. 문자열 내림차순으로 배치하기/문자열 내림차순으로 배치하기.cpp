#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    for(int i = 0; i < s.size(); ++i){
        for(int j = 0 ; j < s.size(); ++j){
            if(s[j] < s[j+1]){
                swap(s[j], s[j+1]);
            }
        }
    }
    string answer = s;
    return answer;
}