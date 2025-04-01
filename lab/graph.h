#ifndef _GRAPH_H_
#define _GRAPH_H_

#include "int.h"
#include "vertex.h"
#include "edge.h"

typedef struct _s_graph * graph_t;

graph_t new_graph();


u32 vertex_size(graph_t g);

u32 edge_size(graph_t g);

u32 delta(graph_t g);

/*
get the degree of the vertex @i in the graph @g
returns 0 if i doesn't exist
*/
u32 degree(u32 i, graph_t g);

/*
get the color of the vertex @i in the graph @g
if there's no color assigned yet, returns 0
returns 2^31 - 1 if i doesn't exist
*/
color_t get_color(u32 i, graph_t g);


u32 neighbour(u32 j, u32 i, graph_t g);

/*
Assign color @x to the vertex @i in the Graph @g
does nothing if i doesn't exist
*/
void assign_color(color_t x, u32 i, graph_t g);

void destroy_graph(graph_t g);

#endif