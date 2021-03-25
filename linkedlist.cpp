#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head=NULL,*new_node,*temp;
    int choice;
    printf("Enter 1 to create new node || Enter 0 end\n");
    scanf("%d",&choice);
    while(choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data part\n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=temp=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        printf("Enter 1 to create new node || Enter 0 to end\n");
        scanf("%d",&choice);
    }
    printf("Print the linked list\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
