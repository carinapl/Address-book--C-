#include"../../include/myhead.h"

void init_head(DMem *addrhead)
{
    (*addrhead) = (DMem)malloc(sizeof(Mem));
    (*addrhead)->next = NULL;
    (*addrhead)->prev = NULL;
}

int main()
{
    clean();
   
    DMem addr1;
    DMem newmem;

    init_head(&addr1);
                      
    interface(&addr1);

    return 0;
}
