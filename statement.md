# lab01-stack

Simulate a LIFO stack of integers.

## Input
- Line 1: integer `N` — the number of operations.
- Next `N` lines: each is either
  - `push X` — push integer `X` onto the stack, or
  - `pop` — remove and report the value on top of the stack.

## Output
For each `pop` operation, print the value removed from the top of the stack on
its own line. If the stack is empty when `pop` is issued, print `-1`.

## Example
Input:
```
5
push 3
push 7
pop
pop
pop
```
Output:
```
7
3
-1
```
