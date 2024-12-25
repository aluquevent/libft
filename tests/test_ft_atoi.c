#include "tests.h"

void	test_ft_atoi(void)
{
	printf("--> Testing ft_atoi... ");
	if(ft_atoi("42") == 42 &&
		ft_atoi("-42") == -42 &&
		ft_atoi("\t123") == 123 &&
		ft_atoi("abc") == 0 &&
		ft_atoi("42abc") == 42)
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
