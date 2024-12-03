# Binary Trees

## Overview

This repository contains functions and programs for working with binary trees. It includes implementations for common operations such as finding a node's sibling, uncle, and other related tasks. The project is written in C and adheres to specific coding standards.

## Repository Structure

- **binary_trees.h**: Header file containing function prototypes and data structure definitions.
- **0-binary_tree_node.c**: Function to create a binary tree node.
- **17-binary_tree_sibling.c**: Function to find the sibling of a node.
- **18-binary_tree_uncle.c**: Function to find the uncle of a node.
- **binary_tree_print.c**: Helper function to print binary trees (used for visualization).
- **17-main.c**: Test file for the sibling function.
- **18-main.c**: Test file for the uncle function.

## Requirements

- **Language**: C
- **Compiler**: GCC 4.8 or higher with flags `-Wall -Wextra -Werror -pedantic`.
- All files must end with a new line.
- Function prototypes are defined in `binary_trees.h`.
- The code adheres to the [Betty coding style](https://github.com/holbertonschool/Betty/wiki).

## How to Compile

Compile all files together to test functionality. For example:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle

Author
Your Dzeble Kwame
GitHub: DzeBakuEso
Email: dzeblebaku@gmail.com
