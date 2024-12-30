#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    if(phone_number.size() <= 4){
        return phone_number;
    }
    string masked(phone_number.size()-4, '*');
    masked += phone_number.substr(phone_number.size()-4); 
    return masked;
}