//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
#include<stdio.h>

void fun(char* s,int length)
{
    if (length >= 1)
    {
        printf("%c\n", s[length - 1]);
        fun(s, length - 1);
    }
}

int main()
{
    char* s = "hello";
    int length = 5;
    fun(s, length);
    return 0;
}
