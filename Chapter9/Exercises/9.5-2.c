#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    FILE *fp1, *fp2;
    double d;
    
    //open first file in read mode
    if((fp1=fopen("values","rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //open second file in read mode
    if((fp2=fopen("count","rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //read the values from the first file and the count from the second file
    if(fread(&i,sizeof i,1,fp2)!=1)
    {
        printf("Error reading from file.\n");
        exit(1);
    }
    printf("The count is %d.\n",i);

    for(i=0; d!=0.0 && i<32767; i++)
    {
        if(fread(&d,sizeof d,1,fp1)!=1)
        {
            printf("Error reading from file.\n");
            exit(1);
        }
        printf("%f\n",d);
    }
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}