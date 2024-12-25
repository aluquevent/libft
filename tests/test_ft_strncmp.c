#include "tests.h"

void	test_ft_strncmp(void)
{
	printf("--> Testing ft_strncmp... ");
	if(ft_strncmp("abc", "abc", 3) == 0 &&
		ft_strncmp("abc", "abz", 3) < 0 &&
		ft_strncmp("abc", "ab", 2) == 0 &&
		ft_strncmp("abc", "ab", 3) > 0)
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
