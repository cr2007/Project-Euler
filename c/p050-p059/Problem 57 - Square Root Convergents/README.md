# [Problem](https://projecteuler.net/problem=57) No. 57

## Square Root Convergents

It is possible to show that the square root of two can be expressed as an infinite continued fraction. 

<div align="center">
    <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Csqrt%7B2%7D%20%3D%201%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20...%7D%7D%7D%0D">
</div>

<!-- $$
\sqrt{2} = 1 + \dfrac{1}{2 + \dfrac{1}{2 + \dfrac{1}{2 + ...}}}
$$ -->

By expanding this for the first four iterations, we get: 

<!-- $$
1 + \dfrac{1}{2} = \dfrac{3}{2} = 1.5
$$ -->


<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%2B%20%5Cdfrac%7B1%7D%7B2%7D%20%3D%20%5Cdfrac%7B3%7D%7B2%7D%20%3D%201.5%0D">

<br>
<br>
<!-- $$
1 + \dfrac{1}{2 + \dfrac{1}{2}} = \dfrac{7}{5}
 = 1.4
$$ --> 

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20%5Cdfrac%7B1%7D%7B2%7D%7D%20%3D%20%5Cdfrac%7B7%7D%7B5%7D%0D%0A%20%3D%201.4%0D">

<br>
<br>

<!-- $$
1 + \dfrac{1}{2 + \dfrac{1}{2 + \dfrac{1}{2}}} = \dfrac{17}{12} = 1.41666...
$$ --> 

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20%5Cdfrac%7B1%7D%7B2%7D%7D%7D%20%3D%20%5Cdfrac%7B17%7D%7B12%7D%20%3D%201.41666...%0D">

<br>
<br>

<!-- $$
1 + \dfrac{1}{2 + \dfrac{1}{2 + \dfrac{1}{2 + \dfrac{1}{2}}}} = \dfrac{41}{29} = 1.41379...
$$ --> 

<img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20%5Cdfrac%7B1%7D%7B2%20%2B%20%5Cdfrac%7B1%7D%7B2%7D%7D%7D%7D%20%3D%20%5Cdfrac%7B41%7D%7B29%7D%20%3D%201.41379...%0D">

The next three expansions are <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cfrac%7B99%7D%7B70%7D%0D">, <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cfrac%7B239%7D%7B169%7D%0D">, and <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cfrac%7B577%7D%7B408%7D%0D">, but the eighth expansion, <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cfrac%7B1393%7D%7B985%7D%0D">, is the first example where the first number of digits in the numerator exceeds the number of digits in the denominator.

<!-- $$
\frac{99}{70}
$$ --> 

<!-- $$
\frac{239}{169}
$$ --> 

<!-- $$
\frac{577}{408}
$$ --> 

<!-- $$
\frac{1393}{985}
$$ --> 

In the first one-thousand expansions, how many fractions contain a numerator with more digits than the denominator?
