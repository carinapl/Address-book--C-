#include"../../include/myhead.h"

void search(DMem * addrhead)
{
    clean();
    int choice;
    printf("\n\n\n");
    printf("\t\t\t＊＊＊＊＊＊＊＊＊\n");
    printf("\t\t\t＊  查找联系人  ＊\n");
    printf("\t\t\t＊＊＊＊＊＊＊＊＊\n");

    printf("\t=================================================\n");
    printf("\t|\t\t   1.姓名查找\t\t\t|\n");
    printf("\t|                                               |\n");
    printf("\t|\t\t   2.ID查找\t\t\t|\n");
    printf("\t|                                               |\n");
    printf("\t|\t\t   3.返回\t\t\t|\n");
    printf("\t=================================================\n");

    printf("\n\n");
    printf("please input your choice(only 1 to 3):");
    scanf("%d",&choice);
    printf("%d",choice);
    switch(choice)
    {
	case 1:
	{
	    printf("name\n");
	    search_name(addrhead);
	    break;
	}
	case 2:
	{
	    search_id(addrhead);
	    break;
	}
	case 3:
	{
	    interface(addrhead);
	    break;
	}
	default:
	{
	    error();
	    break;
	}
    }
}

void search_name(DMem * addrhead)
{
    clean();
    char pname[20];
    printf("\t\t＊＊＊＊＊＊＊＊＊＊＊＊\n");
    printf("\t\t＊  查找联系人--姓名  ＊\n");
    printf("\t\t＊＊＊＊＊＊＊＊＊＊＊＊\n");
    printf("\n");
    printf("===============================================\n");
    printf("please input the name:");
    scanf("%s",pname);
    printf("\n");
    printf("===============================================\n");
    printf("output the result:\n");
    DMem tmp = (*addrhead)->next;
    int sum = 0;
    while(tmp != NULL)
    {
	if(strcmp(tmp->name,pname) == 0)
	{   
	    sum++;
	    printf("id:%d",tmp->id);
	    printf("name:%s",tmp->name);
	    printf("tel:%s",tmp->tel);
	}
	tmp = tmp->next;
    }	
    if(0 == sum)
    {
	printf("this address list don't have %s",pname);
    }
    else
    {
	printf("\n There are %d people named %s\n",sum,pname);
    }
    printf("\n");
    printf("===============================================\n");
    getchar();
    char flag;
    printf("Do you want to continue to search name(y or n):");
    scanf("%c",&flag);

    if('y' == flag)
    {
	search_name(addrhead);
    }
    else
    {
        search(addrhead);
    }
}

void search_id(DMem * addrhead)
{

    clean();
    int pid;
    printf("＊＊＊＊＊＊＊＊＊＊＊＊\n");
    printf("＊  查找联系人--ID    ＊\n");
    printf("＊＊＊＊＊＊＊＊＊＊＊＊\n");
    printf("\n");
    printf("===============================================\n");
    printf("please input the id:");
    scanf("%d",&pid);
    printf("\n");
    printf("===============================================\n");
    printf("output the result:\n");
    DMem tmp = (*addrhead)->next;
    int sum = 0;
    while(tmp != NULL)
    {
	if(tmp->id == pid)
	{  
            sum++;
	    printf("id:%d\n",tmp->id);
	    printf("name:%s\n",tmp->name);
	    printf("tel:%s\n",tmp->tel);
	    printf("\n");
	}
	tmp = tmp->next;
    }
    if(0 == sum)
    {
	printf("this address list don't have id:%d",pid);
    }
    printf("\n");
    printf("===============================================\n");
    char flag;
    getchar();
    printf("Do you want to continue to search id(y or n):");
    scanf("%c",&flag);

    if('y' == flag)
    {
	search_id(addrhead);
    }
    else
    {
        search(addrhead);
    }
}
