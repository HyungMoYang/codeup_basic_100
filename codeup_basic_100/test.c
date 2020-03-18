#define _CRT_SECURE_NO_WARNINGS
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

void f_1017(void) {
	int x;

	scanf("%d", &x); // 실
	printf("%d %d %d", x, x, x);
}

void f_1018(void) {
	int h, m;

	scanf("%d:%d", &h, &m); // 실
	printf("%d:%d", h, m);
	/*
	어떤 형식에 맞추어 시간이 입력될 때, 그대로 출력하는 연습을 해보자.

	참고
	scanf( ) 함수는 지정한 형식(format)에 따라 입력받는 함수이다.
	따라서, 입력받고자 하는 형식으로 표현해주면 된다.

	예시
	scanf("%d:%d", &h, &m); //콜론(:) 기호를 기준으로 두 수가 각 변수에 저장된다.
*/
}

void f_1019(void) {
	int y, m, d;

	scanf("%d.%d.%d", &y, &m, &d); // 실
	printf("%04d.%02d.%02d", y, m, d);
	/*
	입력받은 연, 월, 일을 yyyy.mm.dd 형식으로 출력한다.
	(%02d를 사용하면 2칸을 사용해 출력하는데,
	한 자리 수인 경우 앞에 0을 붙여 출력한다.)
	*/
}

void f_1020(void) {
	int x, y;
	scanf("%d-%d", &x, &y);
	printf("%06d%07d", x, y);

	/*format에 맞게 출력하기 -> 앞자리가 0으로 시작하는 경우 */
}

void f_1021(void) {
	char input_data[51] = "";
	scanf("%s", input_data);
	printf("%s", input_data);
}

void f_1022(void) {
	char input_string[2001];
	fgets(input_string, 2000, stdin);
	printf("%s", input_string);

	/*
	컴파일 에러났음
	키보드 입력을 위해서 #include <stdio.h> 추가했어야함 
	*/
}

int main(void) {



	return 0;
}