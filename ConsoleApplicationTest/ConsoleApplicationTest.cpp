// ConsoleApplicationTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "malloc.h"
int max(int a, int b){
	if (a > b){
		return a;
	}
	else{
		return b;
	}
}

int max(int a, int b, int c){
	if ((a>b) && (a>c)){
		return a;
	}
	else if ((b>a) && (b>c)){
		return b;
	}
	else {
		return c;
	}
}

template <typename S> S max(S array[], int len){
	S imax = array[0];
	for (int i = 1; i < len;i++ ){
		if (imax<array[i]){
			imax = array[i];
		}
	}
	return imax;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int i = 100;
	int j = 0;
	try{
		if (j == 0){
			throw 111;
		}
		printf("%d", i/j);
	}
	catch(char *s){
		printf("zifuchuanyichang\n");
		printf("%s",s);
	}
	catch (...){
		printf("others\n");
	}
	int a[5] = {1,2,3,4,5};
	float fa[5] = { 2.345, 1.34, 4.23, 6.34, 2.22 };
	printf("%d,%d,%d,%.2f", max(1, 2), max(1, 2, 3), max(a, (sizeof(a) / sizeof(int))), max(fa, (sizeof(fa) / sizeof(float))));
	getchar();
	return 0;
}

