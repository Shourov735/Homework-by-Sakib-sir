#include<stdio.h>
#include<stdlib.h>
double d[10]={10.23,2.2,36.67873,42.44,1.05,0.0,77.87,89.8,91.29,10.1};

int main()
{
    int i;
    FILE *fp;
    //open file in write mode
    if((fp=fopen("floats","wb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //write the entire array to the file in one go
    if(fwrite(d,sizeof d,1,fp)!=10)
    {
        printf("Error writing to file.\n");
        exit(1);
    }
    fclose(fp);
    //open file in read mode
    if((fp=fopen("floats","rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    //clear the array
    for(i=0;i<10;i++)
    {
        d[i]=0.0;
    }
    //read the entire array from the file in one go
    if(fread(d,sizeof d,1,fp)!=10)
    {
        printf("Error reading from file.\n");
        exit(1);
    }
    fclose(fp);
    //print the array
    for(i=0;i<10;i++)
    {
        printf("%f\n",d[i]);
    }
    
    return 0;
}