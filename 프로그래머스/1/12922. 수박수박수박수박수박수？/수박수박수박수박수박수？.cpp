#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 0; i < n; ++i){
        int select = i % 2;
        switch (select){
            case 0: 
                answer += "수";
                break;
                
            case 1: 
                answer += "박";
                break;
        }
           
    }
    return answer;
}