# Push_swap

Push_swap is a project that challenges you to sort data on a stack with a limited set of instructions while minimizing the number of actions. This project involves manipulating various algorithms to choose the most efficient solution for optimized data sorting.

---

## Features
- **Two Stacks**: Utilizes two stacks, `a` and `b`, for sorting operations.
- **Sorting Instructions**: Implements a variety of stack operations to sort data.
- **Efficiency**: Focuses on sorting with the fewest possible actions.

### Sorting Instructions
- `sa` (swap a): Swap the first two elements at the top of stack `a`.
- `sb` (swap b): Swap the first two elements at the top of stack `b`.
- `ss`: Perform `sa` and `sb` simultaneously.
- `pa` (push a): Take the first element at the top of `b` and put it at the top of `a`.
- `pb` (push b): Take the first element at the top of `a` and put it at the top of `b`.
- `ra` (rotate a): Shift all elements of stack `a` up by one.
- `rb` (rotate b): Shift all elements of stack `b` up by one.
- `rr`: Perform `ra` and `rb` simultaneously.
- `rra` (reverse rotate a): Shift all elements of stack `a` down by one.
- `rrb` (reverse rotate b): Shift all elements of stack `b` down by one.
- `rrr`: Perform `rra` and `rrb` simultaneously.

### Program Arguments
The program should take the following arguments:
- A list of integers to be sorted, with the first argument being at the top of stack `a`.

### Error Handling
The program should handle errors gracefully and display "Error" followed by a newline on the standard error in cases such as:
- Non-integer arguments.
- Arguments that exceed the integer limits.
- Duplicate arguments.

---

## Compilation

To compile Push_swap, use the provided Makefile. The Makefile includes the following rules:
- `all`: Compile the source files.
- `clean`: Remove object files.
- `fclean`: Remove all generated files.
- `re`: Recompile the project.

---

## Programming Languages:
<p align="left">
  <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="C" width="40" height="40"/>
</p>

---


## Acknowledgments

- [42 School](https://42.fr/)

---
