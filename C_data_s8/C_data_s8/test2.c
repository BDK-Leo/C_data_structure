#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����⣺��Ч���ţ�20���ۣ�
//��������ջ�����������ջ��������ƥ��
/*
bool isValid(char* s)
{
    ST st;
    STInit(&st);
    while (*s)
    {
        //��������ջ
        if (*s == '(' || *s == '[' || *s == '{')
        {
            STPush(&st, *s);
        }
        else//������ȡջ����������ƥ��
        {
            //���ջΪ�գ���false����Ӧֻ�������ŵ�����
            if (STEmpty(&st))
            {
                STDestroy(&st);
                return false;
            }

            char top = STTop(&st);
            STPop(&st);

            //�жϲ�ƥ��
            if ((top == '(' && *s != ')')
                || (top == '[' && *s != ']')
                || (top == '{' && *s != '}'))
            {
                STDestroy(&st);
                return false;
            }
        }
        ++s;
    }

    //�ж�ջ���Ƿ�Ϊ�գ������Ϊ�գ���˵����������δƥ��
    bool ret = STEmpty(&st);
    STDestroy(&st);

    return ret;
}
*/