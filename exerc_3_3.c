#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct q{
    int number;
    struct q *next;
    struct q *prev;
} node;

node* random_list(void ){
    int nr,i=0;
    node *top, *old, *item;
    // DO STUFF
    return(top);
}

node* add_first(node* temp, int data){
    // Adds a record first i list and set the field tal to data
}

int main(int argc, char *argv[]){
    int nr=0;
    node*akt_post , *head=NULL;
    srand(time(NULL));
    head=random_list();akt_post=head;

    while( akt_post!=NULL){
        printf("\n Post nr %d : %d" , nr++, akt_post->number);
        akt_post=akt_post->next;
    }

    while((akt_post=head)!=NULL){
        head=akt_post->next;free(akt_post);
    }

    return 0;
}
