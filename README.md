# sort
Static library of sorting algorithms written in C99 (or C89 if you replace stdbool.h)

# Formal specification
Sorting algorithm is a function &fnof;:X&map;Y which as input takes a list a.k.a array and outputs a specific permutation
of the list where each element is in ascending(or descending) order

## Input

X: {(a<sub>n</sub>) &isin; &#8484;<sup>n</sup> | n &isin; &#8469;<sub>0</sub>}

## Output

Y: {&pi; &isin; S(a<sub>n</sub>) | &forall;<sub>m &isin; {x &isin; &#8469;<sub>0</sub> | 0 &le; x &le; n-1}</sub> &pi;(m) < &pi;(m+1) }

# Stability
Algorithm which does not change order of elements with the same value.
Any sorting algorithm can be made stable. 
Stability can be achieved by taking index of elements into consideration.
This change can be acheved with little impact on efficency and some extra space, most likely &#1012;(n).

# In-place
Algorithm using constant extra space a.k.a O(1).

# Comparison-based
Algorithm comparing elements of array with each other placing it either to left or right to find the sorted array. 
This operations can be represented by binary tree a.k.a decision tree where each node is a single comparison. 
Each possible case of order of n elements is n! 
this means that comparision-based sorting tree has to have at least n! leafs to represent each case of order at least once. 
Any binary tree of height h has to have at least 2<sup>h</sup> leafs.
This leaves us whith following inequality:

* 2<sup>h</sup> &ge; n!
* h &ge; log<sub>2</sub>(n!)

From Stirling approximation we know that:

* n! > (n&divide;<i>e</i>)<sup>n</sup>

Which implies that:

* h &ge; log(n&divide;<i>e</i>)<sup>n</sup>
  * log(n&divide;<i>e</i>)<sup>n</sup> 
  * = n log(n&divide;<i>e</i>)
  * = n log n - n log <i>e</i>
  * = &Omega;(n log n)

At each level of the tree comparison halves the number of future comparisons 
and algorithm doesn't look into the wrong part of tree which means that the algorithm performs O(log n!) comparisons   

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
