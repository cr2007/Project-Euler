# [Problem](https://projecteuler.net/problem=53) No. 53

## Combinatoric Selections

There are exactly ten ways of selecting three from five, 12345:

<div align="center">
123, 124, 125, 134, 135, 145, 234, 235, 245, and 345
</div>
<br>

In combinatorics, we use the notation

<div align="center"><img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle%20%5Cbinom%205%203%20%3D%2010%0D"></div>

<!-- LaTeX Format
$$
\displaystyle \binom 5 3 = 10
$$ --> 

In general, 

<div align="center"><img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle%20%5Cbinom%20n%20r%20%3D%20%5Cdfrac%7Bn!%7D%7Br!(n-r)!%7D%0D"></div>

<!-- LaTeX Format 
$$
\displaystyle \binom n r = \dfrac{n!}{r!(n-r)!}
$$ --> 

where <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=r%20%5Cle%20n%0D">, <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=n!%20%3D%20n%20%5Ctimes%20(n-1)%20%5Ctimes%20...%20%5Ctimes%203%20%5Ctimes%202%20%5Ctimes%201%0D">, and <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=0!%20%3D%201%0D">.

<!-- $$
n! = n \times (n-1) \times ... \times 3 \times 2 \times 1
$$ --> 

<!-- $$
0! = 1
$$ --> 

<!-- $$
r \le n
$$ --> 

It is not until <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=n=23">, that a value exceeds one-million: <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle%20%5Cbinom%20%7B23%7D%20%7B10%7D%20%3D%201144066%0D">.

<!-- $$
\displaystyle \binom {23} {10} = 1144066
$$ --> 



<!-- $$
{23 \choose 10} = 1144066
$$ -->

How many, not necessarily distinct, values of <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle%20%5Cbinom%20n%20r%0D"> for <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%5Cle%20n%20%5Cle%20100%0D">, are greater than one-million?

<!-- $$
\displaystyle \binom n r
$$ --> 

<!-- $$
1 \le n \le 100
$$ -->
