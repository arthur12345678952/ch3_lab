#include<stdio.h>
#include<stdlib.h>

int Odd(int u);
int Even(int u);
int TotalSum(int u);

int main(void)
{
	int n, sum;
	char choice;
	printf("1+2+....+n=? �п�Jn=");
	scanf_s("%d", &n);
	getchar();
	printf("�аݭn���_�ƩM(O)����(E)�٬O��ƩM(I)?�п��:");
	scanf_s("%c", &choice);

	switch (choice)
	{
	case 'O':
		sum = Odd(n);
		break;
	case 'E':
		sum = Even(n);
		break;
	case 'I':
		sum = TotalSum(n);
		break;
	defualt:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n", sum);
	system("pause");
	return 0;
}

int Odd(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
	    if(i%2 == 1)
			total+=i;
	return total;
}

int Even(int u)
{
	int i, total=0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 0)
			total += i;
	return total;
}

int TotalSum(int u)
{
	return Odd(u) + Even(u);
}