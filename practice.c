#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// char slice(char *sl,int m,int n) {
//     while(m<n) {
//         printf("%c",sl[m]);
//         m++;
//     }
// }
// int main() {
//     int m,n;
//     char ch[50];
//     printf("Enter string: ");
//     scanf("%s",ch);
//     printf("Enter the index for the first element of the sliced array: ");
//     scanf("%d",&m);
//     printf("Enter the index for the last element of sliced array: ");
//     scanf("%d",&n);
//     slice(ch,m,n);
//     return 0;
// }

// int occurence(char *ptr,char c) {
//     int count=0;
//     while(*ptr!=0) {
//         if(*ptr==c) {
//             count++;
//         }
//         ptr++;
//     }
//     return count;
// }
// int main() {
//     char c[25]="Hi everyone";
//     int co;
//     co=occurence(&c[0],'e');
//     printf("The character %c occurs %d times in the string \" %s \"",'e',co,c);
//     return 0;
// }

// struct student {
//   char *name;
//   int roll;
//   float cgpa;
// };
// int main()
// {
//   char input[10];
//   int num;
//   struct student sayan;
//   strcpy(sayan.name,"Sayan Das");
//   scanf("%d",&sayan.roll);
//   sayan.cgpa=8.2;
//   printf("%s\n%d\n%.1f",sayan.name,sayan.roll,sayan.cgpa);
//   return 0;
// }

// struct employee{
//   int code; 
//   float salary;
//   char *name;
// };

// void show(struct employee r) {
//   printf("%d\n",r.code);
//   printf("%f\n",r.salary);
//   printf("%s\n",r.name);
// }
// int main() {
//   struct employee e1={32,3.4,"JDG"};
//   show(e1);
//   struct employee *ptr;
//   ptr=&e1;
//   ptr->code=10;
//   ptr->salary=34.234;
//   ptr -> name="Adam";
//   show(e1);
//   return 0;
// }

// typedef struct vector{
//   int x;
//   int y;
// }vec;
// vec sumvc(vec a,vec b) {
//   vec res;
//   res.x=a.x+b.x;
//   res.y=a.y+b.y;
//   return res;
// }
// int main() {
//   vec v1={4,5};
//   vec v2={6,8};
//   vec v3;
//   v3=sumvc(v1,v2);
//   printf("The sum of x dim is %d and sum of y dim is %d",v3.x,v3.y);
//   return 0;
// }
// typedef struct complex{
//   int x;
//   int y;
// }com;

// int main() {
//   int m,n;
//   com x1;
//   printf("Enter the real part of the complex number: ");
//   scanf("%d",&m);
//   printf("Enter the imaginary part of the complex number: ");
//   scanf("%d",&n);
//   x1.x=m;
//   x1.y=n;
//   printf("The complex number is %d+i%d",x1.x,x1.y);
//   return 0;
// }
// typedef struct date {
//   int date;
//   int month;
//   int year;
// }date;
// int compare(date a,date b) {
//   if((a.date==b.date) && (a.month==b.month) && (a.year==b.year)) {
//     return 0;
//   }
//   else if((a.date>b.date) || (a.month>b.month) || (a.year==b.year)) {
//     return 1;
//   }
//   else {
//     return -1;
//   }
// }
// int main() {
//   int x;
//   date d1,d2;
//   printf("Enter the date: ");
//   scanf("%d",&d1.date);
//   printf("Enter the month: ");
//   scanf("%d",&d1.month);
//   printf("Enter the year: ");
//   scanf("%d",&d1.year);
//   // printf("Enter day: ");
//   // scanf("%s",d1.day);
//   printf("Enter another date: ");
//   scanf("%d",&d2.date);
//   printf("Enter its month: ");
//   scanf("%d",&d2.month);
//   printf("Enter its year: ");
//   scanf("%d",&d2.year);
//   // printf("Enter day: ");
//   // scanf("%s",d2.day);
//   printf("The date you mentioned is %d/%d/%d\n",d1.date,d1.month,d1.year);
//   printf("The date you mentioned is %d/%d/%d\n",d2.date,d2.month,d2.year);
//   x=compare(d1,d2);
//   if(x==0) {
//     printf("Both the dates are same.\n");
//   }
//   else if(x==1) {
//     printf("%d/%d/%d comes before %d/%d/%d",d2.date,d2.month,d2.year,d1.date,d1.month,d1.year);
//   }
//   else {
//     printf("%d/%d/%d comes before %d/%d/%d",d1.date,d1.month,d1.year,d2.date,d2.month,d2.year);
//   }
//   return 0;
// }

int main() {
  int *ptr,n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  ptr=(int*)malloc(n*sizeof(int));
  for(int i=1;i<=n;i++) {
    printf("%d\n",7*i);
  }
  ptr=realloc(ptr,15*sizeof(int));
  for(int i=1;i<=15;i++) {
    printf("%d\n",7*i);
  }
  return 0;
}