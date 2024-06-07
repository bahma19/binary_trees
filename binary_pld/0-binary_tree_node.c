#include"binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: this is a pointer to the parent node to create
 * @value: this is the value to thr new node
 *
 * Return: a pointer to the new node or null on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node  == Null)
		return (NULL);
	new_node->n = vlaue;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
