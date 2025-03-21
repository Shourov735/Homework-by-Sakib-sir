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
    for(i=0;i<100;i++)
    {
        fread(&num,sizeof(num),1,fp);
        printf("%d\n",num);
    }
    fclose(fp);
    return 0;
}