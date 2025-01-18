/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluque-v <aluque-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:26:51 by aluque-v          #+#    #+#             */
/*   Updated: 2025/01/18 16:38:35 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_ft_strrchr(void)
{
	char	*s1;
	char	*s2 = "abcdef";
	char	*s3 = "aaaaa";
	char	*s4 = "";
	int	c = 'b';
	int	n = '\0';
	int	a = 'a';
	
	printf("--> Testing ft_strrchr...\n");
	s1 = ft_strrchr(s2, c);
	if (s1 != NULL && ft_strncmp(s1, "bcdef", 5) == 0)
	{
		printf("	#Test 1 | OK\n");
		printf("		String: %s\n", s2);
		printf("		Char: %c | Result: %s\n", (char)c, s1);
	}
	else
	{
		printf("	#Test 1 | KO\n");
		printf("		String: %s\n", s2);
		printf("		Char: %c | Result: %s\n", (char)c, s1);
	}
	s1 = ft_strrchr(s3, a);
	if (s1 != NULL && ft_strncmp(s1, "a", 1) == 0)
	{
		printf("	#Test 1 | OK\n");
		printf("		String: %s\n", s3);
		printf("		Char: %c | Result: %s\n", (char)a, s1);
	}
	else
	{
		printf("	#Test 1 | KO\n");
		printf("		String: %s\n", s3);
		printf("		Char: %c | Result: %s\n", (char)a, s1);
	}
	s1 = ft_strrchr(s4, c);
	if (s1 != NULL && ft_strncmp(s1, "", 1) == 0)
	{
		printf("	#Test 1 | OK\n");
		printf("		String: %s\n", s4);
		printf("		Char: %c | Result: %s\n", (char)n, s1);
	}
	else
	{
		printf("	#Test 1 | KO\n");
		printf("		String: %s\n", s4);
		printf("		Char: %c | Result: %s\n", (char)n, s1);
	}
	s1 = ft_strrchr(s3, c);
	if (s1 == NULL)
	{
		printf("	#Test 1 | OK\n");
		printf("		String: %s\n", s3);
		printf("		Char: %c | Result: %s\n", (char)c, s1);
	}
	else
	{
		printf("	#Test 1 | KO\n");
		printf("		String: %s\n", s2);
		printf("		Char: %c | Result: %s\n", (char)c, s1);
	}
}
