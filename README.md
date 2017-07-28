[![Holberton logo](https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png)](https://www.holbertonschool.com/)
# 0x1C. C - Binary trees

### Authors: Carrie Ybay [<img src="https://user-images.githubusercontent.com/23224088/27935507-4e614b68-6260-11e7-8b20-d0352ef3ff53.png" height="18px"/>](https://twitter.com/hicarrie_) and Elaine Yeung [<img src="https://user-images.githubusercontent.com/23224088/27935507-4e614b68-6260-11e7-8b20-d0352ef3ff53.png" height="18px"/>](https://twitter.com/egsy)

## Synopsis
This project explores and applies the concept of binary tree data structures.
![image](https://user-images.githubusercontent.com/23224088/28692010-b5ac9718-72d3-11e7-8af0-0731060c9f13.png)

### At the end of this project students should be able to explain to anyone, **without the help of Google**:
*   What is a binary tree
*   What is the difference between a binary tree and a Binary Search Tree
*   What is the possible gain in terms of time complexity compared to linked lists
*   What are the depth, the height, the size of a binary tree
*   What are the different traversal methods to go through a binary tree
*   What is a complete, a full, a perfect, a balanced binary tree

### Resources
*   Read [Binary tree](https://en.wikipedia.org/wiki/Binary_tree) -> note the first line: `Not to be confused with B-tree.`
*   Also read [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm), [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm) and [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
*   Watch [this video](https://www.youtube.com/watch?v=H5JubkIy_p8)

### Project Requirements
*   Allowed editors: `vi`, `vim`, `emacs`
*   All your files will be compiled on Ubuntu 14.04 LTS
*   Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
*   All your files should end with a new line
*   A `README.md` file, at the root of the folder of the project, is mandatory
*   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
*   You are not allowed to use global variables
*   No more than 5 functions per file
*   You are allowed to use the standard library
*   In the following examples, the `main.c` files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one showed in the examples
*   The prototypes of all your functions should be included in your header file called `binary_trees.h`
*   Don't forget to push your header file
*   All your header files should be include guarded

### Data structures

Please use the following data structures and types for binary trees. Don't forget to include them in your header file.

#### Basic Binary Tree

```C
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
 struct binary_tree_s
 {
	 int n;
	 struct binary_tree_s *parent;
	 struct binary_tree_s *left;
	 struct binary_tree_s *right;
 };

 typedef struct binary_tree_s binary_tree_t;
```

#### Binary Search Tree

```C
typedef struct binary_tree_s bst_t;
```

#### AVL Tree
```C
typedef struct binary_tree_s avl_t;
```

#### Max Binary Heap
```C
typedef struct binary_tree_s heap_t;
```

### Print function
To match the examples in the tasks, you are given [this function](https://github.com/holbertonschool/0x1C.c)
This function is used only for visualisation purpose. You don't have to push it to your repo. It may not be used during the correction

## Project Breakdown
Task # | Type | Short description | File name and link |
---: | --- | --- | --- |
 0  | **Mandatory** |<p>Write a function that creates a binary tree node</p><ul><li>Prototype: <code>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);</code></li><li>Where <code>parent</code> is a pointer to the parent node of the node to create</li><li>And <code>value</code> is the value to put in the new node</li><li>When created, a node does not have any child</li><li>Your function must return a pointer to the new node, or <code>NULL</code> on failure</li></ul>                                                                                                                                                       | [0-binary_tree_node.c       ](./0-binary_tree_node.c)
 1  | **Mandatory** |<p>Write a function that inserts a node as the left-child of another node</p><ul><li>Prototype: <code>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);</code></li><li>Where <code>parent</code> is a pointer to the node to insert the left-child in</li><li>And <code>value</code> is the value to store in the new node</li><li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li><li>If <code>parent</code> already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.</li></ul>         |	[1-binary_tree_insert_left.c](./1-binary_tree_insert_left.c)
 2  | **Mandatory** |<p>Write a function that inserts a node as the right-child of another node</p><ul><li>Prototype: <code>binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);</code></li><li>Where <code>parent</code> is a pointer to the node to insert the right-child in</li><li>And <code>value</code> is the value to store in the new node</li><li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li><li>If <code>parent</code> already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.</li></ul>   |	[2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c)
 3  | **Mandatory** |<p>Write a function that deletes an entire binary tree</p><ul><li>Prototype: <code>void binary_tree_delete(binary_tree_t *tree);</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to delete</li></ul>                                                                                                                                                                                                                                                                                                                                                                                                  |	[3-binary_tree_delete.c     ](./3-binary_tree_delete.c)
 4  | **Mandatory** |<p>Write a function that checks if a node is a leaf</p><ul><li>Prototype: <code>int binary_tree_is_leaf(const binary_tree_t *node);</code></li><li>Where <code>node</code> is a pointer to the node to check</li><li>Your function must return <code>1</code> if <code>node</code> is a leaf, and <code>0</code> otherwise</li><li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li></ul>                                                                                                                                                                                                                          |	[4-binary_tree_is_leaf.c    ](./4-binary_tree_is_leaf.c)
 5  | **Mandatory** |<p>Write a function that checks if a given node is a root</p><ul><li>Prototype: <code>int binary_tree_is_root(const binary_tree_t *node);</code></li><li>Where <code>node</code> is a pointer to the node to check</li><li>Your function must return <code>1</code> if <code>node</code> is a root, and <code>0</code> otherwise</li><li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li></ul>                                                                                                                                                                                                                    |	[5-binary_tree_is_root.c    ](./5-binary_tree_is_root.c)
 6  | **Mandatory** |<p>Write a function that goes through a binary tree using pre-order traversal</p><ul><li>Prototype: <code>void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li><li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li></ul>                                                                                                                                                                                        |	[6-binary_tree_preorder.c   ](./6-binary_tree_preorder.c)
 7  | **Mandatory** |<p>Write a function that goes through a binary tree using in-order traversal</p><ul><li>Prototype: <code>void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li><li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li></ul>                                                                                                                                                                                          |	[7-binary_tree_inorder.c    ](./7-binary_tree_inorder.c)
 8  | **Mandatory** |<p>Write a function that goes through a binary tree using post-order traversal</p><ul><li>Prototype: <code>void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li><li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li></ul>                                                                                                                                                                                      |	[8-binary_tree_postorder.c  ](./8-binary_tree_postorder.c)
 9  | **Mandatory** |<p>Write a function that measures the height of a binary tree</p><ul><li>Prototype: <code>size_t binary_tree_height(const binary_tree_t *tree);</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to measure the height of</li><li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li></ul>                                                                                                                                                                                                                                                                        |	[9-binary_tree_height.c     ](./9-binary_tree_height.c)
10  | **Mandatory** |<p>Write a function that measures the depth of a node in a binary tree</p><ul><li>Prototype: <code>size_t binary_tree_depth(const binary_tree_t *node);</code></li><li>Where <code>tree</code> is a pointer to the node to measure the depth of</li><li>If <code>node</code> is <code>NULL</code>, your function must return <code>0</code></li></ul>                                                                                                                                                                                                                                                                                  |	[10-binary_tree_depth.c     ](./10-binary_tree_depth.c)
11  | **Mandatory** |<p>Write a function that measures the size of a binary tree</p><ul><li>Prototype: <code>size_t binary_tree_size(const binary_tree_t *tree);</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to measure the size of</li></ul>                                                                                                                                                                                                                                                                                                                                                                          |	[11-binary_tree_size.c      ](./11-binary_tree_size.c)
12  | **Mandatory** |<p>Write a function that counts the leaves in a binary tree</p><ul><li>Prototype: <code>size_t binary_tree_leaves(const binary_tree_t *tree);</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to count the leaves in</li><li>A <code>NULL</code> pointer is not a leaf</li></ul>                                                                                                                                                                                                                                                                                                                      |	[12-binary_tree_leaves.c    ](./12-binary_tree_leaves.c)
13  | **Mandatory** |<p>Write a function that counts the nodes with at least 1 child in a binary tree</p><ul><li>Prototype: <code>size_t binary_tree_nodes(const binary_tree_t *tree);</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to count the nodes in</li><li>A <code>NULL</code> pointer is not a node</li></ul>                                                                                                                                                                                                                                                                                                   |	[13-binary_tree_nodes.c     ](./13-binary_tree_nodes.c)
14  | **Mandatory** |<p>Write a function that measures the balance factor of a binary tree</p><ul><li>Prototype: <code>int binary_tree_balance(const binary_tree_t *tree);</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to measure the balance factor of</li><li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li></ul>                                                                                                                                                                                                                                                                             |	[14-binary_tree_balance.c   ](./14-binary_tree_balance.c)
15  | **Mandatory** |<p>Write a function that checks if a binary tree is full</p><ul><li>Prototype: <code>int binary_tree_is_full(const binary_tree_t *tree);</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to check</li><li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li></ul>                                                                                                                                                                                                                                                                                               |	[15-binary_tree_is_full.c   ](./15-binary_tree_is_full.c)
16  | **Mandatory** |<p>Write a function that checks if a binary tree is perfect</p><ul><li>Prototype: <code>int binary_tree_is_perfect(const binary_tree_t *tree);</code></li><li>Where <code>tree</code> is a pointer to the root node of the tree to check</li><li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li></ul>                                                                                                                                                                                                                                                                                         |	[16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c)
17  | **Mandatory** |<p>Write a function that finds the sibling of a node</p><ul><li>Prototype: <code>binary_tree_t *binary_tree_sibling(binary_tree_t *node);</code></li><li>Where <code>node</code> is a pointer to the node to find the sibling of</li><li>Your function must return a pointer to the sibling node</li><li>If <code>node</code> has no sibling, return <code>NULL</code></li></ul>                                                                                                                                                                                                                                                       |	[17-binary_tree_sibling.c   ](./17-binary_tree_sibling.c)
18  | **Mandatory** |<p>Write a function that finds the uncle of a node</p><ul><li>Prototype: <code>binary_tree_t *binary_tree_uncle(binary_tree_t *node);</code></li><li>Where <code>node</code> is a pointer to the node to find the uncle of</li><li>Your function must return a pointer to the uncle node</li><li>If <code>node</code> has no uncle, return <code>NULL</code></li></ul>                                                                                                                                                                                                                                                                 |	[18-binary_tree_uncle.c     ](./18-binary_tree_uncle.c)
