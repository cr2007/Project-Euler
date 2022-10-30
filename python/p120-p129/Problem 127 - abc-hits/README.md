# [Problem](https://projecteuler.net/problem=127) No. 127

## abc-hits

The radical of $n$, rad($n$) is the product of distinct prime factors of $n$.<br>
For example, $504 = 2^3 \times 3^2 \times 7$, so $rad(504) = 2 \times 3 \times 7 = 42$.

We shal define, the triplet of positive integers (<var>a</var>, <var>b</var>, <var>c</var>) to be an **abc-hit** if:

1. GCD(<var>a</var>, <var>b</var>) = GCD(<var>a</var>, <var>c</var>) = GCD(<var>b</var>, <var>c</var>) = 1
2. $a < b$
3. $a + b = c$
4. $rad(abc) < c$

(GCD $\rightarrow$ **G**reatest **C**ommon **D**ivisor)

For example, (5, 27, 32) is an abc-hit, because:
1. GCD(5, 27) = GCD(5, 32) = GCD(27, 32) = 1
2. 5 < 27
3. 5 + 27 = 32
4. rad(4320) = 30 < 32

It turns out that **abc-hits** are quite rare and there are only thirty-one abc-hits for $c < 1000$, with $\sum c = 12523$.

Find $\sum c$ for $c < 120\ 000$.
