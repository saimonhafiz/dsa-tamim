#include<stdio.h>

int main () {
	//printf("Hello Time Complexity");
	int a = 500;
	//int b = a;
	//int res = (a * (a+1)) / 2;
	int res;
	for (int i = 0; i <= a; i++) {
		for (int i = 0; i <= a; i++) {
			for (int i = 0; i <= a; i++) {
					for (int i = 0; i <= a; i++) {
							res = res + i;}
	}
	}
	}
	printf("%d", res);

	return 0;
}
