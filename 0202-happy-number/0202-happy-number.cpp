int fun(int s){
    int sum = 0;
    while(s>0){
        int d = s%10;
        s = s/10;
        sum = sum + d*d;
    }
    return sum;
}
class Solution {
public:
    bool isHappy(int n) {
        int s = n,f = n;
        while(f!=1){
            s = fun(s);
            f = fun(f);
            f = fun(f);
            if(s==f && f!=1){
                return false;
            }

        }
        return true;
    }
};