#include "tests.h"
#include <string.h>

void test_ft_strnstr(void)
{
    char *haystack1 = "Hello, World!";
    char *needle1 = "World";
    char *haystack2 = "abcdef";
    char *needle2 = "def";
    char *haystack3 = "abc";
    char *needle3 = "xyz";
    char *haystack4 = "abcdabcd";
    char *needle4 = "";
    char *haystack5 = "abcdabcd";
    char *needle5 = "bcdabcd";

    size_t len1 = 12;
    size_t len2 = 6;
    size_t len3 = 3;
    size_t len4 = 4;
    size_t len5 = 8;

    char *result;

    printf("--> Testing ft_strnstr...\n");

    // Test 1
    result = ft_strnstr(haystack1, needle1, len1);
    if (result != NULL && strcmp(result, "World!") == 0)
    {
        printf("    Test 1 ✅\n");
        printf("    Haystack: %s\n", haystack1);
        printf("    Needle: %s | Result: %s\n", needle1, result);
    }
    else
    {
        printf("    Test 1 ❌\n");
        printf("    Haystack: %s\n", haystack1);
        printf("    Needle: %s | Result: %s\n", needle1, result);
    }

    // Test 2
    result = ft_strnstr(haystack2, needle2, len2);
    if (result != NULL && strcmp(result, "def") == 0)
    {
        printf("    Test 2 ✅\n");
        printf("    Haystack: %s\n", haystack2);
        printf("    Needle: %s | Result: %s\n", needle2, result);
    }
    else
    {
        printf("    Test 2 ❌\n");
        printf("    Haystack: %s\n", haystack2);
        printf("    Needle: %s | Result: %s\n", needle2, result);
    }

    // Test 3
    result = ft_strnstr(haystack3, needle3, len3);
    if (result == NULL)
    {
        printf("    Test 3 ✅\n");
        printf("    Haystack: %s\n", haystack3);
        printf("    Needle: %s | Result: (null)\n", needle3);
    }
    else
    {
        printf("    Test 3 ❌\n");
        printf("    Haystack: %s\n", haystack3);
        printf("    Needle: %s | Result: %s\n", needle3, result);
    }

    // Test 4
    result = ft_strnstr(haystack4, needle4, len4);
    if (result == haystack4)
    {
        printf("	Test 4 ✅\n");
        printf("	Haystack: %s\n", haystack4);
        printf("	Needle: \"%s\" (empty) | Result: %s\n", needle4, result);
    }
    else
    {
        printf("	Test 4 ❌\n");
        printf("	Haystack: %s\n", haystack4);
        printf("	Needle: \"%s\" (empty) | Result: %s\n", needle4, result);
    }

    // Test 5
	result = ft_strnstr(haystack5, needle5, len5);
	if (result != NULL && strcmp(result, "bcdabcd") == 0)
	{
		printf("    Test 5 ✅\n");
		printf("    Haystack: %s\n", haystack5);
		printf("    Needle: %s | Result: %s\n", needle5, result);
	}
	else
	{
		printf("    Test 5 ❌\n");
		printf("    Haystack: %s\n", haystack5);
		printf("    Needle: %s | Result: %s\n", needle5, result ? result : "(null)");
	}
}

