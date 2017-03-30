#include"../../include/myhead.h"

void error(DMem *addrhead)
{
    char flag;
    clean();
    printf("\n\n\n");
    printf("\t\t\t*******************************\n");
    printf("\t\t\t|                             |\n");
    printf("\t\t\t|Your choice is wrong!        |\n");
    printf("\t\t\t|                             |\n");
    printf("\t\t\t|Do you want to choose again? |\n");
    printf("\t\t\t|                             |\n");
    printf("\t\t\t|Please input y or n:");
    getchar();
    scanf("%c",&flag);
    putchar('\n');
    printf("\t\t\t******************************\n");

    if('y' == flag)
    {
	interface(addrhead);
    }
    else
    {
	exit(1);
    }
}
