#include <stdio.h>
#include <math.h>

int Num_divisor(int n)
{
    int limit=sqrt(n);
    int cnt=1;
    int sum=1;
    for(int i=2;i<=limit;++i)
    {
        if(n%i==0)
        {
            sum+=i+n/i;
            cnt+=2;
        }
        if(n==limit*limit)
        {
            sum-=limit;
            cnt-=1;
        }
    }
    printf("%d약수들의 합은 %d, 개수는 %d입니다.",n,sum,cnt);
    return 0;
}

int main()
{
    Num_divisor(12);
    return 0;
}