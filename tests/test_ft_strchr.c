#include "tests.h"

void	test_ft_strchr(void)
{
	char	*s1 = "abcdef";
	int		c = 'b';
	int		n = '\0';
	char	*s2;
	char	*s3 = "";
	char	*s4 = "xyz";
	
	printf("--> Testing ft_strchr...\n");
	s2 = ft_strchr(s1, c);
	if (s2 != NULL && ft_strncmp(s2, "bcdef", 5) == 0)
	{
		printf("	Test 1 ✅\n");
		printf("	String:%s\n", s1);
		printf("	Char:%c | Result: %s\n", (char)c, s2);
	}
	else {
		printf("	Test 1 ❌ \n");
		printf("	String:%s\n", s1);
		printf("	Char:%c | Result: %s\n", (char)c, s2);
	}
	s2 = ft_strchr(s3, n);
	if (s2 != NULL && ft_strncmp(s2, "", 1) == 0)
	{
		printf("	Test 2 ✅\n");
		printf("	String:%s\n", s3);
		printf("	Char:%c | Result: %s\n", (char)n, s2);
	}
	else {
		printf("	Test 2 ❌ \n");
		printf("	String:%s\n", s3);
		printf("	Char:%c | Result: %s\n", (char)n, s2);
	}
	s2 = ft_strchr(s4, c);
	if (s2 == NULL)
	{
		printf("	Test 3 ✅\n");
		printf("	String:%s\n", s4);
		printf("	Char:%c | Result: %s\n", (char)c, s2);
	}
	else {
		printf("	Test 3 ❌ \n");
		printf("	String:%s\n", s4);
		printf("	Char:%c | Result: %s\n", (char)c, s2);
	}
}
