using namespace std;

long long solution(int price, int money, int count)
{
    long long required = 0;
    for(int i = 1; i <= count; ++i){
        required += price*i;
    }
    if(required - money < 0){
        return 0;
    }
    else {
        return required-money;
    }
}