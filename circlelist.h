/*************************************************************************
    > File Name: circlelist.h
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月28日 星期三 18时47分06秒
 ************************************************************************/

#ifndef _CIRCLELIST_H_
#define _CIRCLELIST_H_

typedef void CircleList;

typedef struct _tag_CircleListNode
{
	struct _tag_CircleListNode * next;
}CircleListNode;

CircleList* CircleList_Create();

void List_Destroy(CircleList* list);

void CircleList_Clear(CircleList* list);

int CircleList_Length(CircleList* list);

int CircleList_Insert(CircleList* list, CircleListNode* node, int pos);

CircleListNode* CircleList_Get(CircleList* list, int pos);

CircleListNode* CircleList_Delete(CircleList* list, int pos);

//add

CircleListNode* CircleList_DeleteNode(CircleList* list, CircleListNode* node);

CircleListNode* CircleList_Reset(CircleList* list);

CircleListNode* CircleList_Current(CircleList* list);

CircleListNode* CircleList_Next(CircleList* list);

#endif
