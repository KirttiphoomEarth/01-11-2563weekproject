#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char input[100];
	int N;
	int x = 0, y = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%s", &input[i]);

	}
	for (int j = 1; input[j] != '\0'; j++)
	{
		if (input[j] == 83)
		{
			x += 200;
			y += 100;
		}
		else if (input[j] == 73)
		{
			x -= 211;
			y -= 59;
		}
		else if (input[j] == 65)
		{
			y += 420;
		}
		else if (input[j] == 79)
		{
			x += 0;
			y += 0;
		}
	}

	if (y > -2000 and y < 2000 and x > -2000 and x < 2000)
	{
		printf("%d %d", x, y);
	}
	else {
		printf("Im dead");
	}

	return 0;
}