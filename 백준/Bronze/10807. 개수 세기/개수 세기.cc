#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v;
    int num[100];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    cin >> v;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(num[i] == v){
            count++;
        }
    }
    cout << count;
    return 0;
}