# Stack Implementation in C

This repository contains a simple implementation of a stack data structure in the C programming language.

## Overview

A stack is a linear data structure that follows the Last-In, First-Out (LIFO) principle.  Think of it like a stack of plates: you can only add a plate to the top, and you can only remove the top plate.  This implementation provides the basic operations for managing a stack:

-   **Push:** Adds an element to the top of the stack.
-   **Pop:** Removes the element at the top of the stack.
-   **Display:** Shows the current elements in the stack.

## Code Description

The core of the implementation is in `stakcs.c`.  Here's a breakdown:

-   `MAXSIZE`:  A preprocessor directive that defines the maximum number of elements the stack can hold (currently set to 5).
-   `stack`: An integer array representing the stack.
-   `top`:  An integer variable that holds the index of the top element in the stack.  It is initialized to -1, indicating an empty stack.
-   `push(int stack[], int *top, int value)`:  This function adds a `value` to the top of the `stack`.
    -   It first checks for stack overflow (if `top` is already at the maximum size).
    -   If there's space, it increments `top` and then stores the `value` at `stack[*top]`.
-   `pop(int stack[], int *top)`:  This function removes the element at the top of the `stack`.
    -   It first checks for stack underflow (if `top` is -1, meaning the stack is empty).
    -   If there are elements, it retrieves the top element, decrements `top`, and "removes" the element.
-   `display(int stack[], int top)`:  This function prints the contents of the stack.
    -   If the stack is empty, it prints "Stack is empty".
    -   Otherwise, it iterates through the stack from the bottom (index 0) to the top (index `top`) and prints each element.
-   `main()`:
    -   Initializes the `stack` and `top`.
    -   Presents a menu-driven interface to the user, allowing them to choose between push, pop, display, or exit operations.
    -   Calls the appropriate functions based on the user's choice.

## How to Compile and Run

1.  **Save:** Save the code as `stakcs.c`.
2.  **Compile:** Open a terminal or command prompt and use a C compiler (like GCC) to compile the code:
    ```bash
    gcc stakcs.c -o stakcs
    ```
    * Make sure you have GCC installed. If you are on a Unix/Linux system, you can check by typing `gcc --version` in your terminal.  If it is not installed, you can install it using your system's package manager (e.g., `sudo apt-get install gcc` on Debian/Ubuntu, `sudo yum install gcc` on Fedora/CentOS).  If you are on Windows, you can download and install MinGW or use WSL.
3.  **Run:** Execute the compiled program:
    ```bash
    ./stakcs
    ```
## What will show up in the terminal:
![Image](https://github.com/user-attachments/assets/101ce90d-f5ba-49a9-8f1e-7e64952b0bc1)
