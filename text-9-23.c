#define  _CRT_SECURE_NO_WARNINGS 1
//交换两个数组的内容
#include <stdio.h>
//int main()
//{
//	int arr1[] = { 0, 1, 2, 3, 4, 5 };
//	int arr2[] = { 3, 4, 5, 6, 7, 8, };
//	int arr3[6] = {0};
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 6; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//
//	for (j = 0; j < 6; j++)
//	{
//		arr1[j] = arr2[j];
//		printf("arr1[]=%d ", arr1[j]);
//	}
//	for (k = 0; k < 6; k++)
//			{
//				arr2[k] = arr3[k];
//				printf("arr2[]=%d ", arr2[k]);
//			}
//
//	return 0;
//}

//计算1/1-1/2+1/3……+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int k = 1;
//	int sum1= 0;
//	int sum2 = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	int sum = sum1+sum2;
//	for (i = 0; i <= 100; i+2)
//	{
//		j/i == -ret1;
//		sum1 += ret1;
//	}
//	for (k = -1; k <= 99; k + 2)
//	{
//		j / k == ret2;
//		sum2 += ret2;
//	}
//	printf("sum=%d\n ",sum );
//	return 0;
//}
int main()
{
	int i = 0;
	int j = 1;
	int k = 1;
	int sum1 = 0;
	int sum2 = 0;
	int ret1 = 0;
	int ret2 = 0;
	int sum = sum1 + sum2;
	for (i = 0; i <= 100; i + 2)
	{
		j / i == -ret1;
		sum1+=ret1;
	}
	for (k = -1; k <= 99; k + 2)
	{
		j / k == ret2;
		sum2+=ret2;
	}
	printf("sum1=%d\n ", sum1);
	return 0;
}