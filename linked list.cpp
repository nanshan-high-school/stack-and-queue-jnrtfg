#include<iostream>

struct LINK
{
	int num;
	LINK*next;
};

int main()
{
	int count;
	scanf("%d",&count);
	int number;
	LINK*head=new LINK();
	scanf("%d",&number);
	head->num=number;
	head->next=NULL;
	LINK*now=head;
	for(int i=1;i<count;i++)
	{
		scanf("%d",&number);
		now->next=new LINK();
	now=now->next;
	now->num=number;
	now->next=NULL;
	}
	now=head;
	while(now!=NULL)
	{
		printf("%d ",now->num);
		now=now->next;
	}

return 0;
}