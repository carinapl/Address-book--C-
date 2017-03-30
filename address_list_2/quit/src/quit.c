#include"../../include/myhead.h"

void quit(DMem *addrhead)
{
    FILE *fp;
    //struct pmem *p1 = (struct peme*)malloc(sizeof (struct pmem));
    DMem temp = (*addrhead)->next;

    if((fp = fopen("a.txt","w")) == NULL)
    {
        perror("open file error");
        exit(1);
    }

    while(temp != NULL)
    {
        //p1->id = temp->id;
        //strcpy(p1->name,temp->name);
        //strcpy(p1->tel,temp->tel);
    
        //fprintf(fp,"%d:%s:%s",p1->id,p1->name,p1->tel);

        fprintf(fp,"%d %s %s\n",temp->id,temp->name,temp->tel);
        temp = temp->next;
    }
   
    fclose(fp);
        
    clean();

    printf("\n\n\n\n");
    printf("\t\t\t***************************\n");
    printf("\t\t\t|                         |\n");
    printf("\t\t\t|Thank you for your using!|\n");
    printf("\t\t\t|                         |\n");
    printf("\t\t\t***************************\n");
    exit(1);
}
