#ifndef _VERTEX_H_
#define _VERTEX_H_

#include "int.h"
#include "color.h"

typedef struct _s_vertex * vertex_t;

vertex_t new_vertex(u32 value);

u32 get_vertex_value(vertex_t vertex);

u32 get_vertex_degree(vertex_t vertex);

color_t get_vertex_color(vertex_t vertex);

void set_color_v(color_t x, vertex_t v);

void kill_vertex(vertex_t vertex);

#endif