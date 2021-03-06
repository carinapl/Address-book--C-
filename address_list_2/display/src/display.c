#include"../../include/myhead.h"

void display(DMem *addrhead)
{
    clean();
    
    DMem tmp = (*addrhead)->next;
    while(tmp != NULL)
    {
	printf("id:%d\n",tmp->id);
	printf("name:%s\n",tmp->name);
	printf("tel:%s\n",tmp->tel);
	tmp = tmp->next;
    }

    char flag;
    getchar();
    printf("Do you want to exit(y or n):");
    scanf("%c",&flag);

    if('n' == flag)
    {
        interface(addrhead);
    }
    else
    {
        quit(addrhead);
    }
}
