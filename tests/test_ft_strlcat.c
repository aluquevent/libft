#include "tests.h"

void	test_ft_strlcat(void)
{
	char	dst1[20] = "Hello";
	char	dst2[3] = "Hi";
	char	src[9] = ", World!";
	size_t	test1;
	size_t	test2;

	printf("--> Testing ft_strlcat...\n");	
	test1 = ft_strlcat(dst1, src, sizeof(dst1));
	if (test1 == ft_strlen("Hello") + ft_strlen(src))
	{
		printf("	Test 1 (enough space)✅\n");
		printf("	Value: %zu | %s\n", test1, dst1);
	}
	else
	{
		printf("	Test 1 (enough space)❌\n");
		printf("	Value: %zu | %s\n", test1, dst1);
	}
	
	test2 = ft_strlcat(dst2, src, sizeof(dst2));
	if (test2 == ft_strlen("Hi") + ft_strlen(src))
	{
		printf("	Test 2 (not enough space)✅\n");
		printf("	Value: %zu | %s\n", test2, dst2);
	}
	else
	{
		printf("	Test 2 (not enough space)❌\n");
		printf("	Value: %zu | %s\n", test2, dst2);
	}
	char	dst3[1] = "";
	size_t	test3;
	test3 = ft_strlcat(dst3, src, sizeof(dst3));
	if (test3 == ft_strlen("") + ft_strlen(src))
	{
		printf("	Test 3 (null-dst)✅\n");
		printf("	Value: %zu | %s\n", test3, dst3);
	}
	else
	{
		printf("	Test 3 (null-dst)❌\n");
		printf("	Value: %zu | %s\n", test3, dst3);
	}
}
