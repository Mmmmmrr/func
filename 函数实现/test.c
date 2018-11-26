#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int my_strncmp(const char* str1, const char* str2, int count)
{
	while (count--)
	{
		while(*str1 == *str2)
		{
			if (*str1 == '\0')
				return 0;
			str1++;
			str2++;
			
		}
		if (*str1 > *str2)
			return 1;
		else
			return -1;
	}

}
int main()
{
	char *str1 = "abcdef";
	char *str2 = "abcdg";
	printf("%d\n", my_strncmp(str1, str2, 6));
	system("pause");
	return 0;
}





//char* my_strncat(char* dest, const char* src, int count)
//{
//	char* ret = dest;
//	while (count--)
//	{
//		while (*dest != '\0')
//		{
//			dest++;
//		}
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello";
//	printf("%s\n", my_strncat(arr, " bit", 5));
//	system("pause");
//	return 0;
//}


////1.模拟实现strncpy
//char* my_strncpy(char*dest, const char* src, int count)
//{
//	char* ret = dest;
//	while (count--)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	char str[20] = "abcdef";
//	printf("%s\n", my_strncpy(str, "ggg", 3));
//	system("pause");
//	return 0;
//}

//2.模拟实现strncat




//3.模拟实现strncmp




//#include <string.h>
////memmove
//void* my_memmove(void* dest, void* src, int count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count)=*((char*)src+count);
//		}
//	}
//	return ret;      
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    my_memmove(arr+2, arr , 16);
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("len = %d\n",len);	
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}




////memcpy
////void* my_memcpy(void* dest, void* src,int count)
////{
////	void* ret = dest;
////	while (count--)
////	{
////		*(char*)dest = *(char*)src;
////		
////			((char*)dest)++;
////			((char*)src)++;
////	}
////	return ret;
////}
////
////int main()
////{
////	int i = 0;
////	int arr1[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
////	int arr2[9] = { 0 };
////	my_memcpy(arr2, arr1, 16);
////	int len = sizeof(arr2) / sizeof(arr2[0]);
////	for (i = 0; i < len; i++)
////	{
////		printf("%d ", arr2[i]);
////	}
////	system("pause");
////	return 0;
////}


//strcmp
//int my_strcmp(const char* str1,const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 >*str2)
//		return 1;
//	else 
//		return -1;
//}
//int main()
//{
//	char* str1 = "abcdef";
//	char* str2 = "aaa";
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}




////strchr
//char* my_strchr(char* s, int c)
//{
//	char* p = s;
//	while (*p != '\0'&&*p!=c)
//	{
//		p++;
//	}
//	if (*p == c)
//	{
//		return p;
//	}
//	return NULL;
//}
//int main()
//{
//	char s[] = "abcdef";
//	int c = 'e';
//	char *ret=my_strchr(s, c);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}

//strstr
//char* my_strstr(const char*str1, const char*str2)
//{
//	const char *s1 = str1;//abbcdf
//	                      bcd\0
//	const char *s2 = str2;
//	const char *cp = str1;
//	if (*str2 == '\0')
//	{
//		return NULL;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//
//{
//	char *p1 = "abcdabcdefghi";
//	char *p2 = "abcdef";
//	char *ret = my_strstr(p1, p2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "abcdefghi";
//	my_strcpy(arr, "hello");
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

