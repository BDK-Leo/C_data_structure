#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//复杂度

//面试题1:消失的数字(力扣)
//思路1：
//int missingNumber(int* nums,int numsSize)
//{
//	int N = numsSize;
//	int ret = (0 + N) * (N + 1) / 2;
//	for (int i = 0;i < numsSize;i++)
//	{
//		ret -= nums[i];
//	}
//	return ret;
//}

//思路2：异或
//int missingNumber(int* nums, int numsSize)
//{
//	int N = numsSize;
//	int x = 0;
//	for (int i = 0;i < numsSize;++i)
//	{
//		x ^= nums[i];
//	}
//	for (int j = 0;j <= N;++j)
//	{
//		x ^= j;
//	}
//	return x;
//}


//面试题2：轮转数组
//思路1：三步翻转
//void reverse(int* nums, int left, int right)
//{
//    while (left < right)
//    {
//        int tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//void rotate(int* nums, int numsSize, int k) {
//    if (k >= numsSize)
//    {
//        k %= numsSize;
//    }
//    reverse(nums, 0, numsSize - k - 1);
//    reverse(nums, numsSize - k, numsSize - 1);
//    reverse(nums, 0, numsSize - 1);
//}

//思路2：额外数组
//void rotate(int* nums, int numsSize, int k) 
//{
//    int newArr[numsSize];
//    for (int i = 0; i < numsSize; ++i) {
//        newArr[(i + k) % numsSize] = nums[i];
//    }
//    for (int i = 0; i < numsSize; ++i) {
//        nums[i] = newArr[i];
//    }
//}
