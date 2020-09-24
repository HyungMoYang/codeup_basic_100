#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long int a;

	scanf("%lld", &a);
	printf("%lld", a + 1);

	return 0;
}







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

void f_1023(void) {
	int x, y; // �Ǽ��� ������, �Ǽ���

	scanf("%d.%d", &x, &y);
	printf("%d\n%d", x, y);
}

void f_1024(void) {
	int i; // for 
	char input_string[21];

	scanf("%s", input_string);
	for (i = 0; input_string[i] != '\0'; i++) {
		printf("\'%c\'\n", input_string[i]);
	}
}

void f_1025(void) {
	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d]\n", a * 10000);
	printf("[%d]\n", b * 1000);
	printf("[%d]\n", c * 100);
	printf("[%d]\n", d * 10);
	printf("[%d]\n", e);
}

void f_1026(void) {
	int h, m, s;

	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d", m);
}

void f_1027(void) {
	int y, m, d;

	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);

	return 0;
}

void f_1028(void) {
	unsigned int x; // unsigned int ���������� ����ϸ� 0 ~ 4294967295 ������ ������ ������ �� �ִ�.

	scanf("%u", &x);
	printf("%u", x);
}
 
void f_1029(void) {
	double d;

	scanf("%lf", &d); // f: float lf: long float->double
	printf("%.11lf", d); // %.11lf �Ҽ��� ���� 11�ڸ����� ���
}

void f_1030(void) {
	long long int n;

	scanf("%lld", &n);
	printf("%lld", n);
}

void f_1031(void) {
	int x;

	scanf("%d", &x);
	printf("%o", x); // %o: 8������ ���
}

void f_1032(void) {
	int x;

	scanf("%d", &x);
	printf("%x", x); // 16���� ���: x
}

void f_1033(void) {
	int x;

	scanf("%d", &x);
	printf("%X", x); // 16���� ���: x
}

void f_1034(void) {
	int number;

	scanf("%o", &number);
	printf("%d", number);
}

void f_1035(void) {
	int number;

	scanf("%x", &number);
	printf("%o", number);
}

void f_1036(void) {
	char ascii;

	scanf("%c", &ascii);
	printf("%d", ascii);
}

void f_1037(void) {
	int ascii;

	scanf("%d", &ascii);
	printf("%c", ascii);
}

void f_1038(void) {
	long long int a, b;

	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);
}

void f_1039(void) {
	long long int a, b;

	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);
}

void f_1040(void) {
	int a;

	scanf("%d", &a);
	printf("%d", -a);
}

void f_1041(void) {
	char ascii;

	scanf("%c", &ascii);
	printf("%c", ascii + 1);
}

void f_1042(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a % b);
}