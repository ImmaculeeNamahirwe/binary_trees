#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures.
 * the depth of a node in a binary tree.
 * @tree: Is the pointer to the node to measure the depth.
 * Return: Tree is NULL, the function must return 0.
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->parent == NULL))
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
