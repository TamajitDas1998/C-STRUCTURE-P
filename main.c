#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
char name[50];
int roll;
int age;
char address[50];
char department[50];

}STUDENT;
int main()
{
int n,m,choice,i;
STUDENT s[100];
printf("                                     \"STUDENT INFORMATION SYSTEM\"                      ");
printf("\nEnter How many Number do you want to input:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("                                    \"INFORMATION OF  STUDENT %d\"\n",i+1);
  printf("\nEnter the name of Student:");
  scanf("%s",s[i].name);
  printf("\nEnter the Roll Of %d Student:",i+1);
  scanf("%d",&s[i].roll);
  printf("\nEnter the address of %s:",s[i].name);
  scanf("%s",s[i].address);
  printf("\nEnter the Age of %s: ",s[i].name);
  scanf("%d",&s[i].age);
  printf("\nEnter the Department:");
  scanf("%s",s[i].department);
}
do{
printf("\n1.ToSearch the roll number.\n2.determine the even roll number.\n3.print the names of all the students having age 14.\nEnter the choice:");
scanf("%d",&choice);
switch(choice)
{
    case 1: printf("\nEnter the roll you want to search:");
        scanf("%d",&m);
        for(i=0;i<n;i++)
        {
        if(s[i].roll==m)
        {
            printf("The Roll Number belongs to This Guy %s\n",s[i].name);
        }
        }
        break;
case 2: for(i=0;i<n;i++)
        {
        if(s[i].roll%2==0)
        {
            printf("\nThe Rolls Are:%d",s[i].roll);
        }
        }
        break;
case 3: for(i=0;i<n;i++)
        {
       if(s[i].age>14)
       {
           printf("\n%d ",s[i].age);
       }
       }
        break;
case 0: break;
default: printf("Wrong Input.");
         break;
}
}while(choice!=0);

return 0;
}

