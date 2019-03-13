# sort
Sorting algorithms

# Problem of sorting
There is n! different permutations of n element array.
In decision tree there is at least n! leafes, it is a binary tree with height of at least log<sub>2</sub>(n!).
log(n!) = O(n log n) means that decisin tree must do O(n log n) comparissons.

## Versions

| File          | Stable |  Complexity            | Time Complexity  | Memory Complexity  | Algorithmic Paradigm |
|:--------------|:------:|:-----------------------|:-----------------|--------------------|:---------------------|
| bubble.c      | Yes    | O(n<sup>2</sup>)       | O(n<sup>2</sup>) | O(1)               |                      |
| cocktail.c    |        | O(n<sup>2</sup>)       |                  |                    |                      |
| selection.c   | No     | O(n<sup>2</sup>)       |                  |                    |                      |
| insertion.c   | Yes    | O(n<sup>2</sup>)       | O(n<sup>2</sup>) | O(1)               |                      |
| quickhoare.c  | No     | O(n log n)             |                  |                    |                      |
| quicklomuto.c | No     | O(n log n)             |                  |                    |                      |
| bogo.c        | No     | O(n!)                  | Av. O((n-1)!)    | O(n)               | Trial & Error        |
| merge.c       | Yes    | O(n log n)             | O(n log n)       | O(n)               | Divide & Conquer     |
| bucket.c      | Yes    | O(n)                   | Wrst.O(n^2)      | O(n)               |                      |
| radix.c       | Yes    | O(n)                   |                  |                    |                      |
| counting.c    | Yes    | O(n)                   | O(n + k)         | O(n) or O(n + k)   |                      |
| library.c     | Yes    |                        |                  |                    |                      |
| shell.c       | No     | O(n log<sup>2</sup> n) |                  |                    |                      |
| comb.c        | No     | O(n<sup>2</sup>)       |                  |                    |                      |
| intro.c       | No     |                        |                  |                    |                      |
| heap.c        | No     | O(n log n)             |                  |                    |                      |
| bozo.c        |        |                        |                  |                    | Trial & Error        |
| gnome.c       |        | O(n<sup>2</sup>)       |                  |                    |                      |
| strand.c      |        | O(n<sup>2</sup>)       |                  |                    |                      |
| bead.c        |        |                        |                  |                    |                      |
| pancake.c     |        |                        |                  |                    |                      |
| permutation.c |        |                        |                  |                    | Trial & Error        |
| sleep.c       |        |                        |                  |                    |                      |
| stooge.c      |        |                        |                  |                    |                      |
