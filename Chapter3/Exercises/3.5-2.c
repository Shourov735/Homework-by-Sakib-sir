#include<stdio.h>

int main()
{
    int choice;
    printf("Mailing list menu\n");
    printf("1. Enter addresses\n");
    printf("2. Delete address\n");
    printf("3. Search the list\n");
    printf("4. Print the list\n");
    printf("5. Quit\n");
    printf("Enter the number of your choice(1-5): ");
    do{
        scanf("%d", &choice);
        if(choice < 1 || choice > 5)
        printf("Please enter a number between 1 and 5: ");
    }while(choice < 1 || choice > 5);
    return 0;
}