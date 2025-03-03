#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80],str2[80];
    int i;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    
    printf("%s is %d characters long.\n",str1,strlen(str1));
    printf("%s is %d characters long.\n",str2,strlen(str2));

    i=strcmp(str1,str2);
    if(!i) printf("The strings are equal.\n");
    else if(i<0) printf("%s is less than %s\n",str1,str2);
    else if(i<0) printf("%s is less than %s\n",str2,str1);

    if(strlen(str1)+strlen(str2)<80)
    {
        strcat(str2,str1);
        printf("%s\n",str2);
    }

    strcpy(str1,str2);
    printf("%s %s",str1,str2);
    return 0;
}