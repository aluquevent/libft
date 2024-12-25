#include "tests.h"

void	test_ft_isascii(void)
{
	printf("--> Testing ft_isascii... ");
	if(ft_isascii(0) == 1 &&
		ft_isascii(65) == 1 &&
		ft_isascii(127) == 1 &&
		ft_isascii(128) == 0)
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
