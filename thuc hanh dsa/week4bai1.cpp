#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
	struct Node *parent;
};

typedef struct Node NODE;
typedef NODE* TREE;

void khoitao (TREE &t)
{
    t=NULL;
}

void themnodevaocay (TREE &t, int x)
{
    if(t==NULL)
    {
        TREE p= new NODE;
        p->data=x;
        p->left=NULL;
        p->right=NULL;
        t=p;
    }
    else
    {
        if(x<t->data)
        {
            themnodevaocay(t->left, x);
        }
        else if(x>t->data)
        {
            themnodevaocay(t->right,x);
        }
    }
}
void duyetNLR(TREE t)
{
    if(t!=NULL)
    {
         cout<<t->data <<" ";
        duyetNLR(t->left);
        duyetNLR(t->right);
       
    }
}

int main()
{
    TREE t;
    khoitao(t) ;
    int x;
    cin>>x;
    for(int i=0; i<x;i++) 
    {
        int giatri;
        cin>> giatri;
        themnodevaocay(t, giatri);
    }
    duyetNLR(t);
    return 0;
}