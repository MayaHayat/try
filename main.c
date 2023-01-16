#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "graph.h"


int main(){
    char choice;
    pnode head = NULL;
    while(scanf("%c", &choice)!=EOF){
        switch(choice) {
            case 'A':
                int getH;
                deleteGraph_cmd(&head);
                scanf("%d", &getH);
                head = getHead(getH);
                break;
            case 'n':
                build_graph_cmd(&head);
                break;
            case 'B':
                insert_node_cmd(&head);
                break;
            case 'D':
                delete_node_cmd(&head);
                break;
            case 'S':
                shortsPath_cmd(head);
                break;
            case 'T':
                TSP_cmd(head);
                break;
            default:
                break;
        }
    }
    deleteGraph_cmd(&head);
    return 0;
}