#ifndef _MYHEAD_H
#define _MYHEAD_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pmem
{
    int id;
    char name[20];
    char tel[12];
};

struct member
{
    int id;
    char name[20];
    char tel[12];
    struct member *next;
    struct member *prev;
};

typedef struct member Mem;
typedef Mem * DMem;

int num;
extern void clean();
extern void quit(DMem * addrhead);
extern void init_head(DMem * addrhead);
extern void interface(DMem * addrhead);
extern void add(DMem * addrhead);
extern void del(DMem * addrhead);
extern void del_name_id(DMem *addrhead,int pid);
extern int cal(DMem *addrhead,char *pname);
extern void search(DMem * addrhead);
extern void search_name(DMem * addrhead);
extern void search_id(DMem *addrhead);
extern void display(DMem * addrhead);
extern void insert_name_sort(DMem newmem,DMem *addrhead);
extern void insert_head(DMem newmen,DMem *addrhead);
extern void insert_mid(DMem newmem,DMem *addrhead,DMem tmp);
extern void insert_tail(DMem newmem,DMem *addrhead);
extern void error();
#endif
