#include "tests.h"

void	test_ft_strlcpy(void)
{
	printf("--> Testing ft_strlcpy... ");
	char	dst[10];
	size_t	len = ft_strlcpy(dst, "Hello, World!", sizeof(dst));
	if(ft_strncmp(dst, "Hello, Wo", 10) == 0 && len == 13)
	{
		printf("✅\n");
	}
	else 
	{
		printf("❌\n");
	}
}
