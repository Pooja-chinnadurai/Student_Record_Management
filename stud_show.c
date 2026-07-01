#include "student.h"

void stud_show()
{
    struct student *temp;

    if(head == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    temp = head;

    printf("\n---------------------------------------");
    printf("\nRoll No\tName\t\tPercentage");
    printf("\n---------------------------------------");

    while(temp != NULL)
    {
        printf("\n%d\t%-15s%.2f",
               temp->roll,
               temp->name,
               temp->percentage);

        temp = temp->next;
    }

    printf("\n---------------------------------------\n");
}
