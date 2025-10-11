#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//面试题：有效括号（20力扣）
//左括号入栈，右括号与出栈顶左括号匹配
/*
bool isValid(char* s)
{
    ST st;
    STInit(&st);
    while (*s)
    {
        //左括号入栈
        if (*s == '(' || *s == '[' || *s == '{')
        {
            STPush(&st, *s);
        }
        else//右括号取栈顶的左括号匹配
        {
            //如果栈为空，则false，对应只有右括号的问题
            if (STEmpty(&st))
            {
                STDestroy(&st);
                return false;
            }

            char top = STTop(&st);
            STPop(&st);

            //判断不匹配
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

    //判断栈内是否为空，如果不为空，则说明有左括号未匹配
    bool ret = STEmpty(&st);
    STDestroy(&st);

    return ret;
}
*/