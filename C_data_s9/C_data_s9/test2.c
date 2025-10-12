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

//面试题3：设计循环队列（622力扣）
//数组解法:
/*
typedef struct {
    int* a;
    int head;//指向头
    int tail;//指向尾下一个
    int k;

} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));

    //多开一个解决假溢出问题
    obj->a = (int*)malloc(sizeof(int)*(k+1));
    obj->head = 0;
    obj->tail = 0;
    obj->k = k;

    return obj;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return (obj->tail+1) % (obj->k+1) == obj->head;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->head == obj->tail;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if(myCircularQueueIsFull(obj))
    {
        return false;
    }
    obj->a[obj->tail] = value;
    obj->tail++;

    obj->tail %= (obj->k+1);

    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj))
    {
        return false;
    }
    else
    {
        ++obj->head;
    }
    obj->head %= (obj->k+1);
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    else
    {
        return obj->a[obj->head];
    }
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    else
    {
        return obj->tail == 0 ? obj->a[obj->k] : obj->a[obj->tail-1];
        //return obj->a[(obj->tail-1+obj->k+1) % (obj->k+1)];
    }
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->a);
    free(obj);
}
*/
