#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to insert into the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL); // Returns NULL if allocation fails

	new_node->n = value; // Initializes the value of the node
	new_node->parent = parent; // Sets the parent of the node
	new_node->left = NULL; // Initializes the left child to NULL
	new_node->right = NULL; // Initializes the right child to NULL

	return (new_node); // Returns the pointer to the new node
}
