#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "Hello";
    char s2[10] = "World";
    char s3[10];
    char s4[20] = "Hello";
    char s5[30] = "The Little Prince";

    /* string length */
    printf("string length of s1 : %d\n", strlen(s1));
    printf("string length of s2 : %d\n", strlen(s2));

    /* string compare */
    int compare_flag;
    compare_flag = strcmp(s1, s2);  // -1(s1 < s2)  0(s1 = s2) 1(s1 > s2)
    printf("compare flag : %d\n", compare_flag);
    
    /* string copy */
    strcpy(s3, s1);
    printf("copied string s3 is : %s\n", s3);

    /* string concatenate */
    strcat(s4, s2);
    printf("string s4 is : %s\n", s4);

    /* string find character */
    char *ptr_chr = strchr(s4, 'o');    // strchr(from left side), strrchr(from right side)
    while(ptr_chr != NULL)
    {
        printf("%s\n", ptr_chr);
        ptr_chr = strchr(ptr_chr+1, 'o');
    }

    /* string find string */
    char *ptr_str = strstr(s4, "llo");
    printf("%s\n", ptr_str);

    /* string tokenize */
    char *ptr_strtok = strtok(s5, " ");
    while (ptr_strtok != NULL)
    {
        printf("%s\n", ptr_strtok);
        ptr_strtok = strtok(NULL, " ");
    }   
}