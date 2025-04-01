#include "graph.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

struct _s_graph{
    u32 v_size;
    u32 e_size;
    vertex_t * v;
    edge_t * e;
    u32 delta;
};

graph_t new_graph(){
    struct _s_graph * new = malloc(sizeof(struct _s_graph));
    //to implement
    return new;
};

//O(1)
u32 vertex_size(graph_t g){
    return (g->v_size);
}

//O(1)
u32 edge_size(graph_t g){
    return (g->e_size);
}

//O(1)
u32 delta(graph_t g){
    return (g->delta);
}

//O(1)
u32 degree(u32 i, graph_t g){
    u32 degree = 0;
    if (i < g->v_size){
        degree = get_vertex_degree((g->v)[i]);
    }
    return degree;
};

//O(1)
color_t get_color(u32 i, graph_t g){
    color_t color = U32_MAX;
    if (i < g->v_size){
        color = get_vertex_color((g->v)[i]);
    }
    return color; 
};

//O(1)
void assign_color(color_t x, u32 i, graph_t g){
    if (i < g->v_size){
        set_color_v(x, (g->v)[i]);
    }
    return;
};

void destroy_graph(graph_t g){
    //to implement
    return;
}