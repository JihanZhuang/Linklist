/*************************************************************************
    > File Name: Linklist.c
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月27日 星期二 08时52分17秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"Linklist.h"
LinkList* LinkList_Create(){
	TLinkList *tlink=(TLinkList *)malloc(sizeof(TLinkList));
	if(tlink==NULL){
		return NULL;
	}
	tlink->header.next=NULL;
	tlink->length=0;
	return tlink;
}

void LinkList_Destroy(LinkList* list)
{
	if (list == NULL)
	{
		return ;
	}
	free(list);
	return ;
}

void LinkList_Clear(LinkList* list){
	TLinkList *tList =NULL;
	
	if (list == NULL)
	{
		return ;
	}
	tList = (TLinkList *)list;
	tList->length = 0;
	tList->header.next = NULL;
	return ;
}

int LinkList_Length(LinkList* list){
	if(list==NULL){
		return -1;
	}
	return ((TLinkList *)list)->length;
}

int LinkList_Insert(LinkList* list, LinkListNode* node, int pos){
	TLinkList *tlink=(TLinkList *)list;
	LinkListNode *tmp=NULL;
	int i;
	if(tlink==NULL||node==NULL){
		return -1;
	}
	tmp=&tlink->header;
	for(i=0;i<pos&&(tmp->next!=NULL);i++){
		tmp=tmp->next;
	}
	node->next=tmp->next;
	tmp->next=node;
	tlink->length++;
	return 0;
}

LinkListNode* LinkList_Get(LinkList* list, int pos){
	int i = 0;

	TLinkList *tList  = NULL;
	LinkListNode *current = NULL;
	LinkListNode *ret = NULL;
	tList = (TLinkList *)list;

	if (list == NULL || pos <0 ||pos>=tList->length)
	{
		return NULL;
	}
	//准备环境让辅助指针变量 指向链表头节点
	current = &tList->header;
	for (i=0; i<pos &&(current->next!=NULL); i++)
	{
		current = current->next;
	}
	ret = current->next;

	return ret;
}

LinkListNode* LinkList_Delete(LinkList* list, int pos){
	int i = 0;

	TLinkList *tList  = NULL;
	LinkListNode *current = NULL;
	LinkListNode *ret = NULL;
	tList = (TLinkList *)list;

	if (list == NULL || pos <0 ||pos>=tList->length)
	{
		return NULL;
	}
	//准备环境让辅助指针变量 指向链表头节点
	current = &tList->header;
	for (i=0; i<pos &&(current->next!=NULL); i++)
	{
		current = current->next;
	}
	ret = current->next;

	//删除算法
	current->next =ret->next;
	tList->length--;

	return ret;
}
int main(){
	return 1;
}
