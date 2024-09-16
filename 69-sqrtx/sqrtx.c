#include <stdio.h>
int mySqrt(int num) {
    if(num==0||num==1)
        return num;
    double temp, sqrt;
    sqrt = num / 2;
    temp = 0;
    do
    {
        temp = sqrt;
        sqrt = (temp+(num/temp))/2;
    }while((temp-sqrt)!=0);
    int sq=sqrt;
    return sq;
}