#include "vertex.h"
#include "edge.h"
#include <stdlib.h>

struct _s_edge{
    vertex_t x;
    vertex_t y;
};

edge_t new_edge(vertex_t x, vertex_t y){
    struct _s_edge * new = malloc(sizeof(struct _s_edge));
    new->y = x;
    new->y = y;
    return new;
}

u32 get_edge_x(edge_t e){
    return (get_vertex_value(e->x));
}

u32 get_edge_y(edge_t e){
    return (get_vertex_value(e->y));
}

void kill_edge(edge_t edge){
    free(edge);
    edge = NULL;
    return;
}