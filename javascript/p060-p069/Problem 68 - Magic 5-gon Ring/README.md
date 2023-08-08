# [Problem](https://projecteuler.net/problem=68) No. 68

## Magic 5-gon Ring

Consider the following "magic" 3-gon ring, filled with the numbers 1 to 6, and each line adding to nine.

<div align="center">
    <img alt="p068 Image of 3-gon ring" src="https://user-images.githubusercontent.com/73425927/140612137-3bb739f0-951d-4d7b-9a85-6f30f2031f83.png">
</div>

Working **clockwise**, and starting from the group of three with the numerically lowest external node (4,3,2 in this example), each solution can be described uniquely.<br>
For example, the above solution can be described by the set: 4,3,2; 6,2,1; 5,1,3.

It is possible to complete the ring with four different totals: 9, 10, 11, and 12.<br>
There are eight solutions in total.

<table>
    <tr>
        <td align="center"><b>Total</b></td>
        <td></td>
        <td align="center"><b>Solution Set</b></td>
    </tr>
        <td>9</td>
        <td></td>
        <td>4,2,3; 5,3,1; 6,1,2</td>
    </tr>
    </tr>
        <td>9</td>
        <td></td>
        <td>4,3,2; 5,3,1; 6,1,2</td>
    </tr>
    <tr>
        <td>10</td>
        <td></td>
        <td>2,3,5; 4,5,1; 6,1,3</td>
    </tr>
    <tr>
        <td>10</td>
        <td></td>
        <td>2,5,3; 6,3,1; 4,1,5</td>
    </tr>
    <tr>
        <td>11</td>
        <td></td>
        <td>1,4,6; 3,6,2; 5,2,4</td>
    </tr>
    <tr>
        <td>11</td>
        <td></td>
        <td>1,6,4; 5,4,2; 3,2,6</td>
    </tr>
    <tr>
        <td>12</td>
        <td></td>
        <td>1,5,6; 2,6,4; 3,4,5</td>
    </tr>
    <tr>
        <td>12</td>
        <td></td>
        <td>1,6,5; 3,5,4; 2,4,6</td>
    </tr>
</table>
<br>

By concatenating each group it is possible to form 9-digit strings; the maximum string for a 3-gon ring is 432621513.

Using the numbers 1 to 10, and depending on arrangements, it is possible to form 16- and 17-digit strings. What is the maximum **16-digit** string for a "magic" 5-gon ring?

<div align="center">
    <img alt="magic 5-gon ring" src="https://user-images.githubusercontent.com/73425927/140633773-0b269468-40b3-46b6-89ce-0e8fdb30c3cd.png">
</div>
