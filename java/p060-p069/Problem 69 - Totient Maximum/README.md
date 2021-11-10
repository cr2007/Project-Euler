# [Problem](https://projecteuler.net/problem=69) No. 69
<!-- Nice -->

## Totient Maximum

Euler's Totient function, φ(<var>n</var>) [sometimes called the phi function], is used to determine the number of numbers less than <var>n</var> which are relatively prime to <var>n</var>.<br>
For example, as 1, 2, 4, 5, 7, and 8, are all less than nine and relatively prime to nine, φ(9)=6.


<table>
    <tr align="center">
        <td><b><var>n</var></b></td>
        <td><b>Relatively Prime</b></td>
        <td><b>φ(<var>n</var>)</b></td>
        <td><b><var>n</var>/φ(<var>n</var>)</b></td>
    </tr>
    <tr align="center">
        <td>2</td>
        <td>1</td>
        <td>1</td>
        <td>2</td>
    </tr>
    <tr align="center">
        <td>3</td>
        <td>1, 2</td>
        <td>2</td>
        <td>1.5</td>
    </tr>
    <tr align="center">
        <td>4</td>
        <td>1, 3</td>
        <td>2</td>
        <td>2</td>
    </tr>
    <tr align="center">
        <td>5</td>
        <td>1, 2, 3, 4</td>
        <td>4</td>
        <td>1.25</td>
    </tr>
    <tr align="center">
        <td>6</td>
        <td>1, 5</td>
        <td>2</td>
        <td>3</td>
    </tr>
    <tr align="center">
        <td>7</td>
        <td>1, 2, 3, 4, 5, 6</td>
        <td>6</td>
        <td>1.1666...</td>
    </tr>
    <tr align="center">
        <td>8</td>
        <td>1, 3, 5, 7</td>
        <td>4</td>
        <td>2</td>
    </tr>
    <tr align="center">
        <td>9</td>
        <td>1, 2, 4, 5, 7, 8</td>
        <td>6</td>
        <td>1.5</td>
    </tr>
    <tr align="center">
        <td>10</td>
        <td>1, 3, 7, 9</td>
        <td>4</td>
        <td>2.5</td>
    </tr>
</table>
<br>

It can be seen that <var>n</var> = 6 produces a maximum <var>n</var>/φ(<var>n</var>) for <var>n</var> ≤ 10.

Find the value of <var>n</var> ≤ 1,000,000 for which <var>n</var>/φ(<var>n</var>) is a maximum.
