#include "tests.h"

void	test_ft_memcpy(void)
{
	printf("--> Testing ft_memcpy... ");
	char	src[] = "Hello";
	char	dst[6] = {0};
	
	ft_memcpy(dst, src, 5);
	if (ft_strncmp(dst, src, 5) == 0)
	{
		printf("✅\n");
	}
	else
	{
		printf("❌\n");
	}
}
