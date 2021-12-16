#include <stdio.h>

int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);//3 --011
	//统计num中补码有几个1
	//00000000000000000000000000000011
	//00000000000000000000000000000001
	//00000000000000000000000000000001
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	/*while (num)//负数会出错
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num /= 2;
	}*/
	printf("%d\n", count);

	return 0;
}