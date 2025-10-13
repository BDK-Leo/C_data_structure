#define _CRT_SECURE_NO_WARNINGS 1

//������1:�ö���ʵ��ջ(225����)
//����һ�������ݣ�һ��Ϊ��
//�������벻Ϊ�յĶ���
//������ͨ���յĵ�һ��
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
    //�Ѳ�Ϊ�յ�ջ��ǰsize-1�����ݵ��ߣ�ɾ�����һ������ջ������
    //���跨
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

//������2����ջʵ�ֶ��У�232���ۣ�
/*
typedef struct {
    ST pushst;
    ST popst;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    STInit(&(obj->pushst));
    STInit(&(obj->popst));
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    STPush(&(obj->pushst),x);
}

int myQueuePeek(MyQueue* obj) {
    if(STEmpty(&(obj->popst)))
    {
        //������
        while(!STEmpty(&(obj->pushst)))
        {
            int top = STTop(&(obj->pushst));
            STPush(&(obj->popst),top);
            STPop(&(obj->pushst));
        }
    }
    return STTop(&(obj->popst));
}

int myQueuePop(MyQueue* obj) {
    int front = myQueuePeek(obj);
    STPop(&(obj->popst));
    return front;
}

bool myQueueEmpty(MyQueue* obj) {
    return STEmpty(&(obj->pushst)) && STEmpty(&(obj->popst));
}

void myQueueFree(MyQueue* obj) {
    STDestroy(&(obj->popst));
    STDestroy(&(obj->pushst));
    free(obj);
}
*/

//������3�����ѭ�����У�622���ۣ�
//����ⷨ:
/*
typedef struct {
    int* a;
    int head;//ָ��ͷ
    int tail;//ָ��β��һ��
    int k;

} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));

    //�࿪һ��������������
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
