# include <stdio.h>
# include <stdlib.h>

  typedef struct node
{
  int number;
  struct node *next;
}
node;

int main(void)
{

 node *list = NULL;
// add number 1 to list
node *n = malloc(sizeof(node));
if (n==NULL){
		return 1;
	}

n->number=1; 	
n->next=NULL;
list=n;

// add number 2 to list
n = malloc(sizeof(node));
if (n==NULL){
		return 1;
	}
	
n->number=2; 	
n->next=NULL;
list->next =n;

// add number 3 to list
n = malloc(sizeof(node));
if (n==NULL){
		return 1;
	}

n->number=3; 	
n->next=NULL;
list->next->next =n;

// print list
for (node *tmp=list; tmp != NULL; tmp=tmp->next)
{
	printf("%i\n", tmp->number);
}
while (list != NULL){
	node *tmp= list->next;
	free(list);
	list=tmp;
}
}