# [Problem](https://projecteuler.net/problem=122) No. 122

## Efficient Exponentiation

The most naive way of computing <var>n</var><sup>15</sup> requires fourteen multiplications:

$$
n \times n \times ... \times n = n^{15}
$$

But using a "binary" method you can compute it in six multiplications:

$$
n \times n = n^2\\
n^2 \times n^2 = n^4\\
n^4 \times n^4 = n^8\\
n^8 \times n^4 = n^{12}\\
n^{12} \times n^2 = n^{14}\\
n^{14} \times n = n^{15}\\
$$

However, it is yet possible to compute it in only five multiplications:

$$
n \times n = n^2\\
n^2 \times n = n^3\\
n^3 \times n^3 = n^6\\
n^6 \times n^6 = n^{12}\\
n^{12} \times n^3 = n^{15}
$$

We shall define m(<var>k</var>) to be the minimum number of multiplications to compute <var>n</var><sup><var>k</var></sup>; for example m(15) = 5.

For 1 $\leq$ <var>k</var> $\leq$ 200, find $\sum$ m(<var>k</var>).
