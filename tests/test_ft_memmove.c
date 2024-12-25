#include "tests.h"

void	test_ft_memmove(void)
{
	printf("--> Testing ft_memmove... ");
	char	buffer[] = "12345";
	
	ft_memmove(buffer + 2, buffer, 3);
	if (ft_strncmp(buffer, "12123", 5) == 0)
	{
		printf("✅\n");
	}
	else
	{
		printf("❌\n");
	}
}
