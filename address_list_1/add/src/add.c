#include "../../include/myhead.h"

void add(DMem *addrhead)
{
    clean();

    DMem newmem = (DMem)malloc(sizeof(Mem));
    
    //num++;
    int count = 0;

    printf("please input the information of member:\n");

    printf("name:");
    scanf("%s",newmem->name);

    printf("tel:");
    scanf("%s",newmem->tel);
    
    
    DMem temp = (*addrhead)->next;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    //num = (temp->id) + 1;
    
    newmem->id = count + 1;

    insert_name_sort(newmem,addrhead);

    getchar();
    char flag;

    printf("Do you want to continue to add(y or n):");
    scanf("%c",&flag);

    if('y' == flag)
    {
        add(addrhead);
    }
    else
    {
	interface(addrhead);
    }
}

