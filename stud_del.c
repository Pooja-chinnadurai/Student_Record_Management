#include "student.h"

void stud_del()
{
    struct student *temp, *prev;
    int roll;
    char ch;

    if(head == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nDelete Using");
    printf("\nR/r : Roll Number");
    printf("\nN/n : Name");
    printf("\nEnter Choice : ");
    scanf(" %c",&ch);

    if(ch=='R' || ch=='r')
    {
        printf("\nEnter Roll Number : ");
        scanf("%d",&roll);

        temp=head;
        prev=NULL;

        while(temp!=NULL)
        {
            if(temp->roll==roll)
            {
                if(prev==NULL)
                    head=temp->next;
                else
                    prev->next=temp->next;

                free(temp);

                printf("\nRecord Deleted Successfully!\n");
                return;
            }

            prev=temp;
            temp=temp->next;
        }

        printf("\nRoll Number Not Found!\n");
    }

    else if(ch=='N' || ch=='n')
    {
        char name[30];

        printf("\nEnter Name : ");
        scanf(" %[^\n]",name);

        temp=head;

        printf("\nMatching Records\n");
        printf("\n-------------------------------------");
        printf("\nRoll\tName\t\tPercentage");
        printf("\n-------------------------------------");

        while(temp!=NULL)
        {
            if(strcmp(temp->name,name)==0)
            {
                printf("\n%d\t%-15s%.2f",
                       temp->roll,
                       temp->name,
                       temp->percentage);
            }

            temp=temp->next;
        }

        printf("\n");

        printf("\nEnter Roll Number to Delete : ");
        scanf("%d",&roll);

        temp=head;
        prev=NULL;

        while(temp!=NULL)
        {
            if(temp->roll==roll)
            {
                if(prev==NULL)
                    head=temp->next;
                else
                    prev->next=temp->next;

                free(temp);

                printf("\nRecord Deleted Successfully!\n");
                return;
            }

            prev=temp;
            temp=temp->next;
        }

        printf("\nRecord Not Found!\n");
    }

    else
    {
        printf("\nInvalid Choice\n");
    }
}
