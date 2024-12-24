#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<bool> stu(31, false);
    for(int i = 0; i < 28; i++){
        int check;
        cin >> check;
        stu[check] = true; 
    }
    for(int i = 1; i < 31; i++){
        if(!stu[i]){
            cout << i << endl;
        }
    }
}