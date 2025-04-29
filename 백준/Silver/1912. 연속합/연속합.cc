#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> array(n);
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
        
    vector<int> continueSum(n);
    continueSum[0] = array[0];
    int answer = continueSum[0];
    
    for(int i = 1; i < n; i++){
        continueSum[i] = max(array[i], continueSum[i-1] + array[i]);
        answer = max(answer, continueSum[i]);
    }
    cout << answer << endl;
    return 0;
}