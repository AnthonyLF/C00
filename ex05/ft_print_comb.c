#include <unistd.h>

void	ftPutchar(char c)
{
	write (1, &c, 1);
}

void	ftPrint(int a, int b, int c)
{
	ftPutchar(a);
	ftPutchar(b);
	ftPutchar(c);
	ftPutchar(',');
	ftPutchar(' ');
}


void	ftPrintComb(void)
{
	int a = '0';
	int b = '1';
	int c = '2';

	while (a < ('7' + 1))
	{
		while (b < ('8' + 1))
		{
			while (c < ('9' + 1))
			{
				ftPrint( a, b, c);
				c++;
			}
			c = ++b + 1;
		}
		b = ++a ;
	}
}

int main()
{
	ftPrintComb();
	return 0;
}
