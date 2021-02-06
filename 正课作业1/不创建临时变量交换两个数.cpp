//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return  0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	int i = 0;
//	for (i = 32; i > 1; i-=2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	int count = 0;
//	while (x)
//	{
//		if (x % 2 == 1)
//		{
//			count++;
//		}
//		x /= 2;
//	}
//	printf("%d\n", count);
//	return  0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		printf("%d ", *p);
//		++p;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	int sum = 0;
//	int temp = 0;
//	scanf("%d %d", &k, &n);
//	for (i = 0; i < n; i++)
//	{
//		temp = temp * 10 + k;
//		sum += temp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i < 9999; i++)
//	{
//		int temp = i;
//		int count = 1;
//		int sum = 0;
//		while (temp / 10)
//		{
//			count++;
//			temp /= 10;
//		}
//
//		temp = i;
//		while (temp)
//		{
//			sum += pow((float)(temp % 10), count);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int i = 0;
//	int k = 0;
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < k - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < k; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (k-1-i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int money = 20;
//	int q = 1;
//	int count = 0;
//	int k = 0;
//	while (money)
//	{
//		money = money - q;
//		count++;
//		k++;
//		
//	}
//	while (count)
//	{
//		count -= 2;
//		k++;
//	}
//	if (count - 2 == 0)
//	{
//		k++;
//	}
//	printf("%d\n", k);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main() {
//	char str[] = "abcdef";
//	int b = my_strlen(str);
//	printf("%d\n", b);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINFGS 1
//#include<stdio.h>
//void my_strcmp(char* str2, const char* str1, const int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		str2[i] = str1[i];
//	}
//}
//int main() {
//	char str1[]  = { "abcdef" };
//	char str2[] = { 0 };
//	int sz = sizeof(str1) / sizeof(str1[0]);
//	my_strcmp(str2,str1,sz);
//	printf("%s\n", str2);
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* left = arr;
//	int* right = arr+sz-1;
//	int k = sz / 2;
//	while (left<right)
//	{
//		if (*right % 2 != 0)
//		{
//			int temp = 0;
//			temp = *left;
//			*left = *right;
//			*right = temp;
//			left++;
//			right--;
//		}
//		else if (*right % 2 == 0)
//		{
//			left++;
//			right--;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//杨辉三角
//#include<stdio.h>
//int main() {
//	int arr[30][30] = { 1 };
//	int i = 0;
//	for (i = 1; i < 30; i++)
//	{
//		
//		arr[i][0] = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//
//	for (i = 0; i < 30; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int murder[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		murder[i] = 1;
//		if (((murder[0] != 0) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] != 1)) == 1)
//		{
//			break;
//		}
//		murder[i] = 0;
//
//	}
//	for (i = 0; i < 4; i++)
//	{
//		if (murder[i] == 1)
//		{
//			printf("%d", murder[i]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int checkData(int* p)
//{
//	int temp[7] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (temp[p[i]])
//		{
//			return 0;
//		}
//		temp[p[i]] = 1;
//	}
//	return 1;
//}
//int main() {
//	int p[5];
//	for (p[0] = 1; p[0] <= 5; p[0]++)
//	{
//		for (p[1] = 1; p[1] <= 5; p[1]++)
//		{
//			for (p[2] = 1; p[2] <= 5; p[2]++)
//			{
//				for (p[3] = 1; p[3] <= 5; p[3]++)
//				{
//					for (p[4] = 1; p[4] <= 5; p[4]++)
//					{
//						if ((p[1] == 2) + (p[0] == 3) ==1 &&
//							(p[1] == 2) + (p[4] == 4) == 1 && 
//							(p[2] == 1) + (p[3] == 2) == 1 && 
//							(p[2] == 5) + (p[3] == 3) == 1 &&
//							(p[4] == 4) + (p[0] == 1) == 1 &&
//							checkData(p)
//							)
//						{
//							for (int i = 0; i < 5; i++)
//							{
//								printf("%d ", p[i]);
//							}
//							putchar('\n');
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int compar(const void* e1, const void* e2)
//{
//	return (char*)e1 - (char*)e2;//具体比哪个具体分析，
//}
//
//void myqsort(void* base, size_t nitems, size_t size, int(*compar)(const void*, const void*))
//{
//	int i, j;
//	char * st = (char*)base;
//	char tmp[16];
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++)
//		{
//			if (compar(st + j*size, st + (j + 1)*size))
//			{
//				memcpy(tmp, st + j*size, size);
//				memcpy(st + j*size, st + (j + 1)*size, size);
//				memcpy(st + (j + 1)*size, tmp, size);
//			}
//		}
//	}
//}
//int main() {
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int compare(const void* e1, const void* e2)
//{
//	return ((*(int*)e1) - (*(int*)e2));
//}
//
//int main() {
//	int arr[] = { 1, 5, 2, 4, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz, sizeof(arr[0]),compare );
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int findRound(const char* src, char * find)
//{
//	char temp[256] = { 0 };
//	strcpy(temp, src);
//	strcat(temp, src);
//	return strstr(temp, find) != NULL;
//}
//	int main() {
//	char src[] = { "abcdef" };
//	char src1[] = { "ab" };
//	int ret = findRound(src, src1);
//	if (ret != NULL)
//	{
//		printf("找得到\n");
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//void leftround(char* src, int time)
//{
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len;
//	for (i = 0; i < time; i++)
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//
//int main()
//{
//	char src[] = { "abcdef" };
//	int time = 0;
//	scanf("%d", &time);
//	leftround(src, time);
//	printf("%s", src);
//	return 0;
//}



#include<stdio.h>

int findnum(int a[][3], int x, int y, int f)
{
	int i = 0, j = x - 1;
	while (i >= 0 && i < y)
	{
		if (a[i][j] < f)
		{
			i++;
		}
		else if (a[i][j] >f)
		{
			j--;
		}
	else
	{
		return 1;
	}
			
	}
	return 0;
}
int main() {
	int a[][3] = { { 1, 3, 5 }, { 3, 5, 7 } ,{5, 7, 9} };
	if (findnum(a,3, 3, 2))
	{
		printf("it  has been found\n");
	}
	else
	{
		printf("it hasn't been found\n");
	}
	return 0;

}