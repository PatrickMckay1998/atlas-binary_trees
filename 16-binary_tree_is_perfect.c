#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    while (tree && tree->parent)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth, leaf_level;

    if (tree == NULL)
    {
        return (0);
    }

    depth = binary_tree_depth(tree);
    leaf_level = binary_tree_depth(tree->left);

    return (binary_tree_is_perfect_recursive(tree, depth, 0, leaf_level));
}

int binary_tree_is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level, size_t leaf_level)
{
    if (tree == NULL)
    {
        return (1);
    }

    if (tree->left == NULL && tree->right == NULL)
    {
        return (level == leaf_level);
    }
    if (tree->left == NULL || tree->right == NULL)
    {
        return (0);
    }

    return (binary_tree_is_perfect_recursive(tree->left, depth, level + 1, leaf_level) &&
            binary_tree_is_perfect_recursive(tree->right, depth, level + 1, leaf_level));
}
