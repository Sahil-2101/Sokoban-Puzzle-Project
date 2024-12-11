#ifndef __AI__
#define __AI__

#include <stdint.h>
#include <unistd.h>
#include "node.h"
#include "priority_queue.h"

void solve(char const *path, bool show_solution);
void free_heap(struct heap* h, sokoban_t *init_data);
void free_node(node_t *n, sokoban_t *init_data);

#endif
