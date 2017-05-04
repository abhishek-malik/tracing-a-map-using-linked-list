#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char c[20];
    int d;
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
};
char check[20][20];
int p=0;
void route1(struct node*);
void route2(struct node*);
void route3(struct node*);
void route4(struct node*);
void route1(struct node *s)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter name of next checkpoint: ");
    scanf("%s",t->c);
    strcpy(check[p],t->c);
    p++;
    printf("Enter distance from previous checkpoint: ");
    scanf("%d",&t->d);
    t->n1=t->n2=t->n3=t->n4=NULL;
    s->n1=t;
    int ch;
    printf("How many routes do you want to have in current checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t);
    else if(ch==2)
        route2(t);
    else if(ch==3)
        route3(t);
    else if(ch==4)
        route4(t);
    else
        return;
}
void route2(struct node *s)
{
    struct node *t,*t2;
    t=(struct node*)malloc(sizeof(struct node));
    t2=(struct node*)malloc(sizeof(struct node));
    printf("Enter name of next 2 checkpoints: ");
    scanf("%s",t->c);
    strcpy(check[p],t->c);
    p++;
    scanf("%s",t2->c);
    strcpy(check[p],t2->c);
    p++;
    printf("Enter distance of 2 from previous checkpoint: ");
    scanf("%d",&t->d);
    scanf("%d",&t2->d);
    t->n1=t->n2=t->n3=t->n4=NULL;
    t2->n1=t2->n2=t2->n3=t2->n4=NULL;
    s->n1=t;
    s->n2=t2;
    int ch;
    printf("How many routes do you want to have in the first checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t);
    else if(ch==2)
        route2(t);
    else if(ch==3)
        route3(t);
    else if(ch==4)
        route4(t);
    else;
    printf("How many routes do you want to have in the second checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t2);
    else if(ch==2)
        route2(t2);
    else if(ch==3)
        route3(t2);
    else if(ch==4)
        route4(t2);
    else
        return;
}
void route3(struct node *s)
{
    struct node *t,*t2,*t3;
    t=(struct node*)malloc(sizeof(struct node));
    t2=(struct node*)malloc(sizeof(struct node));
    t3=(struct node*)malloc(sizeof(struct node));
    printf("Enter name of next 3 checkpoints: ");
    scanf("%s",t->c);
    scanf("%s",t2->c);
    scanf("%s",t3->c);
    printf("Enter distance of 3 from previous checkpoint: ");
    scanf("%d",&t->d);
    strcpy(check[p],t->c);
    p++;
    scanf("%d",&t2->d);
    strcpy(check[p],t2->c);
    p++;
    scanf("%d",&t3->d);
    strcpy(check[p],t3->c);
    p++;
    t->n1=t->n2=t->n3=t->n4=NULL;
    t2->n1=t2->n2=t2->n3=t2->n4=NULL;
    t3->n1=t3->n2=t3->n3=t3->n4=NULL;
    s->n1=t;
    s->n2=t2;
    s->n3=t3;
    int ch;
    printf("How many routes do you want to have in the first checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t);
    else if(ch==2)
        route2(t);
    else if(ch==3)
        route3(t);
    else if(ch==4)
        route4(t);
    else;
    printf("How many routes do you want to have in the second checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t2);
    else if(ch==2)
        route2(t2);
    else if(ch==3)
        route3(t2);
    else if(ch==4)
        route4(t2);
    else;
    printf("How many routes do you want to have in the third checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t3);
    else if(ch==2)
        route2(t3);
    else if(ch==3)
        route3(t3);
    else if(ch==4)
        route4(t3);
    else
        return;
}
void route4(struct node *s)
{
    struct node *t,*t2,*t3,*t4;
    t=(struct node*)malloc(sizeof(struct node));
    t2=(struct node*)malloc(sizeof(struct node));
    t3=(struct node*)malloc(sizeof(struct node));
    t4=(struct node*)malloc(sizeof(struct node));
    printf("Enter name of next 4 checkpoints: ");
    scanf("%s",t->c);
    scanf("%s",t2->c);
    scanf("%s",t3->c);
    scanf("%s",t4->c);
    printf("Enter distance of 4 from previous checkpoint: ");
    scanf("%d",&t->d);
    strcpy(check[p],t->c);
    p++;
    scanf("%d",&t2->d);
    strcpy(check[p],t2->c);
    p++;
    scanf("%d",&t3->d);
    strcpy(check[p],t3->c);
    p++;
    scanf("%d",&t4->d);
    strcpy(check[p],t4->c);
    p++;
    t->n1=t->n2=t->n3=t->n4=NULL;
    t2->n1=t2->n2=t2->n3=t2->n4=NULL;
    t3->n1=t3->n2=t3->n3=t3->n4=NULL;
    t4->n1=t4->n2=t4->n3=t4->n4=NULL;
    s->n1=t;
    s->n2=t2;
    s->n3=t3;
    s->n4=t4;
        int ch;
    printf("How many routes do you want to have in the first checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t);
    else if(ch==2)
        route2(t);
    else if(ch==3)
        route3(t);
    else if(ch==4)
        route4(t);
    else;
    printf("How many routes do you want to have in the second checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t2);
    else if(ch==2)
        route2(t2);
    else if(ch==3)
        route3(t2);
    else if(ch==4)
        route4(t2);
    else;
    printf("How many routes do you want to have in the third checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t3);
    else if(ch==2)
        route2(t3);
    else if(ch==3)
        route3(t3);
    else if(ch==4)
        route4(t3);
    else;
    printf("How many routes do you want to have in the fourth checkpoint: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(t4);
    else if(ch==2)
        route2(t4);
    else if(ch==3)
        route3(t4);
    else if(ch==4)
        route4(t4);
    else
        return;
}
void disp(struct node *s)
{
    if(s==NULL)
        return;
    printf("%s -> ",s->c);
    if(s->n1!=NULL)
        printf("%s(%d) ",s->n1->c,s->n1->d);
    if(s->n2!=NULL)
        printf("%s(%d) ",s->n2->c,s->n2->d);
    if(s->n3!=NULL)
        printf("%s(%d) ",s->n3->c,s->n3->d);
    if(s->n4!=NULL)
        printf("%s(%d) ",s->n4->c,s->n4->c);
    printf("\n");
    disp(s->n1);
    disp(s->n2);
    disp(s->n3);
    disp(s->n4);
}
char path[10][20];
int flg=0;
int dist[10];
int x=0;
void search(struct node *s,char a[])
{
    if(s==NULL)
    {
        return;
    }
    strcpy(path[x],s->c);
    dist[x]=s->d;
    x++;
    if(strcmp(s->c,a)==0)
    {
        printf("Found\n");
        flg=1;
        int i,td=0;
        for(i=0;i<x;i++)
        {
            if(i<(x-1))
                printf("%s -> ",path[i]);
            else
                printf("%s\n",path[i]);
            td=td+dist[i];
        }
        printf("Distance of search point from start checkpoint is: %d",td);
        return;
    }
    search(s->n1,a);
    search(s->n2,a);
    search(s->n3,a);
    search(s->n4,a);
    x--;
}
int main()
{
    int i;
    struct node *start;
    start=NULL;
    start=(struct node*)malloc(sizeof(struct node));
    printf("Enter name of start checkpoint: ");
    scanf("%s",start->c);
    start->d=0;
    start->n1=start->n2=start->n3=start->n4=NULL;
    int ch;
    printf("How many routes do you want to have in start: ");
    scanf("%d",&ch);
    if(ch==1)
        route1(start);
    else if(ch==2)
        route2(start);
    else if(ch==3)
        route3(start);
    else if(ch==4)
        route4(start);
    else;
    for(i=0;i<p;i++)
    {
        printf("%s ",check[i]);
    }
    printf("\n");
    disp(start);
    char s[20];
    printf("Enter search point: ");
    scanf("%s",s);
    search(start,s);
    if(flg==0)
    {
        printf("Not Found");
    }
    return 0;
}
