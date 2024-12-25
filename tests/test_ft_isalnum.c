#include "tests.h"

void	test_ft_isalnum(void)
{
	printf("--> Testing ft_isalnum... ");
	if(ft_isalnum('0') == 1 &&
		ft_isalnum('!') == 0 &&
		ft_isalnum('A') == 1 &&
		ft_isalnum('#') == 0 &&
		ft_isalnum('z') == 1)
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
