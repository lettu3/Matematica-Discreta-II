#ifndef _EDGE_H_
#define _EDGE_H_
#include "vertex.h"

typedef struct _s_edge * edge_t;

edge_t new_edge(vertex_t x, vertex_t y);

u32 get_edge_x(edge_t e);

u32 get_edge_y(edge_t e);

void kill_edge(edge_t edge);
    
#endif