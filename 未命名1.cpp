#include<stdio.h>
#include<windows.h>

int main(void)
{
	system("mode con cols=30 lines=20");
	printf("*");
	for (int i=1;i<=28;i++)
	{
		printf("\b *");
		Sleep(50);
	}
	for (int i=1;i<=29;i--)
	{
		printf("\b\b* ");
		Sleep(50);
		printf("\b");
	}
	return 0;
}
