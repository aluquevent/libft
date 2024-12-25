#include "tests.h"

void	test_ft_memset(void)
{
	printf("--> Testing ft_memset... ");
	char	buffer[10] = {0};
	
	ft_memset(buffer, 'A', 5);
	if (ft_strncmp(buffer, "AAAAA", 5) == 0)
	{
		printf("✅\n");
	}
	else
	{
		printf("❌\n");
	}
}
