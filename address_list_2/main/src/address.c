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

    FILE *fp;
    
    if((fp = fopen("a.txt","a+")) == NULL)
    {
        perror("open file error");
        exit(1);
    }

    //DMem temp;
    //temp = addr1;  

    while(!feof(fp))
    {
        newmem = (DMem)malloc(sizeof(Mem)); 

        fscanf(fp,"%d %s %s",&newmem->id,newmem->name,newmem->tel); 
   
        if(newmem->id == 0)
        {
            break;
        }
   
        //temp->next = newmem;
        //newmem->next = NULL;
        //temp = temp->next;
        insert_tail(newmem,&addr1);
    }

#if 0  
        fread(p1,sizeof(Pmem),1,fp);

        newmem = (DMem)malloc(sizeof(Mem));
        newmem->id = p1->id;
        strcpy(newmem->name,pmem[i].name);
        strcpy(newmem->tel,pmem[i].tel);

        insert_tail(newmem,&addr1);
#endif
               
    interface(&addr1);

    return 0;
}
