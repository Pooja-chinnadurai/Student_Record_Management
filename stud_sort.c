#include "student.h"

void stud_sort()
{
    struct student *i, *j;

    int choice;

    char tempname[30];
    int temproll;
    float tempper;

    if(head == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n1. Sort by Name");
    printf("\n2. Sort by Percentage");
    printf("\nEnter Choice : ");
    scanf("%d",&choice);

    if(choice!=1 && choice!=2)
    {
        printf("\nInvalid Choice!\n");
        return;
    }

    for(i=head;i!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            int swap=0;

            if(choice==1)
            {
                if(strcmp(i->name,j->name)>0)
                    swap=1;
            }
            else
            {
                if(i->percentage > j->percentage)
                    swap=1;
            }

            if(swap)
            {
                temproll=i->roll;
                i->roll=j->roll;
                j->roll=temproll;

                strcpy(tempname,i->name);
                strcpy(i->name,j->name);
                strcpy(j->name,tempname);

                tempper=i->percentage;
                i->percentage=j->percentage;
                j->percentage=tempper;
            }
        }
    }

    printf("\nRecords Sorted Successfully!\n");
}
