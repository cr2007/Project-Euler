# [Problem](https://projecteuler.net/problem=65) No. 65

## Convergents of e

The square root of 2 can br written as an infinite continued fraction.

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B2%7D%20%3D%201%20%2B%20%5Cfrac%7B1%7D%7B2%20%2B%20%5Cfrac%7B1%7D%7B2%2B%5Cfrac%7B1%7D%7B2%2B%5Cfrac%7B1%7D%7B2%2B...%7D%7D%7D%7D%0D">

<!-- $$
\sqrt{2} = 1 + \frac{1}{2 + \frac{1}{2+\frac{1}{2+\frac{1}{2+...}}}}
$$ --> 

The infinite continued fraction can be written, <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B2%7D%20%3D%20%5B1%3B%5C%20(2)%5D%2C%5C%20(2)%0D"> indicates that 2 repeats *ad infinitum* (i.e. forever).<br>
In a similar way, <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B23%7D%20%3D%20%5B4%3B%5C%20(1%2C3%2C1%2C8)%5D%0D"> .

<!-- $$
\sqrt{2} = [1;\ (2)],\ (2)
$$ -->

<!-- $$
\sqrt{23} = [4;\ (1,3,1,8)]
$$ -->

It turns out that the sequence of partial values of continued fractions for square roots provide the best rational approximations.<br>
Let us consider the convergents for <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B2%7D%0D"> .

<!-- $$
\sqrt{2}
$$ --> 

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%2B%5Cfrac%7B1%7D%7B2%7D%20%3D%20%5Cfrac%7B3%7D%7B2%7D%0D">

<!-- $$
1+\frac{1}{2} = \frac{3}{2}
$$ --> 

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%2B%20%5Cfrac%7B1%7D%7B2%20%2B%20%5Cfrac%7B1%7D%7B2%7D%7D%20%3D%20%5Cfrac%7B7%7D%7B5%7D%0D">

<!-- $$
1 + \frac{1}{2 + \frac{1}{2}} = \frac{7}{5}
$$ -->

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%2B%20%5Cfrac%7B1%7D%7B2%20%2B%20%5Cfrac%7B1%7D%7B2%20%2B%20%5Cfrac%7B1%7D%7B2%7D%7D%7D%20%3D%20%5Cfrac%7B17%7D%7B12%7D%0D">

<!-- $$
1 + \frac{1}{2 + \frac{1}{2 + \frac{1}{2}}} = \frac{17}{12}
$$ -->

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%2B%20%5Cfrac%7B1%7D%7B2%20%2B%20%5Cfrac%7B1%7D%7B2%20%2B%20%5Cfrac%7B1%7D%7B2%2B%5Cfrac%7B1%7D%7B2%7D%7D%7D%7D%20%3D%20%5Cfrac%7B41%7D%7B29%7D%0D">
<br>
<br>

<!-- $$
1 + \frac{1}{2 + \frac{1}{2 + \frac{1}{2+\frac{1}{2}}}} = \frac{41}{29}
$$ --> 

Hence the sequence of the first ten convergents for <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B2%7D%0D"> are:

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%2C%20%5Cfrac%7B3%7D%7B2%7D%2C%20%5Cfrac%7B7%7D%7B5%7D%2C%20%5Cfrac%7B17%7D%7B12%7D%2C%20%5Cfrac%7B41%7D%7B29%7D%2C%20%5Cfrac%7B99%7D%7B70%7D%2C%20%5Cfrac%7B239%7D%7B169%7D%2C%20%5Cfrac%7B577%7D%7B408%7D%2C%20%5Cfrac%7B1393%7D%7B985%7D%2C%20%5Cfrac%7B3363%7D%7B2378%7D%2C%5C%20...%0D">
<br>
<br>
<!-- $$
1, \frac{3}{2}, \frac{7}{5}, \frac{17}{12}, \frac{41}{29}, \frac{99}{70}, \frac{239}{169}, \frac{577}{408}, \frac{1393}{985}, \frac{3363}{2378},\ ...
$$ --> 

What is most surprising is that the important mathematical constant,

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=e%20%3D%20%5B2%3B%5C%201%2C%202%2C%201%2C%201%2C%204%2C%201%2C%201%2C%206%2C%201%2C%5C%20...%5C%20%2C1%2C%202k%2C%201%2C%5C%20...%5D%0D">
<br>
<br>

<!-- $$
e = [2;\ 1, 2, 1, 1, 4, 1, 1, 6, 1,\ ...\ ,1, 2k, 1,\ ...]
$$ -->

The first ten terms in the sequence of convergents for <img src="https://render.githubusercontent.com/render/math?math=e%0D"> are:

<!-- $$
e
$$ -->

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=2%2C%203%2C%20%5Cfrac%7B8%7D%7B3%7D%2C%20%5Cfrac%7B11%7D%7B4%7D%2C%20%5Cfrac%7B19%7D%7B7%7D%2C%20%5Cfrac%7B87%7D%7B32%7D%2C%20%5Cfrac%7B106%7D%7B39%7D%2C%20%5Cfrac%7B193%7D%7B71%7D%2C%20%5Cfrac%7B1264%7D%7B465%7D%2C%20%5Cfrac%7B1457%7D%7B536%7D%2C%5C%20...%0D">

<!-- $$
2, 3, \frac{8}{3}, \frac{11}{4}, \frac{19}{7}, \frac{87}{32}, \frac{106}{39}, \frac{193}{71}, \frac{1264}{465}, \frac{1457}{536},\ ...
$$ -->

The sum of digits in the numerator of the 10<sup>th</sup> convergent is 1 + 4 + 5 + 7 = 17 .

Find the sum of digits in the numerator of the 100<sup>th</sup> convergent of the continued fraction for <img src="https://render.githubusercontent.com/render/math?math=e%0D">.
