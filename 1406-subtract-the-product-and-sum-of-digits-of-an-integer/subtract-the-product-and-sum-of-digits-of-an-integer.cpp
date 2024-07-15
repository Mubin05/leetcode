class Solution {
public:
    int subtractProductAndSum(int n) {
        int copy=n;
        int sum=0;
        int prod=1;
        while(copy>0){
            int d=copy%10;
            sum+=d;
            prod*=d;
            copy/=10;
        }
        return(prod-sum);
    }
};