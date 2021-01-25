/*#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
double div(int, int);


int main(void)
{
	int i, m, n;


	while (1)
	{
		printf("1.더하기 2.빼기 3.곱하기 4.나누기 5.종료\n선택 : ");
		scanf_s("%d", &i);

		printf("\n");

		switch (i)
		{
		case 1:
			printf("정수 입력1: ");
			scanf_s("%d", &m);
			printf("정수 입력2: ");
			scanf_s("%d", &n);
			printf("%d + %d = %d\n", m, n, add(m, n));
			printf("\n");
			break;

		case 2:
			printf("정수 입력1: ");
			scanf_s("%d", &m);
			printf("정수 입력2: ");
			scanf_s("%d", &n);
			printf("%d - %d = %d\n", m, n, sub(m, n));
			printf("\n");
			break;

		case 3:
			printf("정수 입력1: ");
			scanf_s("%d", &m);
			printf("정수 입력2: ");
			scanf_s("%d", &n);
			printf("%d × %d = %d\n", m, n, mul(m, n));
			printf("\n");
			break;

		case 4:
			printf("정수 입력1: ");
			scanf_s("%d", &m);
			printf("정수 입력2: ");
			scanf_s("%d", &n);
			printf("%d ÷ %d = %lf\n", m, n, div(m, n));
			printf("\n");
			break;
			
		case 5:
			exit(0);
			break;


		}
	}
	return 0;
}

int add(int m, int n)
{
	return m + n;
}

int sub(int m, int n)
{
	return m - n;
}

int mul(int m, int n)
{
	return m * n;
}

double div(int m, int n)
{
	return m / n;
}


int simplefuncone(void)

{
	int num = 10;
	num++;
	printf("simplefuncone num: %d \n", num);
	return 0;
}

int simplefunctwo(void)

{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2: %d %d \n ", num1, num2);
	return 0;
}

int main(void)

{
	int num = 17;
	simplefuncone();
	simplefunctwo();
	printf("min num: %d \n ", num);
	return 0;
}



int main(void)
{
	int cnt;
	for (cnt = 0; cnt < 4; cnt++)
	{
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num);

	}
	if (cnt == 4)
	{
		int num = 7;
		num++;
		printf("if문 내에 존재하는 지역변수 num은 %d \n", num);
	}
	return 0;
}



int main(void)
{
	int num = 1;

	if (num == 1)
	{
		int num = 7;
		num += 10;
		printf("if문 내 지역변수 num: %d \n", num);

	}
	printf("main 함수 내 지역변수 num: %d \n", num);
	return 0;

}


void add(int val);
int num;

int main(void)
{
	printf("num:; %d \n", num);
	add(3);
	printf("num:; %d \n", num);
	num++;
	printf("num:; %d \n", num);
	return 0;

}

void add(int val)
{
	num += val;
}


void simplefunc(void)
{
	static int num1 = 0;
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		simplefunc();
	return 0;
}

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	printf("1! = %d \n", factorial(1));
	printf("2! = %d \n", factorial(2));
	printf("3! = %d \n", factorial(3));
	printf("4! = %d \n", factorial(4));
	printf("9! = %d \n", factorial(9));
	return 0;
}



//10진수를 16진수로
int main(void)
{
	int num;
	printf("16진수로 변환할 10진수 입력:");
	scanf_s("%d \n", &num);
	printf("10진수 : %d \n", num);
	printf("16진수 : %x \n", num);

	return 0;
}


//구구단 3~5조건
void dan(int a,int b)
{
	int i;
	while (a <= b)
	{
		printf("%d단\n", a);
		for (i = 1; i <= 9; i++)
		{
			printf("%d*%d=%d\n", a, i, a * i);
		}
		a++;
	}
}

int main(void)
{
	int a, b;
	printf("서로 다른 두개의 정수 입력 : ");
	scanf_s("%d %d", &a, &b);
	if (a < b)
		dan(a, b);
	else
		dan(b, a);

	return 0;
}

//최대 공약수 프로그램
int GCD(int n1, int n2)
{
	int t = 0;
	int r = 0;

	if (n1 > n2)
	{
		t = n1;
		n1 = n2;
		n2 = t;
	}
	do
	{
		r = n2 % n1;
		n2 = n1;
		n1 = r;
	} while (r);

	return n2;
}

int main()
{
	int n1, n2;
	printf("두 개의 정수 입력:");
	scanf_s("%d %d", &n1, &n2);
	printf("두 수의 최대공약수:%d\n", GCD(n2, n1));

	return 0;
}

//경우의 수 구하기

int main(void)
{
	int cash;
	int b = 500, s = 700, c = 400;

	printf("소유한 금액 : ");
	scanf_s("%d", &cash);

	for (int i = 1; i < cash / b; i++)
	{
		for (int j = 1; j < cash / s; j++)
		{
			for (int k = 1; k < cash / c; k++)
			{
				if (cash == b * i + s * j + c * k)
				{
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i, j, k);
				}
			}
		}
	}
	return 0;
}


//10개의 소수출력
int PN(int);

int main(void)
{
	int i = 2, c = 0;
	while (c != 10)
	{
		if (PN(i) == 1)
		{
			printf("%d ", i);
			c++;
		}
		i++;
	}
	printf("\n");
	return 0;
}

int PN(int n)
{
	int d = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			d++;
	}
	if (d == 2)
		return 1;

	return 0;
}

//시간 출력

int main(void)
{
	int sec, h, m, s;
	printf("초(s) 입력: ");
	scanf_s("%d", &sec);
	h = sec / 3600;
	m = (sec % 3600) / 60;
	s = sec % 60;
	printf("h : %d, m : %d, s : %d\n", h, m, s);
	return 0;
}


int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1len, ar2len, ar3len, i;

	printf("배열 arr1의 크기 : %d \n", sizeof(arr1));
	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));

	ar1len = sizeof(arr1) / sizeof(int);
	ar2len = sizeof(arr2) / sizeof(int);
	ar3len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1len; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for (i = 0; i < ar2len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (i = 0; i < ar3len; i++)
		printf("%d ", arr3[i]);
	printf("\n");
	return 0;
}

int main(void)
{
	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	for (i = 1; i < 5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("최댓값 : %d \n", max);
	printf("최솟값 : %d \n", min);
	printf("총 합 : %d \n", sum);
	return 0;

}




int total(int k, int e, int m, int s, int g);
double ave(int tot);
void print_title(void);

int main(void)
{
	int k, e, m, s, g;
	int tot;
	int im;
	double res;

	printf("다섯 과목의 점수 입력 : ");
	scanf_s("%d%d%d%d%d", &k, &e, &m, &s, &g);
	print_title();
	printf("국어 영어 수학 사회 과학 총점 평균\n");
	tot = total(k, e, m, s, g);
	res = ave(tot);
	printf("%3d%5d%5d%5d%5d%6d %5.1lf\n", k, e, m, s, g, tot, res);

	return 0;
}

int total(int k, int e, int m, int s, int g)
{
	int temp;
	temp = k + e + m + s + g;
	return temp;
}

double ave(int tot)
{
	double temp;
	temp = (double)tot / 5;
	return temp;
}

void print_title(void)
{
	int i;
	for (i = 0; i < 30; i++)
	{
		printf("-");
	}
	printf("\n");
}


int main(void)
{
int score[4][5];
int i, j;
int tot;
double avg;

for (i = 0; i < 4; i++)
{
	printf("국,영,수,사,과 점수를 순서대로 입력하세요  ");
	for (j = 0; j < 5; j++)
	{
		scanf_s("%d", &score[i][j]);
	}
}

for (i = 0; i < 4; i++)
{
	for (j = 0; j < 5; j++)
	{
		printf("%3d\t", score[i][j]);
	}
	printf("\n");
}
printf("\n\n");

for (i = 0; i < 4; i++)
{

	double avg = (score[i][0] + score[i][1] + score[i][2] + score[i][3] + score[i][4]) / 5;

	int tot = score[i][0] + score[i][1] + score[i][2] + score[i][3] + score[i][4];

	printf("학생 %d 의평균 = %2.2f, 총점 = %d\n", i + 1, avg, tot);

}

return 0;
}*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int bubble(int lotto[], int num) {	//오름차순 정렬함수
	int temp, i, j;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (lotto[j] > lotto[j + 1])
			{
				temp = lotto[j];
				lotto[j] = lotto[j + 1];
				lotto[j + 1] = temp;
			}
		}
	}
}
int main() {

	int arr[45];
	int lastnum[6], adnum[12]; //전회차 당첨번호, 인젒값
	int lotto[6];	//이번주 예상번호
	int i, evencnt = 0, oddcnt = 0;
	int rannum, token = 0;
	srand(time(NULL));

	for (i = 0; i < 45; i++)
		arr[i] = i + 1;

	lotto[0] = 12;	//고정번호 :최다빈출
	arr[11] = 0;

	for (i = 0; i < 6; i++) {
		scanf("%d", &lastnum[i]);	//전회차 번호입력(오름차순으로 입력)

		if (lastnum[i] == 1) {
			adnum[i * 2] = 0;
			adnum[i * 2 + 1] = 2;
		}

		else if (lastnum[i] == 45) {
			adnum[i * 2] = 44;
			adnum[i * 2 + 1] = 0;
		}

		else {
			adnum[i * 2] = lastnum[i] - 1;	//인접값 구하기		//중복해결????? (고정값과 같거나 전회차 번호와 같은 경우)
			adnum[i * 2 + 1] = lastnum[i] + 1;
		}
		arr[lastnum[i] - 1] = 0;	//전회차 번호제외
	}

	for (i = 0; i < 12; i++)
		printf("%d\t", adnum[i]);
	printf("\n");

	do {
		lotto[1] = adnum[rand() % 12]; //인접값 중 랜덤 선택
		lotto[2] = adnum[rand() % 12];	//중복 제거
	} while (lotto[1] == 0 || lotto[2] == 0 || lotto[1] == lotto[2]);

	for (i = 0; i < 12; i++) {
		if (adnum[i] != 0)
			arr[adnum[i] - 1] = 0;
	}								//인접값 제외

	for (i = 0; i < 45; i++)
		printf(" %d\t", arr[i]);	//남은 수
	printf("\n");


	for (i = 0; i < 3; i++) {
		if (lotto[i] % 2 == 0)
			evencnt++;
		else
			oddcnt++;
	}

	while (token != 3) {

		for (i = 3; i < 6;) {	//홀짝비율 맞추기 3:3

			rannum = rand() % 45;

			if (arr[rannum] != 0 && arr[rannum] != lotto[i - 1]) {	//중복제거

				if (arr[rannum] % 2 == 0 && evencnt < 3) {
					lotto[i] = arr[rannum];
					evencnt++;
					i++;
				}
				else if (arr[rannum] % 2 == 1 && oddcnt < 3) {
					lotto[i] = arr[rannum];
					oddcnt++;
					i++;
				}
			}
		}

		bubble(lotto, i - 1);	//오름차순 정렬

		for (i = 3; i < 6; i++) {
			if (lotto[i - 1] + 1 != lotto[i] || lotto[i] != lotto[i + 1] - 1)	//3번 이상 연속된 수 제거
				token++;
		}

	}

	printf("이번주 예상번호\n");
	for (i = 0; i < 6; i++)
		printf("%d\t", lotto[i]);

	return 0;
}