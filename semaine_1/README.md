# ARM Reverse Engineering — Week 1

## Objective

These exercises are designed to help you understand the relationship between a
C program and the ARM assembly code generated when it is compiled. By examining
the assembly, registers, memory, and execution flow, you should be able to:

- understand a program's behavior and, if possible, reconstruct its C
  equivalent;
- or, when exact reconstruction is not required, determine the final result
  of a function or program.

The exercises were completed on paper. **This repository does not contain the
solutions.** The C files describe the programs to study; the `.o` and `.elf`
files are compilation or analysis artifacts, not solutions.

## Exercises

| File | Concepts to examine |
| --- | --- |
| `01_fonction.c` | Passing two parameters, addition, return values, and calling a function from `main`. |
| `02_calcul.c` | A sequence of arithmetic operations and tracking intermediate values. |
| `02_conditions.c` | Comparisons, conditional branches, and choosing a result based on age. |
| `02_complexe_if.c` | Nested conditions, execution paths, and different return values. |
| `03_boucle.c` | A `for` loop: initialization, condition check, increment, and sum accumulation. |
| `03_while.c` | The same kind of accumulation expressed with a `while` loop. |
| `03_fonction_piege.C` | Tracking a function and its local variables; determine the result of the call shown in the file. |
| `04_appels.c` | Nested function calls, passing one function's result to another, and the final return value. |
| `05_structures.c` | Arrays, structures, element access, and data in memory. The program then enters an infinite loop. |
| `06_nop_practice.c` | A global `volatile` variable, comparison, and analysis of the generated binary; the program ends in an infinite loop. |

## Suggested approach

For each exercise:

1. Read the C code and identify its parameters, variables, conditions, loops,
   and return values.
2. Follow the assembly in execution order. Identify arithmetic instructions,
   comparisons, branches, memory accesses, and function calls.
3. Track register and variable values at each step, accounting for the
   parameters passed and the value returned by each function.
4. Reconstruct the control flow, then write the corresponding pseudocode or C.
   If you only need the result, calculate it by following the path that is
   actually executed.
5. Compare your reasoning with the provided C code, without assuming that the
   compiler preserves variable names or translates each source line into a
   separate instruction.

The infinite loops in the embedded exercises are intentional: they keep the
program in its final state instead of letting it continue after `main`.

## Supporting files

- `startup.s` contains the ARM startup entry point: it calls `main`, then
  remains in a loop.
- `linker.ld` describes the FLASH and RAM memory regions and the placement of
  the program's sections.
- `.o` files are object files; `.elf` files are executables or variants used
  for analysis. They can be examined with a disassembler or a tool such as
  Ghidra.
- `starting.gpr` and `starting.rep/` contain the Ghidra project files.

## Questions to consider

- Where are a function's parameters passed, and where is its return value
  retrieved?
- Which assembly instructions correspond to addition, comparison, a condition,
  or an iteration?
- Which branch paths are possible, and which one is taken for the given values?
- How are arrays and structure fields addressed in memory?
- Can the original C code be recovered exactly from the binary, or only its
  behavior?
