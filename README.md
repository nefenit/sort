# sort
Written in C99 (or C89 if you replace stdbool.h)

# Formal specification

## Input

X: {(a<sub>n</sub>) &isin; &#8484;<sup>n</sup> | n &isin; &#8469;<sub>0</sub>}

## Output

Y: one specific "sorted" (a<sub>n</sub>) &isin; S<sub></sub>(a<sub>n</sub>)


# Problem of sorting
There is n! different permutations of n element array.
In decision tree there is at least n! leafes, it is a binary tree with height of at least log<sub>2</sub>(n!).
log(n!) = O(n log n) means that decisin tree must do O(n log n) comparissons.

# Stability
Does not change order of elements with the same value.
Any sorting algorithm can be made stable. 
Stability can be achieved by taking index of elements into consideration.
This change can be acheved with little impact on efficency and some extra space, most likely &#1012;(n).

# In-place
Algorithm uses constant extra space a.k.a O(1).

# Comparison-based
Algorithm comparing elements of array with each other to find the sorted array.

# Legend
Complexity is noted in Big O notation

| Term | Description                          |
|:-----|:-------------------------------------|
| S    | Stability                            |
| CB   | Comparison-based                     |
| AP   | Algorithmic Paradigm                 |
| T&E  | Trial & Error                        |
| D&C  | Divide & Conquer                     |
| BTC  | Best Time Complexity                 |
| ATC  | Average Time Complexity              |
| WTC  | Worst Time Complexity                |
| WSC  | Worst Space Complexity (extra space) |

## Versions

| File          | Name(s)                                                                           | S | CB | AP  |   BTC   | ATC | WTC | WSC |
|:--------------|:----------------------------------------------------------------------------------|:-:|:--:|:----|:--------|:----|:----|:---:|
| bead.c        | Bead, Gravity                                                                     | - | N  |     |                      |                         |                       |
| bitonic.c     |                                                                                   | N | Y  |     |                      |                         |                       |
| block.c       |                                                                                   | Y | Y  |     | n       | n log n | n log n | 1 |
| bogo.c        |                                                                                   | N | Y  | T&E |                      |                         |                       |
| bozo.c        |                                                                                   | N | Y  | T&E |                      |                         |                       |
| bubble.c      | Bubble, Sinking                                                                   | Y | Y  |     |                      |                         |                       |
| bucket.c      |                                                                                   | Y | N  |     |                      |                         |                       |
| burst.c       |                                                                                   | N | N  |     |                      |                         |                       |
| cocktail.c    | Cocktail shaker, Bidirectional bubble, Cocktail, Shaker, Ripple, Shuffle, Shuttle | Y | Y  |     | n       | n<sup>2</sup> | n<sup>2</sup> | 1 |
| comb.c        |                                                                                   | N | Y  |     | n log n | n<sup>2</sup> | n<sup>2</sup> | 1 |
| counting.c    |                                                                                   | Y | N  |     |                      |                         |                       |
| cube.c        |                                                                                   | Y | Y  |     |                      |                         |                       |
| cycle.c       |                                                                                   | N | Y  |     |                      |                         |                       |
| flash.c       |                                                                                   | N | N  |     |                      |                         |                       |
| gnome.c       | Gnome, Stupid                                                                     | Y | Y  |     | n       | n<sup>2</sup> | n<sup>2</sup> | 1 |
| heap.c        |                                                                                   | N | Y  | D&C |                      |                         |                       |
| insertion.c   |                                                                                   | Y | Y  |     |                      |                         |                       |
| intro.c       |                                                                                   | N | Y  |     |                      |                         |                       |
| library.c     |                                                                                   | Y | Y  |     |                      |                         |                       |
| merge.c       |                                                                                   | Y | Y  | D&C |                      |                         |                       |                        
| miracle.c     | Miracle, Lucky                                                                    | ? | Y  | T&E | 1       | inf           | inf          | 1 |
| oddeven.c     | Odd–even, Odd–even transposition, Brick                                           | Y | Y  |     | n       | n<sup>2</sup> | n<sup>2</sup> | 1 |
| pancake.c     |                                                                                   | N | Y  |     |                      |                         |                       |
| patience.c    |                                                                                   | N | Y  |     |                      |                         |                       |
| permutation.c |                                                                                   |   |    | T&E |                      |                         |                       |
| pigeonhole.c  |                                                                                   | Y | N  |     |                      |                         |                       |
| postman.c     |                                                                                   | - | N  |     |                      |                         |                       |
| radix.c       |                                                                                   | D | N  |     |                      |                         |                       |
| selection.c   |                                                                                   | N | Y  |     |                      |                         |                       |
| shell.c       |                                                                                   | N | Y  |     |                      |                         |                       |
| spaghetti.c   |                                                                                   | Y | -  |     |                      |                         |                       |
| spread.c      |                                                                                   | N | N  |     |                      |                         |                       |
| stooge.c      |                                                                                   | N | Y  |     |                      |                         |                       |
| strand.c      |                                                                                   | Y | Y  |     | n       | n<sup>2</sup> | n<sup>2</sup> | n |
| sleep.c       |                                                                                   |   |    |     |                      |                         |                       |
| smooth.c      |                                                                                   | N | Y  |     | n       | n log n | n log n | 1 |
| stooge.c      |                                                                                   | N | Y  |     |                      |                         |                       |
| tim.c         |                                                                                   | Y | Y  |     |                      |                         |                       |
| tournament.c  |                                                                                   | N | Y  |     | n log n | n log n        | n log n | n |                       |
| tree.c        | Binary tree                                                                       | Y | Y  |     |                      |                         |                       |
| quick.c       |                                                                                   | N | Y  | D&C |                      |                         |                       |
