#include "tests.h"

void	test_ft_isdigit(void)
{
	printf("--> Testing ft_isdigit... ");
	if(ft_isdigit('0') == 1 &&
		ft_isdigit('9') == 1 &&
		ft_isdigit('a') == 0 &&
		ft_isdigit('!') == 0)
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
