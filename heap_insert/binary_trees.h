#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;                             // Integer value stored in the node
    struct binary_tree_s *parent;     // Pointer to the parent node
    struct binary_tree_s *left;       // Pointer to the left child node
    struct binary_tree_s *right;      // Pointer to the right child node
} binary_tree_t;

typedef binary_tree_t heap_t; // Alias for Max Binary Heap

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
heap_t *heap_insert(heap_t **root, int value);
void binary_tree_print(const binary_tree_t *tree); // Utility function

#endif
