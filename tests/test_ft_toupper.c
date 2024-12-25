#include "tests.h"

void	test_ft_toupper(void)
{
	printf("--> Testing ft_toupper... ");
	if(ft_toupper('a') == 'A' &&
		ft_toupper('Z') == 'Z' &&
		ft_toupper('1') == '1')
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
