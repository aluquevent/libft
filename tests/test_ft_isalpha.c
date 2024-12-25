#include "tests.h"

void	test_ft_isalpha()
{
	printf("--> Testing ft_isalpha... ");
	if (ft_isalpha('A') == 1 && 
		ft_isalpha('z') == 1 &&
		ft_isalpha('1') == 0 &&
		ft_isalpha('!') == 0 &&
		ft_isalpha('@') == 0)
	{
		printf("✅\n");
	}
	else
	{
		printf("❌\n");
	}
}
