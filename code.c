#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>


struct node
{
    int data;
    struct node *next;
};

void add(struct node** start,struct node* temp)
{
    //printf("13\n");
    struct node* p = *start;

    if(*start == NULL)
    {
        *start = temp;
        return;
    }
    //printf("%d ", (*p).data);
    if(*start != NULL )
    {
        //printf("23\n");
        while(p->next != NULL)
            {
                
                printf("%d ", p->data);
                p = p->next;
            }
            //printf("28\n");
        p->next = temp;
        return;
    }
}

void printlist(struct node* start)
{
    struct node *p = start;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p -> next;
    }


        //printf("linkedlist is empty");
}

int main()
{

	struct node* start=NULL;

    struct node* temp = (struct node*)malloc(sizeof(struct node));

    int m;
    for(int i = 0; i < 3; i++)
    {

        scanf("%d", &m);

        temp->data = m;
        temp->next = NULL;
    }


    add(&start,temp);
    //add(&start,temp);
    //add(&start,temp);
    printlist(start);


	return 0;
}
