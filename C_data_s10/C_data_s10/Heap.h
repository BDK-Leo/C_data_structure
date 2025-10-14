#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//Ð¡¶Ñ

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void HPInit(HP* php);

void HPDestroy(HP* php);

void HPPush(HP* php, HPDataType x);

void HPPop(HP* php);