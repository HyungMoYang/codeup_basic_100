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
	// %�� ���� ������(format specifier) ���� %�� ����Ϸ��� %%
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

	scanf("%f", &a); // ��
	printf("%.2f", a);
}

void f_1017(void) {
	int x;

	scanf("%d", &x); // ��
	printf("%d %d %d", x, x, x);
}

void f_1018(void) {
	int h, m;

	scanf("%d:%d", &h, &m); // ��
	printf("%d:%d", h, m);
	/*
	� ���Ŀ� ���߾� �ð��� �Էµ� ��, �״�� ����ϴ� ������ �غ���.

	����
	scanf( ) �Լ��� ������ ����(format)�� ���� �Է¹޴� �Լ��̴�.
	����, �Է¹ް��� �ϴ� �������� ǥ�����ָ� �ȴ�.

	����
	scanf("%d:%d", &h, &m); //�ݷ�(:) ��ȣ�� �������� �� ���� �� ������ ����ȴ�.
*/
}

void f_1019(void) {
	int y, m, d;

	scanf("%d.%d.%d", &y, &m, &d); // ��
	printf("%04d.%02d.%02d", y, m, d);
	/*
	�Է¹��� ��, ��, ���� yyyy.mm.dd �������� ����Ѵ�.
	(%02d�� ����ϸ� 2ĭ�� ����� ����ϴµ�,
	�� �ڸ� ���� ��� �տ� 0�� �ٿ� ����Ѵ�.)
	*/
}

void f_1020(void) {
	int x, y;
	scanf("%d-%d", &x, &y);
	printf("%06d%07d", x, y);

	/*format�� �°� ����ϱ� -> ���ڸ��� 0���� �����ϴ� ��� */
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
	������ ��������
	Ű���� �Է��� ���ؼ� #include <stdio.h> �߰��߾���� 
	*/
}

int main(void) {



	return 0;
}