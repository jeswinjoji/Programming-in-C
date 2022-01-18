#include<stdio.h>
struct student
{
  char name[20];
  int roll;
  int age;
  float mark;
} s1, s2;
int
main ()
{
  printf ("enter the student1 details:");
  printf ("enter the name:");
  gets (s1.name);
  printf ("enter the roll number");
  scanf ("%d", &s1.roll);
  printf ("enter the age:");
  scanf ("%d", &s1.age);
  printf ("enter the marks ");
  scanf ("%d", &s1.mark);
  printf ("enter student2 details:") printf ("enter the name: ");
  gets (s2.name);
  printf ("enter the roll number");
  scanf ("%d", &s2.roll);
  printf ("enter the age:");
  scanf ("%d", &s2.age);
  printf ("enter the marks ");
  scanf ("%d", &s2.mark);
  printf ("studen details\n");
  printf ("name\tage\trollnumber\tmark\n");
  scanf ("%s%d%d%f\n", s1.name, s1.age, s1.roll, s1.mark);
  scanf ("%s%d%d%f\n", s2.name, s2.age, s2.roll, s2.mark);
  return 0;
}
