#include "student.h"

void stud_save()
{
    FILE *fp;
    struct student *temp;

    fp = fopen("student.dat","wb");

    if(fp == NULL)
    {
        printf("\nFile Error!\n");
        return;
    }

    temp = head;

    while(temp != NULL)
    {
        fwrite(temp, sizeof(struct student), 1, fp);
        temp = temp->next;
    }

    fclose(fp);

    printf("\nRecords Saved Successfully!\n");
}

void stud_load()
{
    FILE *fp;
    struct student *newnode, *temp;

    fp = fopen("student.dat","rb");

    if(fp == NULL)
        return;

    while(1)
    {
        newnode = (struct student *)malloc(sizeof(struct student));

        if(fread(newnode, sizeof(struct student), 1, fp) != 1)
        {
            free(newnode);
            break;
        }

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next = newnode;
        }
    }

    fclose(fp);
}
