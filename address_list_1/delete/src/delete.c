#include"../../include/myhead.h"

void del(DMem *addrhead)
{
    clean();
    char pname[20];
    char flag = 'n';
    printf("\t\t＊＊＊＊＊＊＊＊＊＊＊＊＊\n");
    printf("\t\t＊     删除联系人       ＊\n");
    printf("\t\t＊＊＊＊＊＊＊＊＊＊＊＊＊\n");

    printf("\n");
    printf("==============================\n");
    printf("please input the name:");
    scanf("%s",pname);

    printf("\n");
    printf("==============================\n");
    printf("first,we need to search %s:\n",pname);
    
    int sum = cal(addrhead,pname);
    printf("the number of pname: %d\n",sum);

    if(0 == sum)
    {
	printf("the addrhead don't include %s\n",pname);
    }
    else
    {
        DMem tmp = (*addrhead)->next;
   
		
    while(tmp != NULL)
    {
        if(strcmp(tmp->name,pname) == 0)
	{
            printf("id:%d\n",tmp->id);
            printf("name:%s\n",tmp->name);
	    printf("tel:%s\n",tmp->tel);
                
            if(1 == sum)
            {
		del_name_id(addrhead,tmp->id);
		flag = 'y';
		break;
	    }
            else
            {
		getchar();
		printf("The id is right?(y or n)\n");
		scanf("%c",&flag);

		if('y' == flag)
		{
		    del_name_id(addrhead,tmp->id);
		    break;
	        }
	        else
		{
		    tmp = tmp->next;
		}
            }
	}
	else
	{
            tmp = tmp->next;
	}
    }
}
	
    if(flag == 'y')
    {
        printf("%s has been delete!\n",pname);
    }
    else
    {
        printf("The address list doesn't include %s",pname);
    }

    printf("\n");
    printf("==============================\n");
    getchar();
    printf("Do you want to continue to delete(y or n):");
    scanf("%c",&flag);
    
    if('y' == flag)
    {
        del(addrhead);
    }
    else
    {
        interface(addrhead);
    }

}

void del_name_id(DMem * addrhead,int pid)
{
    DMem tmp = (*addrhead)->next;

    while(tmp != NULL)
    {
        if(pid == tmp->id)
	{
	    tmp->prev->next = tmp->next;
	    if(tmp->next != NULL)
	    {
	        tmp->next->prev = tmp->prev;
	    }
	    free(tmp);
	    tmp = NULL;
	    break;
        }
	else
	{
	    tmp = tmp->next;
	}
    }
}

int cal(DMem * addrhead,char *pname)
{
    int sum = 0;

    DMem tmp = (*addrhead)->next;

    while(tmp != NULL)
    {
	if(strcmp(tmp->name,pname) == 0)
	{
	    sum++;
	}
	    
	tmp = tmp->next;
    }

    return sum;
}
