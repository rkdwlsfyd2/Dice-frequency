//주사위 빈도 프로그램
#define _CRT_SECURE_NO_WARNINGS﻿
#include<stdio.h>
#include<stdlib.h>
#define SIZE 6

int main() {
	int dice[SIZE] = { 0 }; // 배열 초기화
	int i;
	for (i = 0;i < 10000;i++) { // 주사위를 만번 굴림
		++dice[rand() % 6]; // 나머지가 최대 5까지 나옴
	}
	printf("값   빈도\n");
	for (i = 0;i < SIZE;i++) {
		printf("%3d   %3d\n", i, dice[i]);
	}
	return 0;
}