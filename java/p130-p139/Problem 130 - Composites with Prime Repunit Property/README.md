# [Problem](https://projecteuler.net/problem=130) No. 130

## Composites with Prime Repunit Property

A number consisting entirely of ones is called a **repunit**.

We shall define R(<var>k</var>) to be a repunit of length <var>k</var>; for example, R(6) = 111111.

Given that <var>n</var> is a positive integer and GCD(<var>n</var>, 10) = 1, it can be shown that there always exists a value, <var>k</var>, for which R(<var>k</var>) is divisible by <var>n</var>,<br>
and let A(<var>n</var>) be the least such value of <var>k</var>; for example, A(7) = 6 and A(41) = 5.

You are given that for all primes, <var>p</var> > 5, that <var>p</var> − 1 is divisible by A(<var>p</var>).<br>
For example, when <var>p</var> = 41, A(41) = 5, and 40 is divisible by 5.

However, there are rare composite values for which this is also true; the first five examples being 91, 259, 451, 481, and 703.

Find the sum of the first twenty-five composite values of <var>n</var> for which
GCD(<var>n</var>, 10) = 1 and <var>n</var> − 1 is divisible by A(<var>n</var>).
