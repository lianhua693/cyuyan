//�ж�һ�������Ƿ�Ϊ������
#include<stdio.h>
#include<math.h>

int main()
{
    int i, m, n=0;
    printf("����һ������1����Ȼ����\n");
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
        printf("������\n");
    }
    else
    {
        printf("��������\n");
    }
    return 0;
}
