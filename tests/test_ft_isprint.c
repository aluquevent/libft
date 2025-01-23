#include "tests.h"

void	test_ft_isprint(void)
{
	printf("--> Testing ft_isprint... ");
	if(ft_isprint('!') &&
		ft_isprint('~') &&
		ft_isprint(' ') &&
		!ft_isprint('\n'))
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
