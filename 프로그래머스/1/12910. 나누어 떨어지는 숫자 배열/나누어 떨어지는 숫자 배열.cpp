#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> arr2;
    for(auto iter = arr.begin(); iter != arr.end(); iter++){
        if(*iter % divisor == 0){
            arr2.push_back(*iter);
        }
    }
    sort(arr2.begin(), arr2.end());
    
    if(arr2.size() == 0){
        arr2.push_back(-1);
        return arr2;
    }
    return arr2;
    
}