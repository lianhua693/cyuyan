//求1+2!+3!+...+20!的和。
#include <stdio.h>

int main()
{
    int i, j;
    double c;
    double sum = 0.0;
    for (i = 1; i <= 20; i++)
    {
        c = 1;
        for (j = 1; j <=i ; j++)
        {
            c *= j;
        }
        sum += c;
    }
    printf("1+2!+3!+...+20!的和为：%lf\n", sum);
    return 0;
}
