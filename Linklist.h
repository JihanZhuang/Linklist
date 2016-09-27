/*************************************************************************
    > File Name: Linklist.h
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月27日 星期二 08时49分16秒
 ************************************************************************/

#ifndef _LINKLIST_H_
#define _LINKLIST_H_

typedef void LinkList;

typedef struct _tag_LinkListNode
{
	struct _tag_LinkListNode* next;
}LinkListNode;

LinkList* LinkList_Create();

void LinkList_Destroy(LinkList* list);

void LinkList_Clear(LinkList* list);

int LinkList_Length(LinkList* list);

int LinkList_Insert(LinkList* list, LinkListNode* node, int pos);

LinkListNode* LinkList_Get(LinkList* list, int pos);

LinkListNode* LinkList_Delete(LinkList* list, int pos);

#endif

