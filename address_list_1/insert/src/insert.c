#include"../../include/myhead.h"

void insert_head(DMem newmem,DMem * addrhead)
{
    if((*addrhead)->next != NULL)
    {
	(*addrhead)->next->prev = newmem;
    }

    newmem->next = (*addrhead)->next;
    newmem->prev = (*addrhead);
    (*addrhead)->next = newmem;
}


void insert_mid(DMem newmem,DMem * addrhead,DMem tmp)
{
    newmem->next = tmp;
    newmem->prev = tmp->prev;
    tmp->prev->next = newmem;
    tmp->prev = newmem;
}

void insert_tail(DMem newmem,DMem * addrhead)
{
    if((*addrhead)->next == NULL)
    {
	newmem->next = NULL;
	newmem->prev = *addrhead;
	(*addrhead)->next = newmem;
	return;
    }

    DMem tmp = (*addrhead)->next;
    while(tmp->next != NULL)
    {
	tmp = tmp->next;
    }

    newmem->next = NULL;
    newmem->prev = tmp;
    tmp->next = newmem;

}

void insert_name_sort(DMem newmem,DMem *addrhead)
{
    DMem tmp = (*addrhead)->next;

    while(tmp != NULL)
    {
	if(strcmp(newmem->name,tmp->name) <= 0)
	{
	    insert_mid(newmem,addrhead,tmp);
	    tmp = (*addrhead)->next;
	    return;
	}
	tmp = tmp->next;
    }

    insert_tail(newmem,addrhead);

}
