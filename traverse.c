#include <stdio.h>
#include <stdlib.h>

struct node{
    int n;
    struct node *link;
};

int main(){
    int n;
    struct node *list = NULL, *tail, *q;
    scanf("%d", &n);
    while(n!=-1){
        q = (struct node*)malloc(sizeof(struct node));
        q->n = n; 
        q->link = NULL;
        if(list == NULL) list = q;
        else tail->link = q;
        tail = q;
        scanf("%d", &n);
    }
    while(list != NULL){
        q = list;
        if(q->n <= 999) printf("%d ", q->n);
        else if(q->n > 999 && q->n <= 999999) printf("%d,%03d ", q->n / 1000, q->n % 1000);
        else if(q->n > 999999 && q->n <= 999999999) printf("%d,%03d,%03d ", q->n / 1000000, (q->n % 1000000) / 1000, q->n % 1000);
        else printf("%d,%03d,%03d,%03d ", q->n / 1000000000, (q->n % 1000000000) / 1000000, (q->n % 1000000) / 1000, q->n % 1000);
        list = list->link;
        free(q);
    }
    return 0;
}