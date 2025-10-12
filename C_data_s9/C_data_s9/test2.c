#define _CRT_SECURE_NO_WARNINGS 1

//面试题1:用队列实现栈(225力扣)
//保持一个存数据，一个为空
//入数据入不为空的队列
//出数据通过空的倒一下
/*
typedef struct {
    Queue q1;
    Queue q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
    QueueInit(&pst->q1);
    QueueInit(&pst->q2);

    return pst;
}

void myStackPush(MyStack* obj, int x) {
    if (!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1, x);
    }
    else
    {
        QueuePush(&obj->q2, x);
    }
}

int myStackPop(MyStack* obj) {
    //把不为空的栈内前size-1的数据倒走，删除最后一个就是栈顶数据
    //假设法
    Queue* empty = &obj->q1;
    Queue* nonEmpty = &obj->q2;
    if (!QueueEmpty(&obj->q1))
    {
        nonEmpty = &obj->q1;
        empty = &obj->q2;
    }

    while (QueueSize(nonEmpty) > 1)
    {
        QueuePush(empty, QueueFront(nonEmpty));
        QueuePop(nonEmpty);
    }

    int top = QueueFront(nonEmpty);
    QueuePop(nonEmpty);

    return top;
}

int myStackTop(MyStack* obj) {
    if (!QueueEmpty(&(obj->q1)))
    {
        return QueueBack(&obj->q1);
    }
    else
    {
        return QueueBack(&obj->q2);
    }
}

bool myStackEmpty(MyStack* obj) {
    return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
    QueueDestry(&obj->q1);
    QueueDestry(&obj->q2);

    free(obj);
}
*/

//面试题2：用栈实现队列（232力扣）
/*

*/