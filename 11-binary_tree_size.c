#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree(no. of nodes).
 * @tree: pointer to the root node.
 * Return: 0(tree is NULL) else number.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
