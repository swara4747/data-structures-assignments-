#include<stdio.h>
#include<stdlib.h>

#define max 5

struct print{
    int jobid;
    char jobtitle[20];
};

struct print queue[max];
int front=-1;
int rear=-1;

//performing enqueue
void enqueue(){
    if (rear==max-1){
        printf("the queue is full, cannot add any more elements\n");
       
    }
    
    //else
    if (front==-1){
        (front=0);
       
    }
    rear++;
    printf("enter the job id and title to be added to the queue:\n");
    scanf("%d %s", &queue[rear].jobid, &queue[rear].jobtitle);
    printf("job added succesfully");
    return;
}

//performing dequeue
void dequeue(){
    if (front==-1 || front<rear){
        printf("underflow condition the queue is already empty, cannot add anymore elements\n");
        front=-1;
        rear=-1;
        return;
    }
    
    //else 
    printf("enter the job id of the job to be deleted\n");
    scanf("%d", &queue[rear].jobid);
    front++;
    
    if (front>rear){
        front=-1;
        rear=-1;
        return;
    }
}

//display

void display(){
if (front==-1 || front<rear){
        printf("underflow condition the queue is already empty, cannot display\n");
        return;
}

printf("displaying the remaining print jobs in the queue\n");
for (int i=front;i<rear;i++){
    printf("%d, %s\n", queue[rear].jobid, queue[rear].jobtitle);
}
}



int main(){
    int choice;
    while(1){
    printf("performing operations on queue\n1.enqueue\n2.dequeue\n3.display\n");
    printf("enter between 1 2 and 3\n");
    scanf("%d", &choice);
    
    
    switch(choice){
        case 1:
        enqueue();
        break;
        
        case 2:
        dequeue();
        break;
        
        case 3 :
        display();
        break;
        
        default:
        printf("invalid option, exiting the program");
        return 0;
        break;
    }
    }
    return 0;
}
