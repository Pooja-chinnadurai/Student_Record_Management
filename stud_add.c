#include "student.h"

void stud_add()
{
    struct student *newnode, *temp;

    newnode = (struct student *)malloc(sizeof(struct student));

    if(newnode == NULL)
    {
        printf("\nMemory Allocation Failed");
        return;
    }

    newnode->roll = generate_roll();

    printf("\nAssigned Roll Number : %d", newnode->roll);

    printf("\nEnter Student Name : ");
    scanf(" %[^\n]", newnode->name);

    printf("Enter Percentage : ");
    scanf("%f", &newnode->percentage);

    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    printf("\nStudent Added Successfully!\n");
}
