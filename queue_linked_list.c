#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
int main(){
    struct Node*front=NULL;
    struct Node*rear=NULL;
    struct Node*newNode,*temp;
    int choice,value;
    while(1){
        printf("\n--queue using linked list--\n");
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter the your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter the value to enqueue ");
                scanf("%d",&value);
                newNode=(struct Node*)malloc(sizeof(struct Node));
                if(newNode==NULL){
                    printf("queue overflow\n");
                    break;
                }
                newNode->data=value;
                newNode->next=NULL;
                if(rear==NULL){
                    front=rear=newNode;
                }else{
                    rear->next=newNode;
                    rear=newNode;
                }
                printf("%d enqueued to queue\n",value);
                break;
                case 2:
                if (front == NULL) {
                    printf("Queue underflow\n");
                    break;
                }

                temp = front;
                printf("%d dequeued from queue\n", front->data);

                front = front->next;

                if (front == NULL) {
                    rear = NULL;
                }

                free(temp);
                break;

                case 3:
                if(front==NULL){
                    printf("queue is empty\n");
                    break;
                }
                temp=front;
                printf("queue elements:");
                while(temp!=NULL){
                    printf("%d->",temp->data);
                    temp=temp->next;
                }
                printf("NULL\n");
                break;
                case 4:
                exit(0);
                default :
                printf("invalid choice!\n");
        }
    }
    return 0;
}
