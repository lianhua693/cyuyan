//��1+2!+3!+...+20!�ĺ͡�
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
    printf("1+2!+3!+...+20!�ĺ�Ϊ��%lf\n", sum);
    return 0;
}
