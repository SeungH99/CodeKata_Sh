#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float i = num1;
    float j = num2;
    float result = (i / j) * 1000;
    return (int)result;
}