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
//		printf("%d", arr1[j]);
//	}
//	printf("\n");
//	for (k = 0; k < 6; k++)
//			{
//				arr2[k] = arr3[k];
//				printf("%d", arr2[k]);
//			}
//
//	return 0;
//}

//计算1/1-1/2+1/3……+1/99-1/100的值

//int main()
//{
//	float sum = 0;
//	float j = 1;
//	for (int i = 2; i < 101; i++)
//	{
//		sum = sum + j;
//		j = (-j) / i;
//	}
//	printf("%f", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//    double  sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
		//法一
		/*if (i % 2 != 0)
		{
            sum += 1.0 / i;
		}
		else
		{
			sum -= 1.0 / i;
		}*/
		//法二
		/* sum += (1.0 / i)*flag;
		 flag = -flag;
   }
	printf("sum=%lf\n", sum);
	return 0;
}*/