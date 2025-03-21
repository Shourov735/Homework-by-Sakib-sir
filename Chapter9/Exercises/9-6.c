#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int i,num;
    if((fp=fopen("RAND","rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    printf("Which number (1-100)? ");
    scanf("%d",&i);
    fseek(fp,(i-1)*sizeof(int),SEEK_SET);
    fread(&num,sizeof(num),1,fp);
    printf("%d\n",num);
    fclose(fp);
    return 0;
}