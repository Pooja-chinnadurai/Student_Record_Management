#include "student.h"

struct student *head = NULL;

int main()
{
    char choice;

    stud_load();

    while(1)
    {
        menu();

        printf("\nEnter your Choice : ");
        scanf(" %c",&choice);

        switch(choice)
        {
            case 'A':
            case 'a':
                stud_add();
                break;

            case 'D':
            case 'd':
                stud_del();
                break;

            case 'S':
            case 's':
                stud_show();
                break;

            case 'M':
            case 'm':
                stud_mod();
                break;

            case 'V':
            case 'v':
                stud_save();
                break;

            case 'T':
            case 't':
                stud_sort();
                break;

            case 'E':
            case 'e':
            {
                char ch;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit without Saving");

                printf("\nEnter Choice : ");
                scanf(" %c",&ch);

                if(ch=='S' || ch=='s')
                {
                    stud_save();
                    exit(0);
                }
                else if(ch=='E' || ch=='e')
                {
                    exit(0);
                }

                break;
            }

            default:
                printf("\nInvalid Choice\n");
        }
    }

    return 0;
}

void menu()
{
    printf("\n===============================");
    printf("\n STUDENT RECORD MANAGEMENT");
    printf("\n===============================");

    printf("\nA/a : Add New Record");
    printf("\nD/d : Delete Record");
    printf("\nS/s : Show Records");
    printf("\nM/m : Modify Record");
    printf("\nV/v : Save Records");
    printf("\nT/t : Sort Records");
    printf("\nE/e : Exit");
}

int generate_roll()
{
    int roll = 1;
    struct student *temp;

    while(1)
    {
        int found = 0;

        temp = head;

        while(temp)
        {
            if(temp->roll == roll)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if(found == 0)
            return roll;

        roll++;
    }
}
