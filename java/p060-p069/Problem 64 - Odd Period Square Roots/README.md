# [Problem](https://projecteuler.net/problem=64) No. 64

## Odd Period Square Roots

All square roots are **periodic** when written as continued fractions and can be written in the form:

$$
\sqrt{N} = a_0 + \dfrac{1}{a_1 + \frac{1}{a_2 + \frac{1}{a_3 + ...}}}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7BN%7D%20%3D%20a_0%20%2B%20%5Cdfrac%7B1%7D%7Ba_1%20%2B%20%5Cdfrac%7B1%7D%7Ba_2%20%2B%20%5Cdfrac%7B1%7D%7Ba_3%20%2B%20...%7D%7D%7D%0D"> -->

For example, let us consider $\sqrt{23}$:

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B23%7D%0D"> -->

$$
\sqrt{23} = 4 + \sqrt{23} - 4 = 4 + \frac{1}{\frac{1}{\sqrt{23}-4}} = 4 + \dfrac{1}{1 + \frac{\sqrt{23}-3}{7}}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B23%7D%20%3D%204%20%2B%20%5Csqrt%7B23%7D%20-%204%20%3D%204%20%2B%20%5Cdfrac%7B1%7D%7B%5Cdfrac%7B1%7D%7B%5Csqrt%7B23%7D-4%7D%7D%20%3D%204%20%2B%20%5Cdfrac%7B1%7D%7B1%20%2B%20%5Cdfrac%7B%5Csqrt%7B23%7D-3%7D%7B7%7D%7D%0D"> -->

If we continue, we would get the following expansion:

$$
\sqrt{23} = 4+\frac{1}{1 + \frac{1}{3 + \frac{1}{1 + \frac{1}{8 + ...}}}}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B23%7D%20%3D%204%2B%5Cdfrac%7B1%7D%7B1%20%2B%20%5Cdfrac%7B1%7D%7B3%20%2B%20%5Cdfrac%7B1%7D%7B1%20%2B%20%5Cdfrac%7B1%7D%7B8%20%2B%20...%7D%7D%7D%7D%0D"> -->


The process can be summarised as follows:

$$
\quad \quad a_0 = 4 \ , \ \frac{1}{\sqrt{23} - 4} = \frac{\sqrt{23} + 4}{7} = 1 + \frac{\sqrt{23} - 3}{7}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=a_0%20%3D%204%20%5C%20%2C%20%5C%20%5Cdfrac%7B1%7D%7B%5Csqrt%7B23%7D%20-%204%7D%20%3D%20%5Cdfrac%7B%5Csqrt%7B23%7D%20%2B%204%7D%7B7%7D%20%3D%201%20%2B%20%5Cdfrac%7B%5Csqrt%7B23%7D%20-%203%7D%7B7%7D%0D"> -->

$$
a_1 = 1 \ , \ \frac{7}{\sqrt{23} - 3} = \frac{7(\sqrt{23} + 3)}{14} = 3 + \frac{\sqrt{23} - 3}{2}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=a_1%20%3D%201%20%5C%20%2C%20%5C%20%5Cdfrac%7B7%7D%7B%5Csqrt%7B23%7D%20-%203%7D%20%3D%20%5Cdfrac%7B7(%5Csqrt%7B23%7D%20%2B%203)%7D%7B14%7D%20%3D%203%20%2B%20%5Cdfrac%7B%5Csqrt%7B23%7D%20-%203%7D%7B2%7D%0D"> -->

$$
a_2 = 3 \ , \ \frac{2}{\sqrt{23} - 3} = \frac{2(\sqrt{23} + 3)}{14} = 1 + \frac{\sqrt{23} - 4}{7}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=a_2%20%3D%203%20%5C%20%2C%20%5C%20%5Cdfrac%7B2%7D%7B%5Csqrt%7B23%7D%20-%203%7D%20%3D%20%5Cdfrac%7B2(%5Csqrt%7B23%7D%20%2B%203)%7D%7B14%7D%20%3D%201%20%2B%20%5Cdfrac%7B%5Csqrt%7B23%7D%20-%204%7D%7B7%7D%0D"> -->

$$
a_3 = 1 \ , \ \dfrac{7}{\sqrt{23}-4} = \dfrac{7(\sqrt{23} + 4)}{7} = 8 + \sqrt{23} - 4
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=a_3%20%3D%201%20%5C%20%2C%20%5C%20%5Cdfrac%7B7%7D%7B%5Csqrt%7B23%7D-4%7D%20%3D%20%5Cdfrac%7B7(%5Csqrt%7B23%7D%20%2B%204)%7D%7B7%7D%20%3D%208%20%2B%20%5Csqrt%7B23%7D%20-%204%0D"> -->

$$
a_4 = 8 \ , \ \dfrac{1}{\sqrt{23} - 4} = \dfrac{\sqrt{23}+4}{7} = 1 + \dfrac{\sqrt{23}-3}{7}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=a_4%20%3D%208%20%5C%20%2C%20%5C%20%5Cdfrac%7B1%7D%7B%5Csqrt%7B23%7D%20-%204%7D%20%3D%20%5Cdfrac%7B%5Csqrt%7B23%7D%2B4%7D%7B7%7D%20%3D%201%20%2B%20%5Cdfrac%7B%5Csqrt%7B23%7D-3%7D%7B7%7D%0D"> -->

$$
a_5 = 1 \ , \ \dfrac{7}{\sqrt{23}-3} = \dfrac{7(\sqrt{23}+3)}{14} = 3+\dfrac{\sqrt{23}-3}{2}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=a_5%20%3D%201%20%5C%20%2C%20%5C%20%5Cdfrac%7B7%7D%7B%5Csqrt%7B23%7D-3%7D%20%3D%20%5Cdfrac%7B7(%5Csqrt%7B23%7D%2B3)%7D%7B14%7D%20%3D%203%2B%5Cdfrac%7B%5Csqrt%7B23%7D-3%7D%7B2%7D%0D"> -->

$$
a_6 = 3 \ , \ \dfrac{2}{\sqrt{23}-3} = \dfrac{2(\sqrt{23}+3)}{14} = 1+\dfrac{\sqrt{23}-4}{7}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=a_6%20%3D%203%20%5C%20%2C%20%5C%20%5Cdfrac%7B2%7D%7B%5Csqrt%7B23%7D-3%7D%20%3D%20%5Cdfrac%7B2(%5Csqrt%7B23%7D%2B3)%7D%7B14%7D%20%3D%201%2B%5Cdfrac%7B%5Csqrt%7B23%7D-4%7D%7B7%7D%0D"> -->

$$
a_7 = 1 \ , \ \frac{7}{\sqrt{23}-4} = \frac{7(\sqrt{23} + 4)}{7} = 8+\sqrt{23}-4
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=a_7%20%3D%201%20%5C%20%2C%20%5C%20%5Cdfrac%7B7%7D%7B%5Csqrt%7B23%7D-4%7D%20%3D%20%5Cdfrac%7B7(%5Csqrt%7B23%7D%20%2B%204)%7D%7B7%7D%20%3D%208%2B%5Csqrt%7B23%7D-4%0D"> -->


It can be seen that the sequence is repeating. For conciseness, we use the notation $\sqrt{23} = [4; (1, 3, 1, 8)]$ , to indicate that the blocks (1, 3, 1, 8) repeats indefinitely.

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B23%7D%20%3D%20%5B4%3B%20(1%2C%203%2C%201%2C%208)%5D%0D"> -->

The first ten continued fraction representations of (irrational) square roots are:

$$
\quad \quad \sqrt{2} = [1;\ (2)],\ \text{period = 1}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B2%7D%20%3D%20%5B1%3B%5C%20(2)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%201%7D%0D"> -->

$$
\quad \quad \sqrt{3} = [1;\ (1,2)],\ \text{period = 2}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B3%7D%20%3D%20%5B1%3B%5C%20(1%2C2)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%202%7D%0D"> -->

$$
\quad \quad \sqrt{5} = [2;\ (4)],\ \text{period = 1}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B5%7D%20%3D%20%5B2%3B%5C%20(4)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%201%7D%20%0D"> -->

$$
\quad \quad \sqrt{6} = [2;\ (2, 4)],\ \text{period = 2}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B6%7D%20%3D%20%5B2%3B%5C%20(2%2C%204)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%202%7D%0D"> -->

$$
\quad \quad \sqrt{7} = [2;\ (1, 1, 1, 4)],\ \text{period = 4}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B7%7D%20%3D%20%5B2%3B%5C%20(1%2C%201%2C%201%2C%204)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%204%7D%0D"> -->

$$
\quad \quad \sqrt{8} = [2;\ (1, 4)],\ \text{period = 2}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B8%7D%20%3D%20%5B2%3B%5C%20(1%2C%204)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%202%7D%0D"> -->

$$
\quad \quad \sqrt{10} = [3;\ (6)],\ \text{period = 1}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B10%7D%20%3D%20%5B3%3B%5C%20(6)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%201%7D%0D"> -->

$$
\quad \quad \sqrt{11} = [3;\ (3,6)],\ \text{period = 2}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B11%7D%20%3D%20%5B3%3B%5C%20(3%2C6)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%202%7D%0D"> -->

$$
\quad \quad \sqrt{12} = [3;\ (2, 6)],\ \text{period = 2}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B12%7D%20%3D%20%5B3%3B%5C%20(2%2C%206)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%202%7D%0D"> -->

$$
\quad \quad \sqrt{13} = [3;\ (1, 1, 1, 1, 6)],\ \text{period = 5}
$$

<!-- <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B13%7D%20%3D%20%5B3%3B%5C%20(1%2C%201%2C%201%2C%201%2C%206)%5D%2C%5C%20%5Ctext%7Bperiod%20%3D%205%7D%0D"> -->

Exactly four continued fractions, for $N ≤ 13$, have an odd period.

How many continued fractions for $N ≤ 10\,000$ have an odd period?
