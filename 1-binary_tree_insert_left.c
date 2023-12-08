#include "binary_trees.h"

/**
 *  binary_tree_insert_left - inserts a node as the left-child of another node.
 *  @parent: pointer to the node to insert the left-child.
 *  @value: value to store in the new node.
 *
 *  Return: pointer to the new node or NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = parent->left;
	newNode->right = NULL;
	parent->left = newNode;

	if (newNode->left)
		newNode->left->parent = newNode;

	return (newNode);
}
