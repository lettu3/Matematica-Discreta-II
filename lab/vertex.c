#include "vertex.h"
#include "color.h"
#include <stdlib.h>

struct _s_vertex{
    u32 value;
    u32 degree;
    color_t color;
};

vertex_t new_vertex(u32 value){
    struct _s_vertex * new = malloc(sizeof(struct _s_vertex));
    new->value = value;
    new->color = 0;
    new->degree = 0;
    return new; 
}

//O(1)
u32 get_vertex_value(vertex_t vertex){
    return (vertex->value);
};

//O(1)
u32 get_vertex_degree(vertex_t vertex){
    return (vertex->degree);
}

//O(1)
color_t get_vertex_color(vertex_t vertex){
    return (vertex->color);
};

//O(1)
void set_color_v(color_t x, vertex_t v){
    v->color = x;
    return;
}

void kill_vertex(vertex_t vertex){
    free(vertex);
    vertex = NULL;
    return;
};