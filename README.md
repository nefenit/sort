# sort
Written in C99 (or C89 if you replace stdbool.h)

# Problem of sorting
There is n! different permutations of n element array.
In decision tree there is at least n! leafes, it is a binary tree with height of at least log<sub>2</sub>(n!).
log(n!) = O(n log n) means that decisin tree must do O(n log n) comparissons.

# Stability
Does not change order of elements with the same value.
Any sorting algorithm can be made stable. 
Stability can be achieved by taking index of elements into consideration.
This change can be acheved with little impact on efficency and some extra space, most likely Θ(n).

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

| File          | Name(s)                                                                           |  S  | CB  | AP  |   BTC   | ATC | WTC | WSC |
|:--------------|:----------------------------------------------------------------------------------|:---:|:---:|:----|:--------|:----|:----|:---:|
| bead.c        | Bead, Gravity                                                                     | -   | No  |     |                      |                         |                       |
| bitonic.c     |                                                                                   | No  | Yes |     |                      |                         |                       |
| block.c       |                                                                                   | Yes | Yes |     | n       | n log n | n log n | 1 |
| bogo.c        |                                                                                   | No  | Yes | T&E |                      |                         |                       |
| bozo.c        |                                                                                   | No  | Yes | T&E |                      |                         |                       |
| bubble.c      | Bubble, Sinking                                                                   | Yes | Yes |     |                      |                         |                       |
| bucket.c      |                                                                                   | Yes | No  |     |                      |                         |                       |
| burst.c       |                                                                                   | No  | No  |     |                      |                         |                       |
| cocktail.c    | Cocktail shaker, Bidirectional bubble, Cocktail, Shaker, Ripple, Shuffle, Shuttle | Yes | Yes |     | n       | n<sup>2</sup> | n<sup>2</sup> | 1 |
| comb.c        |                                                                                   | No  | Yes |     | n log n | n<sup>2</sup> | n<sup>2</sup> | 1 |
| counting.c    |                                                                                   | Yes | No  |     |                      |                         |                       |
| cube.c        |                                                                                   | Yes | Yes |     |                      |                         |                       |
| cycle.c       |                                                                                   | No  | Yes |     |                      |                         |                       |
| flash.c       |                                                                                   | No  | No  |     |                      |                         |                       |
| gnome.c       |                                                                                   | Yes | Yes |     | n       | n<sup>2</sup> | n<sup>2</sup> | 1 |
| heap.c        |                                                                                   | No  | Yes | D&C |                      |                         |                       |
| insertion.c   |                                                                                   | Yes | Yes |     |                      |                         |                       |
| intro.c       |                                                                                   | No  | Yes |     |                      |                         |                       |
| library.c     |                                                                                   | Yes | Yes |     |                      |                         |                       |
| merge.c       |                                                                                   | Yes | Yes | D&C |                      |                         |                       |                        
| miracle.c     | Miracle, Lucky                                                                    | ?   | Yes | T&E | 1       | infinity      | infinity      | 1 |
| oddeven.c     | Odd–even, Odd–even transposition, Brick                                           | Yes | Yes |     | n       | n<sup>2</sup> | n<sup>2</sup> | 1 |
| pancake.c     |                                                                                   | No  | Yes |     |                      |                         |                       |
| patience.c    |                                                                                   | No  | Yes |     |                      |                         |                       |
| permutation.c |                                                                                   |     |     | T&E |                      |                         |                       |
| pigeonhole.c  |                                                                                   | Yes | No  |     |                      |                         |                       |
| postman.c     |                                                                                   | -   | No  |     |                      |                         |                       |
| radix.c       |                                                                                   | Depends | No  |     |                      |                         |                       |
| selection.c   |                                                                                   | No  | Yes |     |                      |                         |                       |
| shell.c       |                                                                                   | No  | Yes |     |                      |                         |                       |
| spaghetti.c   |                                                                                   | Yes | -   |     |                      |                         |                       |
| spread.c      |                                                                                   | No  | No  |     |                      |                         |                       |
| stooge.c      |                                                                                   | No  | Yes |     |                      |                         |                       |
| strand.c      |                                                                                   | Yes | Yes |     | n       | n<sup>2</sup> | n<sup>2</sup> | n |
| sleep.c       |                                                                                   |     |     |     |                      |                         |                       |
| smooth.c      |                                                                                   | No  | Yes |     | n       | n log n | n log n | 1 |
| stooge.c      |                                                                                   | No  | Yes |     |                      |                         |                       |
| tim.c         |                                                                                   | Yes | Yes |     |                      |                         |                       |
| tournament.c  |                                                                                   | No  | Yes |     | n log n | n log n        | n log n | n |                       |
| tree.c        | Binary tree                                                                       | Yes | Yes |     |                      |                         |                       |
| quick.c       |                                                                                   | No  | Yes | D&C |                      |                         |                       |
