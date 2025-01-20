#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int w = 0;
    int h = 0;
    int maxWidth = 0;
    int maxHeight = 0;
    for (auto size : sizes) {
    
        w = max(size[0], size[1]);
        h = min(size[0], size[1]);
        
      
        maxWidth = max(maxWidth, w);
        maxHeight = max(maxHeight, h);
    }
    return maxWidth*maxHeight; 
}