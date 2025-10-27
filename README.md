# C - Sorting algorithms & Big O

Implements classic sorting algorithms in C and analyzes them using **Big O**.

## Goals
- Implement at least four sorting algorithms.
- Explain and compare their **time complexities** (best/average/worst).
- Understand stability and when to pick each algorithm.
- Practice reasoning with **Big O** and clean, testable C (Betty style).

## Data structures
We use the provided **doubly linked list** node:
```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
