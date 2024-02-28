# Language Theory Repository

This repository contains code related to language theory.

## Context-Free Grammar

The repository includes a C program that defines a simple context-free grammar and generates words according to that grammar. The grammar is defined as follows:

    S -> aA
    A -> bA | cA | d

In this grammar, `S` is the start symbol, `a`, `b`, `c`, and `d` are terminals, and `A` is a non-terminal.

### Code

The code for generating words according to the grammar is written in C. It uses the `rand()` function to randomly choose between the productions for `A`.

### Usage

To run the code, compile the C file and run the resulting executable. The program will output words generated according to the grammar.


   ```bash
   gcc -o main *.c
   ```

   ```bash
   ./main
   ```

## Contributing

Contributions are welcome. Please open an issue or submit a pull request.


