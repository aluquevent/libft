#include "tests.h"

void	test_ft_strlen(void)
{
	printf("--> Testing ft_strlen... ");
	if(ft_strlen("Hello") == 5 &&
		ft_strlen("") == 0 &&
		ft_strlen("1234567890") == 10)
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
