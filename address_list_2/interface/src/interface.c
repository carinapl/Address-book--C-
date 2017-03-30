#include"../../include/myhead.h"


void interface(DMem * addrhead)
{
    clean();
    int choice;
    printf("\n\n\n");
    printf("\t\t\t＊＊＊＊＊＊＊＊＊\n");
    printf("\t\t\t＊智能通讯录系统＊\n");
    printf("\t\t\t＊＊＊＊＊＊＊＊＊\n");

    printf("\t=================================================\n");
    printf("\t|\t\t   1.添加联系人\t\t\t|\n");
    printf("\t|                                               |\n");
    printf("\t|\t\t   2.删除联系人\t\t\t|\n");
    printf("\t|                                               |\n");
    printf("\t|\t\t   3.查找联系人\t\t\t|\n");
    printf("\t|                                               |\n");
    printf("\t|\t\t   4.显示联系人\t\t\t|\n");
    printf("\t|                                               |\n");
    printf("\t|\t\t   5.退出      \t\t\t|\n");
    printf("\t=================================================\n");

    printf("please input your choice(only 1 to 5):");
    scanf("%d",&choice);

    switch(choice)
    {
	case 1:
	{
	    add(addrhead);
	    break;
	}
	case 2:
	{
	    del(addrhead);
	    break;
	}
	case 3:
	{
	    search(addrhead);
	    break;
	}
	case 4:
	{
	    display(addrhead);
	    break;
	}
	case 5:
	{
            quit(addrhead);
	    break;
	}
	default:
	{
            error();
	    break;
	}
    }
    printf("\n");
}
