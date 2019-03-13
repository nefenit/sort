# sort
Written in C99 (or C89 if you replace stdbool.h)

# Problem of sorting
There is n! different permutations of n element array.
In decision tree there is at least n! leafes, it is a binary tree with height of at least log<sub>2</sub>(n!).
log(n!) = O(n log n) means that decisin tree must do O(n log n) comparissons.

## Versions

| File          | Name(s)                                                                           |   Stable    | Comparison-based | Algorithmic Paradigm | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Worst Space Complexity |
|:--------------|:----------------------------------------------------------------------------------|:-----------:|:----------------:|:---------------------|:---------------------|:------------------------|:----------------------|:----------------------:|
| bead.c        | Bead, Gravity                                                                     | -           | No               |                      |                      |                         |                       |
| bitonic.c     |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| block.c       |                                                                                   | Yes         | Yes              |                      |                      |                         |                       |
| bogo.c        |                                                                                   | No          | Yes              | Trial & Error        |                      |                         |                       |
| bozo.c        |                                                                                   | No          | Yes              | Trial & Error        |                      |                         |                       |
| bubble.c      | Bubble, Sinking                                                                   | Yes         | Yes              |                      |                      |                         |                       |
| bucket.c      |                                                                                   | Yes         | No               |                      |                      |                         |                       |
| burst.c       |                                                                                   | No          | No               |                      |                      |                         |                       |
| cocktail.c    | Cocktail shaker, Bidirectional bubble, Cocktail, Shaker, Ripple, Shuffle, Shuttle | Yes         | Yes              |                      |                      |                         |                       |
| comb.c        |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| counting.c    |                                                                                   | Yes         | No               |                      |                      |                         |                       |
| cube.c        |                                                                                   | Yes         | Yes              |                      |                      |                         |                       |
| cycle.c       |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| flash.c       |                                                                                   | No          | No               |                      |                      |                         |                       |
| gnome.c       |                                                                                   | Yes         | Yes              |                      |                      |                         |                       |
| heap.c        |                                                                                   | No          | Yes              | Divide & Conquer     |                      |                         |                       |
| insertion.c   |                                                                                   | Yes         | Yes              |                      |                      |                         |                       |
| intro.c       |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| library.c     |                                                                                   | Yes         | Yes              |                      |                      |                         |                       |
| merge.c       |                                                                                   | Yes         | Yes              | Divide & Conquer     |                      |                         |                       |                        
| miracle.c     | Miracle, Lucky                                                                    | ?           | Yes              | Trial & Error        | O(1)                 | O(infinity)             | O(infinity)           | O(1)                   |
| oddeven.c     | Odd–even, Odd–even transposition, Brick                                           | Yes         | Yes              |                      |                      |                         |                       |
| pancake.c     |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| patience.c    |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| permutation.c |                                                                                   |             |                  | Trial & Error        |                      |                         |                       |
| pigeonhole.c  |                                                                                   | Yes         | No               |                      |                      |                         |                       |
| postman.c     |                                                                                   | -           | No               |                      |                      |                         |                       |
| radix.c       |                                                                                   | Yes*        | No               |                      |                      |                         |                       |
| selection.c   |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| shell.c       |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| spaghetti.c   |                                                                                   | Yes         | -                |                      |                      |                         |                       |
| spread.c      |                                                                                   | No          | No               |                      |                      |                         |                       |
| stooge.c      |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| strand.c      |                                                                                   | Yes         | Yes              |                      |                      |                         |                       |
| sleep.c       |                                                                                   |             |                  |                      |                      |                         |                       |
| smooth.c      |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| stooge.c      |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| tim.c         |                                                                                   | Yes         | Yes              |                      |                      |                         |                       |
| tournament.c  |                                                                                   | No          | Yes              |                      |                      |                         |                       |
| tree.c        | Binary tree                                                                       | Yes         | Yes              |                      |                      |                         |                       |
| quick.c       |                                                                                   | No*         | Yes              | Divide & Conquer     |                      |                         |                       |
