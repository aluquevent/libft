#include "tests.h"

void	test_ft_memchr(void)
{
	printf("--> Testing ft_memchr... ");
	
	char	*s = "0123b56789";
	char	*result;
	
	result = ft_memchr(s, 'b', 10);
	if (ft_strncmp(result, "b56789", ft_strlen(result)) == 0)
	{
		printf("✅\n");
	}
	else
	{
		printf("❌\n");
	}
}
