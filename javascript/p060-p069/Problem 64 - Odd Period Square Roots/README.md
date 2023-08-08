# [Problem](https://projecteuler.net/problem=64) No. 64

## Odd Period Square Roots

All square roots are **periodic** when written as continued fractions and can be written in the form:

$$
\sqrt{N} = a_0 + \dfrac{1}{a_1 + \frac{1}{a_2 + \frac{1}{a_3 + ...}}}
$$

For example, let us consider $\sqrt{23}$:

$$
\sqrt{23} = 4 + \sqrt{23} - 4 = 4 + \frac{1}{\frac{1}{\sqrt{23}-4}} = 4 + \dfrac{1}{1 + \frac{\sqrt{23}-3}{7}}
$$

If we continue, we would get the following expansion:

$$
\sqrt{23} = 4+\frac{1}{1 + \frac{1}{3 + \frac{1}{1 + \frac{1}{8 + ...}}}}
$$

The process can be summarised as follows:

$$
\quad \quad a_0 = 4 \ , \ \frac{1}{\sqrt{23} - 4} = \frac{\sqrt{23} + 4}{7} = 1 + \frac{\sqrt{23} - 3}{7}
$$

$$
a_1 = 1 \ , \ \frac{7}{\sqrt{23} - 3} = \frac{7(\sqrt{23} + 3)}{14} = 3 + \frac{\sqrt{23} - 3}{2}
$$

$$
a_2 = 3 \ , \ \frac{2}{\sqrt{23} - 3} = \frac{2(\sqrt{23} + 3)}{14} = 1 + \frac{\sqrt{23} - 4}{7}
$$

$$
a_3 = 1 \ , \ \dfrac{7}{\sqrt{23}-4} = \dfrac{7(\sqrt{23} + 4)}{7} = 8 + \sqrt{23} - 4
$$

$$
a_4 = 8 \ , \ \dfrac{1}{\sqrt{23} - 4} = \dfrac{\sqrt{23}+4}{7} = 1 + \dfrac{\sqrt{23}-3}{7}
$$

$$
a_5 = 1 \ , \ \dfrac{7}{\sqrt{23}-3} = \dfrac{7(\sqrt{23}+3)}{14} = 3+\dfrac{\sqrt{23}-3}{2}
$$

$$
a_6 = 3 \ , \ \dfrac{2}{\sqrt{23}-3} = \dfrac{2(\sqrt{23}+3)}{14} = 1+\dfrac{\sqrt{23}-4}{7}
$$

$$
a_7 = 1 \ , \ \frac{7}{\sqrt{23}-4} = \frac{7(\sqrt{23} + 4)}{7} = 8+\sqrt{23}-4
$$

It can be seen that the sequence is repeating. For conciseness, we use the notation $\sqrt{23} = [4; (1, 3, 1, 8)]$ , to indicate that the blocks (1, 3, 1, 8) repeats indefinitely.

The first ten continued fraction representations of (irrational) square roots are:

$$
\quad \quad \sqrt{2} = [1;\ (2)],\ \text{period = 1}
$$

$$
\quad \quad \sqrt{3} = [1;\ (1,2)],\ \text{period = 2}
$$

$$
\quad \quad \sqrt{5} = [2;\ (4)],\ \text{period = 1}
$$

$$
\quad \quad \sqrt{6} = [2;\ (2, 4)],\ \text{period = 2}
$$

$$
\quad \quad \sqrt{7} = [2;\ (1, 1, 1, 4)],\ \text{period = 4}
$$

$$
\quad \quad \sqrt{8} = [2;\ (1, 4)],\ \text{period = 2}
$$

$$
\quad \quad \sqrt{10} = [3;\ (6)],\ \text{period = 1}
$$

$$
\quad \quad \sqrt{11} = [3;\ (3,6)],\ \text{period = 2}
$$

$$
\quad \quad \sqrt{12} = [3;\ (2, 6)],\ \text{period = 2}
$$

$$
\quad \quad \sqrt{13} = [3;\ (1, 1, 1, 1, 6)],\ \text{period = 5}
$$

Exactly four continued fractions, for $N ≤ 13$, have an odd period.

How many continued fractions for $N ≤ 10\,000$ have an odd period?
