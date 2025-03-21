#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    double d;
    int i;
    //open first file in write mode
    if((fp1=fopen("values","wb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //open second file in write mode
    if((fp2=fopen("count","wb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //write the values to the first file and the count to the second file
    d=1.0;
    for(i=0; d!=0.0 && i<32767; i++)
    {
        printf("Enter a number(0 to quit): ");
        scanf("%lf",&d);
        if(fwrite(&d,sizeof d,1,fp1)!=1)
        {
            printf("Error writing to file.\n");
            exit(1);
        }
    }
    if(fwrite(&i,sizeof i,1,fp2)!=1)
    {
        printf("Error writing to file.\n");
        exit(1);
    }
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}