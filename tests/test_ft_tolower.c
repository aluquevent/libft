#include "tests.h"

void	test_ft_tolower(void)
{
	printf("--> Testing ft_tolower... ");
	if(ft_tolower('0') == '0' &&
		ft_tolower('A') == 'a' &&
		ft_tolower('a') == 'a')
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
