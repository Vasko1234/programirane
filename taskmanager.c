#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "processes.h"

int main()
{
    int option;
    char name[30];
    unsigned int unique_ID;
    while (option != 4)
    {
        system("cls");
        printf("Create process: 1\n");
        printf("List with processes: 2\n");
        printf("Delete process: 3\n");
        printf("Exit: 4\n");
        do
        {
            printf("Option: ");
            scanf("%d", &option);
        } while (option < 1 || option > 4);
        if (option == 1)
        {
            printf("Process name: ");
            scanf("%s", &name);
            if (processescount < 5) createnewprocess(name);
            else 
            {
                printf("There are already 5 processes running!\nTry deleting one.");
                getch();
            }

            /*if (createnewprocess(name) == 0)
            {
                printf("There are already 5 processes running!\nTry deleting one.");
                getch();
            }*/

            //Това е оригиналният начин, по който се опитах да я направя, но не знам защо винаги го принти това съобщение, дори когато не трябва 
        }
        if (option == 2)
        {
            for(int i = 0; i < processescount; i++) printf("\nProcess %d\nName: %s\nID: %u\n", i + 1, processes[i].name, processes[i].unique_ID);
            getch();
        }
         if (option == 3)
        {
            printf("Process ID: ");
            scanf("%u", &unique_ID);
            stopprocess(unique_ID);
        }
    }
    return 0;
}
