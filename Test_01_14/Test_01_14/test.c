/*
date��2019/01/14
author:BetterMe1
program:����ˮ���⡢ģ��ʵ��strcpy��ģ��ʵ��strcat
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*
1.һ��������ֻ�����������ǳ���һ�Σ�
�����������ֶ����������Ρ�
�ҳ����������֣����ʵ�֡�
*/
/*����:���������е�����������û��������ͬ�������������
*/
//void find_one(int arr[],int len){
//	for(int i = 0; i < len; i++){
//		int flag = 1;//���
//		for (int j = 0; j < len; j++){
//			if (i != j && arr[i] == arr[j]){//�ҵ���֮��ͬ�����֣�����Ҫ�����±���
//				flag = 0;
//				continue;
//			}
//		}
//		if (flag){//û����֮��ͬ������
//			printf("ֻ����һ�ε����֣�%d\n", arr[i]);
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
2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
��20Ԫ�������ж�����ˮ��
���ʵ�֡�
*/
/*
�������������е�Ǯ����ˮ�����ú���Ŀ�ƿ�ӻ���ˮ���õ�����ˮ����Ŀ�ƿ����ȥ����ˮ���ɴ˹���һ��ѭ��������ʣ�Ŀ�ƿ�Ӳ�������ʱֹͣѭ��
*/

//int drink(int price,int empty_bottle,int money){
//	/*�������е�Ǯ����ˮ*/
//	int have_drink = money / price;//�����ˮ
//	int count = have_drink;//������
//	int exchange_drink = 0;//��ʼ��
//	while (have_drink > 1){
//		exchange_drink = have_drink / 2;//��ƿ�ӻ�������ˮ
//		count = count + exchange_drink;
//		have_drink = exchange_drink;
//	}
//	return count;
//}
//int main(){
//	int price = 0;
//	int empty_bottle = 0;
//	int money = 0;
//	printf("��������ˮ���ۣ�");
//	scanf("%d", &price);
//	printf("�����뻻1ƿ��ˮ�Ŀ�ƿ��Ŀ��");
//	scanf("%d", &empty_bottle);
//	printf("������Ǯ����");
//	scanf("%d", &money);
//	printf("����%dƿ��ˮ��\n", drink(price, empty_bottle, money));
//	system("pause");
//	return 0;
//}

/*
3.ģ��ʵ��strcpy
*/

/*������������˵��һ��strcpy���������
strcpy�������������ַ���������ʱ����'\0',��Ҫ��֤Ŀ���ַ����ĳ����㹻�������Էŵ���Դ�ַ���*/
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
//	printf("�������arr1��%s\n", arr1);
//	system("pause");
//	return 0;
//}
/*
4.ģ��ʵ��strcat
*/
/*
������strcat���������ַ�������Դ�ַ����ӵ�Ŀ���ַ����ĺ��棬Ŀ���ַ���ԭ�ȵ�'\0'��ΪԴ�ַ����ĵ�һλ
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
	printf("���Ӻ��arr1��%s\n", arr1);
	system("pause");
	return 0;
}