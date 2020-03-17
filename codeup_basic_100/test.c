#include <stdio.h>

void f_1001(void) {
	printf("Hello");
}

void f_1002(void) {
	printf("Hello World");
}

void f_1003(void) {
	printf("Hello\nWorld");
}

void f_1004(void) {
	printf("\'Hello\'");
}

void f_1005(void) {
	printf("\"Hello World\"");
}

void f_1006(void) {
	// %는 형식 지정자(format specifier) 따라서 %를 출력하려면 %%
	printf("\"!@#$%%^&*()\"");
}

void f_1007(void) {
	printf("\"C:\\Download\\hello.cpp\"");
}

void f_1008(void) {
	printf("\u250C\u252C\u2510\n");
	printf("\u251C\u253C\u2524\n");
	printf("\u2514\u2534\u2518\n");
}

void f_1010(void) {
	int input;

	scanf("%d", &input);
	printf("%d", input);
}

void f_1011(void) {
	char input;

	scanf("%c", &input);
	printf("%c", input);
}

void f_1012(void) {
	float input;

	scanf("%f", &input);
	printf("%f", input);
}

void f_1013(void) {
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d %d", a, b);
}

void f_1014(void) {
	char x, y;

	scanf("%c %c", &x, &y);
	printf("%c %c", y, x);
}

void f_1015(void) {
	float a;

	scanf("%f", &a); // 실
	printf("%.2f", a);
}


int main(void) {
	//f_1001();
	//f_1002();
	//f_1003();
	//f_1004();
	//f_1005();
	//f_1006();
	//f_1007();
	//f_1008();
	return 0;
}