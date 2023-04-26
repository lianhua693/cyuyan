//判断一个数字是否为质数。
#include<stdio.h>
#include<math.h>

int main()
{
    int i, m, n=0;
    printf("输入一个大于1的自然数：\n");
    scanf("%d", &m);
    for(i=2; i<= floor(sqrt(m)+0.5); i++)
    {
        if (m%i == 0)
        {
            n += 1;
        }
    }

    if (n == 0)
    {
        printf("是质数\n");
    }
    else
    {
        printf("不是质数\n");
    }
    return 0;
}
