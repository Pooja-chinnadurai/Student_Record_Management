#include "student.h"

void stud_mod()
{
    struct student *temp;
    int roll;
    float per;
    char name[30];
    char search, modify;

    if(head==NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nSearch Using");
    printf("\nR/r : Roll Number");
    printf("\nN/n : Name");
    printf("\nP/p : Percentage");
    printf("\nEnter Choice : ");
    scanf(" %c",&search);

    temp=head;

    if(search=='R'||search=='r')
    {
        printf("\nEnter Roll Number : ");
        scanf("%d",&roll);

        while(temp!=NULL)
        {
            if(temp->roll==roll)
                break;

            temp=temp->next;
        }
    }

    else if(search=='N'||search=='n')
    {
        printf("\nEnter Name : ");
        scanf(" %[^\n]",name);

        while(temp!=NULL)
        {
            if(strcmp(temp->name,name)==0)
            {
                printf("\n%d\t%s\t%.2f",
                       temp->roll,
                       temp->name,
                       temp->percentage);
            }

            temp=temp->next;
        }

        printf("\nEnter Roll Number : ");
        scanf("%d",&roll);

        temp=head;

        while(temp!=NULL)
        {
            if(temp->roll==roll)
                break;

            temp=temp->next;
        }
    }

    else if(search=='P'||search=='p')
    {
        printf("\nEnter Percentage : ");
        scanf("%f",&per);

        while(temp!=NULL)
        {
            if(temp->percentage==per)
            {
                printf("\n%d\t%s\t%.2f",
                       temp->roll,
                       temp->name,
                       temp->percentage);
            }

            temp=temp->next;
        }

        printf("\nEnter Roll Number : ");
        scanf("%d",&roll);

        temp=head;

        while(temp!=NULL)
        {
            if(temp->roll==roll)
                break;

            temp=temp->next;
        }
    }

    if(temp==NULL)
    {
        printf("\nRecord Not Found!\n");
        return;
    }

    printf("\nModify");
    printf("\nN/n : Name");
    printf("\nP/p : Percentage");
    printf("\nEnter Choice : ");
    scanf(" %c",&modify);

    if(modify=='N'||modify=='n')
    {
        printf("\nEnter New Name : ");
        scanf(" %[^\n]",temp->name);
    }

    else if(modify=='P'||modify=='p')
    {
        printf("\nEnter New Percentage : ");
        scanf("%f",&temp->percentage);
    }

    printf("\nRecord Updated Successfully!\n");
}
