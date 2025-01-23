#include "tests.h"

void	test_ft_memcmp(void)
{
	printf("--> Testing ft_memcmp...");
	char *s1 = "012345";
	char *s2 = "01234u";

	if (ft_memcmp(s1, s2, 5) == 0)
	{
		printf("✅\n");
	}
	else
	{
		printf("❌\n");
	}
}
