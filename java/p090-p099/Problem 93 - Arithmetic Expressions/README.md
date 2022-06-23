# [Problem](https://projecteuler.net/problem=93) No. 93

## Arithmetic Expressions

By using each of the digits from the set, {1, 2, 3, 4}, exactly once, and making use of the four arithmetic operations (+, −, *, /) and brackets/parentheses, it is possible to form different positive integer targets.

For example,

$$
8 = \frac{4 * (1 + 3)}{2}\\
$$

<!-- <div align="center">
    <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=8%20%3D%20%5Cfrac%7B(4%20*%20(1%20%2B%203))%7D%7B2%7D%5C%5C%0D">
</div> -->

$$
14 = 4 * (3+\frac{1}{2})
$$

<!-- <div align="center">
    <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=14%20%3D%204%20*%20(3%2B%5Cfrac%7B1%7D%7B2%7D)%0D">
</div> -->

$$
19 = 4 * (2 + 3) - 1
$$

<!-- <div align="center">
    <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=19%20%3D%204%20*%20(2%20%2B%203)%20-%201%0D">
</div> -->

$$
36 = 3 * 4 * (2+1)
$$

<!-- <div align="center">
    <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=36%20%3D%203%20*%204%20*%20(2%2B1)%0D">
</div> -->

Note that concatenations of the digits, like 12 + 34, are not allowed.

Using the set, {1, 2, 3, 4}, it is possible to obtain thirty-one different target numbers of which 36 is the maximum, and each of the numbers 1 to 28 can be obtained before encountering the first non-expressible number.

Find the set of four distinct digits, <var>a</var> < <var>b</var> < <var>c</var> < <var>d</var>, for which the longest set of consecutive positive integers, 1 to <var>n</var>, can be obtained, giving your answer as a string: <var>abcd</var>.
