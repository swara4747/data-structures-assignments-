#include <stdio.h>

struct database{
    int rollno;
    char name[20];
    int marks;
    char section[2];
}

int s[max];
int n;
printf("enter the total number of students int he database:\n");
scanf("%d", &n);

for (i=0;i<n-1;i++){
    scanf("%d, %s, %d, %s", s[i].rollno, s[i].name, s[i].marks, s[i].section);
}

int choice;
printf("choose any of the operations on the database \n1.linear search\n2.binary search\n3.insertion sort\n4.selection sort\n5.shell sort\n");
scanf("%d", &choice);

switch(choice){
    
    case 1:
    printf("linear search\n");
    printf("enter the roll number of the student to be selected: \n");
    scanf("%d", targetrollno);
    for(i=0;i<n-1;i++){
        if (s[i].rollno==targetrollno){
            printf("Student matched\n Name: %s\nRollno: %d\nMarks: %d\nSection: %s", s[i],name, s[i],rollno, s[i].marks, s[i].section);
        }
        else printf("target student not found\n");
    }
    
    break;
    
    
    case 2:
    printf("binary search\n");
    int key;
    printf("enter the roll number of student to be searched:\n");
    scanf("%d", &key);
    
    int high=n-1; low=0; mid; key ;
    
    while (low<=high){
        mid=(low+high/2);
        
        if (key==mid){
            printf("Student matched\n Name: %s\nRollno: %d\nMarks: %d\nSection: %s", s[i],name, s[i],rollno, s[i].marks, s[i].section);
        }
        else if (key<mid){
            high=mid-1;
        }
        else if (key>mid){
            low=mid+1;
        }
        else printf("target student not found!\n");
        
    }
    break;
    
    
    case 3:
    printf("insertion sort\n");
    int key;
    int temp;
    printf("enter the roll number of student to be searched:\n");
    scanf("%d", &key);
    for(i=1;i<n;i++){
        temp=s[i].rollno;
        j=i-1;
        
        while (j>=0 && s[j].rollno>temp.rollno){
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=temp;
    }
    
    
}
