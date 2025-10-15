#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: parent node
 * @value: value of node
 * Return: new binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;
    newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
        return (NULL);
    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;
    return (newnode);
}
