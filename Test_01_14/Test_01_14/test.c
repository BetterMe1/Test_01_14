/*
date：2019/01/14
author:BetterMe1
program:喝汽水问题、模拟实现strcpy、模拟实现strcat
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*
1.一个数组中只有两个数字是出现一次，
其他所有数字都出现了两次。
找出这两个数字，编程实现。
*/
/*分析:遍历数组中的所有数，如没有与它相同的数，便输出。
*/
//void find_one(int arr[],int len){
//	for(int i = 0; i < len; i++){
//		int flag = 1;//标记
//		for (int j = 0; j < len; j++){
//			if (i != j && arr[i] == arr[j]){//找到与之相同的数字，不需要再向下遍历
//				flag = 0;
//				continue;
//			}
//		}
//		if (flag){//没有与之相同的数字
//			printf("只出现一次的数字：%d\n", arr[i]);
//		}
//
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	find_one(arr, len);
//    system("pause");
//	return 0;
//}
/*
2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
给20元，可以有多少汽水。
编程实现。
*/
/*
分析：先用所有的钱买汽水，再用喝完的空瓶子换汽水，得到的汽水喝完的空瓶子再去换汽水，由此构成一个循环，当喝剩的空瓶子不足两个时停止循环
*/

//int drink(int price,int empty_bottle,int money){
//	/*先用所有的钱买汽水*/
//	int have_drink = money / price;//买的汽水
//	int count = have_drink;//计数器
//	int exchange_drink = 0;//初始化
//	while (have_drink > 1){
//		exchange_drink = have_drink / 2;//空瓶子换来的汽水
//		count = count + exchange_drink;
//		have_drink = exchange_drink;
//	}
//	return count;
//}
//int main(){
//	int price = 0;
//	int empty_bottle = 0;
//	int money = 0;
//	printf("请输入汽水单价：");
//	scanf("%d", &price);
//	printf("请输入换1瓶汽水的空瓶数目：");
//	scanf("%d", &empty_bottle);
//	printf("请输入钱数：");
//	scanf("%d", &money);
//	printf("可有%d瓶汽水。\n", drink(price, empty_bottle, money));
//	system("pause");
//	return 0;
//}

/*
3.模拟实现strcpy
*/

/*分析：这里下说明一下strcpy这个函数。
strcpy函数用来拷贝字符串，拷贝时包括'\0',且要保证目标字符串的长度足够长，可以放得下源字符串*/
//char* my_strcpy(char * destination, const char * source){
//	int i = 0;
//	while(source[i] != '\0'){
//		destination[i] = source[i];
//		i++;
//	}
//	destination[i] = '\0';
//	return destination;
//}
//int main(){
//	char arr1[100] = "You are so";
//  printf("arr1:%s\n", arr1);
//	char arr2[] = "lovely";
//  printf("arr2:%s\n", arr2);
//	my_strcpy(arr1, arr2);
//	printf("拷贝后的arr1：%s\n", arr1);
//	system("pause");
//	return 0;
//}
/*
4.模拟实现strcat
*/
/*
分析：strcat用来连接字符串，将源字符串加到目标字符串的后面，目标字符串原先的'\0'成为源字符串的第一位
*/
char* my_strcat(char * destination, const char * source){
	int i = 0;
	for (; destination[i] != '\0'; i++);
	for (int j = 0; source[j] != '\0'; j++){
		destination[i] = source[j];
		i++;
	}
	destination[i] = '\0';
	return destination;
}
int main(){
	char arr1[100] = "You are so";
	printf("arr1:%s\n", arr1);
	char arr2[] = " lovely";
	printf("arr2:%s\n", arr2);
	my_strcat(arr1, arr2);
	printf("连接后的arr1：%s\n", arr1);
	system("pause");
	return 0;
}