#ifndef GRAPH_
#define GRAPH_

typedef struct GRAPH_NODE_ *pnode;;

typedef struct edge_ {
    int weight;
    pnode endpoint;
    struct edge_ *next;
} edge, *pedge;


typedef struct GRAPH_NODE_ {
    int node_num;
    pedge edges;
    struct GRAPH_NODE_ *next;
} node, *pnode;


pnode getHead(int k);
pnode findNode(pnode NODE, int ID);
void deleteGraph_cmd(pnode* head);
void build_graph_cmd(pnode *head);
void insert_node_cmd(pnode *head);
void delete_node_cmd(pnode *head);
void printGraph_cmd(pnode head); //for self debug
void shortsPath_cmd(pnode head);
void TSP_cmd(pnode head);

//void insert_node_cmd(pnode *head);
//void delete_node_cmd(pnode *head);
//void printGraph_cmd(pnode head);
//void deleteGraph_cmd(pnode *head);
// void build_graph_cmd(pnode *head);
// void removeExiting(pnode n);
// void addNewEdge(pnode Src, pnode Dest, int Weight);


#endif