#ifndef STUDENT_H
#define STUDENT_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int roll;
    char name[30];
    float percentage;
    struct student *next;
};

/* Global Head Pointer */
extern struct student *head;

/* Function Prototypes */

void menu();

void stud_add();
void stud_del();
void stud_show();
void stud_mod();
void stud_save();
void stud_load();
void stud_sort();

int generate_roll();

#endif
