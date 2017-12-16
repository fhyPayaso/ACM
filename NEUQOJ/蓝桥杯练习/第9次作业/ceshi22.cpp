#include <stdio.h>
#include <string.h>
char s[1000];
int min = 0, num = 0;
void fcode(int left, int right, int num)
{
	if (left >= right)
	{
		min = min < num ? min : num;
	}
	else
	{
		if (s[left] == s[right])
		{
			fcode(left + 1, right - 1, num);
		}
		else
		{
			fcode(left + 1, right, num + 1);
			fcode(left, right - 1, num + 1);
		}
	}
	return ;
}
int main(int argc, const char * argv[])
{
	scanf("%s", s);
	min = (int)strlen(s);
	//´¦ÀíÃÜÂë
	fcode(0, min - 1, 0);
	printf("%d\n", min);
	return 0;
}

