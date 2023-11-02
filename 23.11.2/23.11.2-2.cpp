#include<stdib>
#include<stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}
int clac(int a, int b, int (*func)(int, int)) {
	return func(a, b);
}

int main() {

	int a = 6;
	int b = 3;

	printf("%d\n, calc(a,b,add");
}