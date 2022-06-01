# [Problem](https://projecteuler.net/problem=103) No. 103

## Special Subset Sums: Optimum

Let S(A) represent the sum of elements in set A of size <var>n</var>.<br>
We shall call it a special sum set if for any two non-empty disjoint subsets, B and C, the following properties are true:

1. S(B) ≠ S(C); that is, sums of subsets cannot be equal
2. If B contains more elements than C, then S(B) > S(C)

If S(A) is minimised for a given n, we shall call it an optimum special sum set. The first five optimum special sum sets are given below.

n = 1: {1}<br>
n = 2: {1, 2}<br>
n = 3: {2, 3, 4}<br>
n = 4: {3, 5, 6, 7}<br>
n = 5: {6, 9, 11, 12, 13}

It *seems* that for a given optimum set, A = {<var>a</var><sub>1</sub>, <var>a</var><sub>2</sub>, ... , <var>a</var><sub><var>n</var></sub>}, the next optimum set is of the form B = {<var>b</var>, <var>a</var><sub>1</sub>+<var>b</var>, <var>a</var><sub>2</sub>+<var>b</var>, ... ,<var>a</var><sub><var>n</var></sub>+<var>b</var>}, where <var>b</var> is the "middle" element on the previous row.

By applying this "rule" we would expect the optimum set for <var>n</var> = 6 to be A = {11, 17, 20, 22, 23, 24}, with S(A) = 117.<br>
However, this is not the optimum set, as we have merely applied an algorithm to provide a near optimum set.<br>
The optimum set for <var>n</var> = 6 is A = {11, 18, 19, 20, 22, 25}, with S(A) = 115 and corresponding set string: 111819202225.

Given that A is an optimum special sum set for <var>n</var> = 7, find its set string.

##### NOTE: This problem is related to [Problem 105](..%5CProblem%20105%20-%20Special%20Subset%20Sums-Testing) and [Problem 106](../Problem%20106%20-%20Special%20Subset%20Sums-Meta-Testing)
