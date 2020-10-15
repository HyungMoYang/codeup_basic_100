#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float num;
	
	scanf("%f", &num);
	if (num >= 50 && num <= 60)
		printf("win");
	else
		printf("lose");
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
	printf("%d", a / b);
}

void f_1043(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a % b);
}

void f_1044(void) {
	long long int a;

	scanf("%lld", &a);
	printf("%lld", a + 1);
}

void f_1045(void) {
	unsigned int a, b;

	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f\n", (float)a / b);
}

void f_1046(void) {
	long long int a, b, c;

	scanf("%lld %lld %lld", &a, &b, &c); // ����� ���Ŀ� ������ ����
	printf("%lld\n", a + b + c);
	printf("%.1f\n", (float)((a + b + c) / 3.0));
}

void f_1047(void) {
	int a;

	scanf("%d", &a);
	printf("%d", a << 1);
}

void f_1048(void) {
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%d", x << y);
}

void f_1049(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a > b ? 1 : 0);
}

void f_1050(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a == b ? 1 : 0);
}

void f_1051(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a <= b ? 1 : 0);
}

void f_1052(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a != b ? 1 : 0);
}

void f_1053(void) {
	int a;

	scanf("%d", &a);
	printf("%d", !a);
}

void f_1054(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a && b);
}

void f_1055(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a || b);
}

void f_1056(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", (a && !b) || (!a && b)); // XOR(exclusive or)
}

void f_1057(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", (a && b) || (!a && !b));
}

void f_1058(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", !(a || b) && (!a && !b));
}

void f_1059(void) {
	int a;

	scanf("%d", &a);
	printf("%d", ~a);
}

void f_1060(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a & b);
}

void f_1061(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a | b);
}

void f_1062(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a ^ b);
}

// ���� ���� ����
void f_1063(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a > b ? a : b);
}

void f_1064(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a < b ? a : b) < c ? (a < b ? a : b) : c);
}

// [����-���Ǻб�/���ý��౸��]
void f_1065(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0)
		printf("%d\n", a);
	if (b % 2 == 0)
		printf("%d\n", b);
	if (c % 2 == 0)
		printf("%d\n", c);
}

void f_1066(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0)
		printf("%s\n", "even");
	else
		printf("%s\n", "odd");
	if (b % 2 == 0)
		printf("%s\n", "even");
	else
		printf("%s\n", "odd");
	if (c % 2 == 0)
		printf("%s\n", "even");
	else
		printf("%s\n", "odd");
}

void f_1067(void) {
	int a;

	scanf("%d", &a);

	if (a > 0) {
		printf("%s\n", "plus");

		if (a % 2 == 0)
			printf("%s\n", "even");
		else
			printf("%s\n", "odd");
	}
	else {
		printf("%s\n", "minus");

		if (a % 2 == 0)
			printf("%s\n", "even");
		else
			printf("%s\n", "odd");
	}
}

void f_1068(void) {
	int a;

	scanf("%d", &a);

	if (a >= 90) {
		printf("A\n");
	}
	else if (a >= 70) {
		printf("B\n");
	}
	else if (a >= 40) {
		printf("C\n");
	}
	else {
		printf("D\n");
	}
}

void f_1069(void) {
	char a;

	scanf("%c", &a);

	switch (a) {
	case 'A':
		printf("best!!!\n");
		break;
	case 'B':
		printf("good!!\n");
		break;
	case 'C':
		printf("run!\n");
		break;
	case 'D':
		printf("slowly~\n");
		break;
	default:
		printf("what?\n");
	}
}

void f_1070(void) {
	int a;

	scanf("%d", &a);

	switch (a) {
	case 12:
	case 1:
	case 2:
		printf("winter\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall\n");
		break;
	}
}

//[����-�ݺ����౸��]
void f_1071(void) {
	int num;

reload:
	scanf("%d", &num);

	if (num != 0) {
		printf("%d\n", num);
		goto reload;
	}
}

void f_1072(void) {
	int cnt, num;

	scanf("%d", &cnt); // count

reload:
	scanf("%d", &num);
	if (cnt-- != 0) {
		printf("%d\n", num);
		goto reload;
	}
}

void f_1073(void) {
	int num;

	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;
		printf("%d\n", num);
	}
}

void f_1074(void) {
	int num;

	scanf("%d", &num);

	while (num > 0) {
		printf("%d\n", num);
		num--;
	}
}

void f_1075(void) {
	int num;

	scanf("%d", &num);

	while (num > 0) {
		printf("%d\n", num - 1);
		num--;
	}
}

void f_1076(void) {
	char ap, i;

	scanf("%c", &ap);
	for (i = 'a'; i <= ap; i++) {
		printf("%c ", i);
	}
}

void f_1077(void) {
	int i, num;

	scanf("%d", &num);

	for (i = 0; i <= num; i++) {
		printf("%d\n", i);
	}
}

// [����-����]
void f_1078(void) {
	int sum = 0;
	int i, num;

	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d", sum);
}

void f_1079(void) {
	char ap;

	while (1) {
		scanf("%c", &ap);
		if (ap == 'q') {
			printf("q");
			break;
		}
		printf("%c\n", ap);
		getchar();

	}
}

void f_1080(void) {
	int num, sum = 0;
	int i = 1;

	scanf("%d", &num);

	while (1) {
		sum += i;
		if (sum >= num)
			break;
		i++;
	}
	printf("%d", i);
}

void f_1081(void) {
	int i, j;
	int n, m;

	scanf("%d %d", &n, &m);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			printf("%d %d\n", i, j);
		}
	}
}