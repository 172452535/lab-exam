#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
int data;
Node *next;
};
void insert_node();
void display(Node *head);

int main(){
    Node *head;
    head = NULL;
     int op,num;
    do{
        printf("\n \n ");
        printf("Options\n");
        printf("-------------- \n");
        printf("\n");
        printf("1.Push front  \n");
        printf("2.Pop front \n");
        printf("3.Display \n");
        printf("4.Size \n");
        printf("5.Empty\n");
        printf("6.Clear \n");
        printf("7.Close  \n");
       ;
        printf("\n");
        printf("Enter your option : \n");
        scanf("%d",&op);
        system("cls");

        if(op<=0 || op >7 ){
        printf("Invalid input.Please Insert Between 1 to 7\n");
     }
                else if(op ==1){
                                printf("Enter the data to insert:\n");
                                scanf("%d", &num);
                                push(num);

                }

                        else if (op ==2){
                                pop();
                        }
                        else if(op == 3){
                        display();
                        }

                        else if (op == 4){
                                printf("size is : %d \n",size_of());
                        }
                        else if(op == 5){
                            empty_stack();
                        }
                        else if (op == 7 ){
                                clear();
                        }


    }while(op!=7);








}
void display(Node *head)
{
    Node *temp;
    temp = head;
    if(temp == NULL)
        {
           printf("Stack is Empty.\n");
        }
    else
        {
            printf("The stake is : ");
            while(temp != NULL)
                {
                    printf("%d ",temp->value);
                    temp = temp->next;
                }
            printf("\n");
        }
}
  void push_front(Node *head,int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    if(head == NULL)
    {
       head = newNode;
       newNode -> next = head;
    }
    else
    {
       struct Node *temp = head;
       while(temp -> next != head)
          temp = temp -> next;
       newNode -> next = head;
       head = newNode;
       temp -> next = head;
    }
    printf("\nInsertion success!!!");
}
void pop_front(Node *head)
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *temp = head;
      if(temp -> previous == temp -> next)
      {
         head = NULL;
         free(temp);
      }
      else{
         head = temp -> next;
         head -> previous = NULL;
         free(temp);
      }
      printf("\nDeletion success!!!");
   }
}
int size( Node* head)
{
     Node* temp = head;
    int result = 0;
    if (head != NULL) {
        do {
            temp = temp->next;
            result++;
        } while (temp != head);
    }
    return result;
}
void clear(Node *head)
{
    struct node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("SUCCESSFULLY DELETED ALL NODES OF LINKED LIST\n");
}

void empty()
{
    if(head == NULL)
        {
            printf("linked list is Empty.\n");

        }
    else
        {
            printf("Linked list is not Empty");
}
}
