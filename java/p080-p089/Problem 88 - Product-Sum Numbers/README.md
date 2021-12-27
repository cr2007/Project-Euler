# [Problem](https://projecteuler.net/problem=88) No. 88

## Product-Sum Numbers

A Natural number, N, that can be written as the sum and product of a given set of at least two natural numbers, { <var>a</var><sub>1</sub>, <var>a</var><sub>2</sub>, ..., <var>a</var><sub><var>k</var></sub> } is called a <b>product-sum number</b>:<br>
N = <var>a</var><sub>1</sub> + <var>a</var><sub>2</sub> + ... + <var>a</var><sub><var>k</var></sub> = <var>a</var><sub>1</sub> × <var>a</var><sub>2</sub> × ... × <var>a</var><sub><var>k</var></sub> .

For example, 6 = 1 + 2 + 3 = 1 × 2 × 3 .

For a given set of size, <var>k</var>, we shall call the smallest N with this property a minimal product-sum number. The minimal product-sum numbers for sets of size, <var>k</var> = 2, 3, 4, 5, and 6 are as follows.

<var>k</var>=2 : 4 = 2 × 2 = 2 + 2<br>
<var>k</var>=3 : 6 = 1 × 2 × 3 = 1 + 2 + 3<br>
<var>k</var>=4 : 8 = 1 × 1 × 2 × 4 = 1 + 1 + 2 + 4<br>
<var>k</var>=5 : 8 = 1 × 1 × 2 × 2 × 2 = 1 + 1 + 2 + 2 + 2<br>
<var>k</var>=6 : 12 = 1 × 1 × 1 × 1 × 2 × 6 = 1 + 1 + 1 + 1 + 2 + 6<br>

Hence for 2 ≤ <var>k</var> ≤ 6, the sum of all the minimal product-sum numbers is 4 + 6 + 8 + 12 = 30;<br>
note that 8 is only counted once in the sum.

In fact, as the complete set of minimal product-sum numbers for 2 ≤ <var>k</var> ≤ 12 is {4, 6, 8, 12, 15, 16}, the sum is 61.

What is the sum of all the minimal product-sum numbers for 2 ≤ <var>k</var> ≤ 12000 ?
