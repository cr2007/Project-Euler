# [Problem](https://projecteuler.net/problem=82) No. 82

## Path Sum: Three Ways

NOTE: This problem is a more challenging version of [Problem 81](../Problem%2081%20-%20Path%20Sum%20-%20Two%20Ways).

The minimal path sum in the 5 by 5 matrix below, by starting in any cell in the left column and finishing in any cell in the right column, and only moving up, down, and right, is indicated in red and bold; the sum is equal to 994.

<!-- $$
\begin{pmatrix}
131 & 673 & \color{red}{234} & \color{red}{103} & \color{red}{18}\\
\color{red}{201} & \color{red}{96} & \color{red}{342} & 965 & 150\\
630 & 803 & 746 & 422 & 111\\
537 & 699 & 497 & 121 & 956\\
805 & 732 & 524 & 37 & 331
\end{pmatrix}
$$ --> 

<div align="center">
    <img style="background: white;" src="https://render.githubusercontent.com/render/math?math=%5Cbegin%7Bpmatrix%7D%0D%0A131%20%26%20673%20%26%20%5Ccolor%7Bred%7D%7B234%7D%20%26%20%5Ccolor%7Bred%7D%7B103%7D%20%26%20%5Ccolor%7Bred%7D%7B18%7D%5C%5C%0D%0A%5Ccolor%7Bred%7D%7B201%7D%20%26%20%5Ccolor%7Bred%7D%7B96%7D%20%26%20%5Ccolor%7Bred%7D%7B342%7D%20%26%20965%20%26%20150%5C%5C%0D%0A630%20%26%20803%20%26%20746%20%26%20422%20%26%20111%5C%5C%0D%0A537%20%26%20699%20%26%20497%20%26%20121%20%26%20956%5C%5C%0D%0A805%20%26%20732%20%26%20524%20%26%2037%20%26%20331%0D%0A%5Cend%7Bpmatrix%7D%0D">
</div>

Find the minimal path sum from the left column to the right column in [matrix.txt](p082_matrix.txt), a 31K text file containing an 80 by 80 matrix.
