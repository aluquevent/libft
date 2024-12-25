#include "tests.h"

void	test_ft_bzero(void)
{
	printf("--> Testing ft_bzero... ");
	char	buffer[10] = "123456789";
	
	ft_bzero(buffer, 5);
	if (buffer[0] == '\0' && buffer[4] == '\0' && buffer[5] == '6')
	{
		printf("✅\n");
	}
	else
	{
		printf("❌\n");
	}
}
