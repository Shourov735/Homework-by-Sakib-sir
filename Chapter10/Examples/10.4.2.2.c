// Simulation of a 100 minute spaceship flight recorder
#include<stdio.h>
#include<stdlib.h>

struct telemetry
{
    unsigned fuel ;
    unsigned radio ;
    unsigned tv ;
    unsigned water ;
    unsigned food ;
    unsigned waste ;
}flight_recorder;
void display(struct telemetry i);
int main()
{
    FILE *fp;
    int i;
    if((fp=fopen("flight2","wb"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }
    // Imagine that each minute of status report of that spaceship is recorded on the disk
    for(i=0;i<100;i++)
    {
        flight_recorder.fuel=rand()%2;
        flight_recorder.radio=rand()%2;
        flight_recorder.tv=rand()%2;
        flight_recorder.water=rand()%2;
        flight_recorder.food=rand()%2;
        flight_recorder.waste=rand()%2;

        display(flight_recorder);
        fwrite(&flight_recorder,sizeof flight_recorder,1,fp);
    }
    fclose(fp);
    return 0;
}
void display(struct telemetry i)
{
    if(i.fuel) printf("Fuel OK\n");
    else printf("Fuel low\n");
    if(i.radio) printf("Radio OK\n");
    else printf("Radio Failure\n");
    if(i.tv) printf("TV system OK\n");
    else printf("TV mulfunction\n");
    if(i.water) printf("water supply OK\n");
    else printf("water supply low\n");
    if(i.food) printf("Food supply OK\n");
    else printf("Food supply low\n");
    if(i.waste) printf("Waste containment OK\n");
    else printf("Waste containment failure\n");
    printf("\n");
}
