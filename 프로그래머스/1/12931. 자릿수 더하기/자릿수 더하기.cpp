#include <iostream>

using namespace std;
int solution(int n)
{
    int result = 0;
    result += n / 100000000;
    result += (n % 100000000) / 10000000;
    result += (n % 10000000) / 1000000;
    result += (n % 1000000) / 100000;
    result += (n % 100000) / 10000;
    result += (n % 10000) / 1000;
    result += (n % 1000) / 100;
    result += (n % 100) / 10;
    result += (n % 10) / 1;
    return result;
}