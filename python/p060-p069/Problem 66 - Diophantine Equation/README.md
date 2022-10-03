# [Problem](https://projecteuler.net/problem=66) No. 66

## Diophantine Equation

Consider quadratic Diophantine equations of the form:

$$
x^2 - Dy^2 = 1
$$

For example, when D = 13, the minimal solution in <var>x</var> is 649<sup>2</sup> - 13 × 180<sup>2</sup> = 1.

It can be assumed that there are no solutions in positive integers when D is square.

By finding minimal solutions in <var>x</var> for D = {2, 3, 5, 6, 7}, we obtain the following:

$$
3^2 - 2 \times 2^2 = 1\\
2^2 - 3 \times 1^2 = 1\\
\bold{\color{red}{9}}^2 - 5 \times 4^2 = 1\\
5^2 - 6 \times 2^2 = 1\\
7^2 - 7 \times 3^2 = 1
$$

<!-- 3<sup>2</sup> - 2 × 2<sup>2</sup> = 1<br>
2<sup>2</sup> - 3 × 1<sup>2</sup> = 1<br>
<b>9</b><sup>2</sup> - 5 × 4<sup>2</sup> = 1<br>
5<sup>2</sup> - 6 × 2<sup>2</sup> = 1<br>
8<sup>2</sup> - 7 × 3<sup>2</sup> = 1 -->

Hence, by considering minimal solutions in <var>x</var> for D ≤ 7, the largest <var>x</var> is obtained when D = 5.

Find the value of D ≤ 1000 in minimal solutions of <var>x</var> for which the largest value of <var>x</var> is obtained.
