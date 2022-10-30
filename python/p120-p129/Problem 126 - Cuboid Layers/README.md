# [Problem](https://projecteuler.net/problem=126) No. 126

## Cuboid Layers

The minimum number of cubes to cover every visible face on a cuboid measuring 3 x 2 x 1 is **twenty-two**.

<div align="center">
	<img alt="p126.png" src="https://user-images.githubusercontent.com/73425927/193729108-c5918aed-7728-4c6d-b66b-f5edc42cdc76.png">
</div>

If we then add a second layer to this solid it would require forty-six cubes to cover every visible face, the third layer would require seventy-eight cubes,<br>
and the fourth layer would require one-hundred and eighteen cubes to cover every visible face.

However, the first layer on a cuboid measuring 5 x 1 x 1 also requires twenty-two cubes;<br>
similarly the first layer on cuboids measuring 5 x 3 x 1, 7 x 2 x 1, and 11 x 1 x 1 all contain forty-six cubes.

We shall define C(<var>n</var>) to represent the number of cuboids that contain <var>n</var> cubes in one of its layers.<br>
So C(22) = 2, C(46) = 4, C(78) = 5, and C(118) = 8.

It turns out that 154 is the least value of <var>n</var> for which C(<var>n</var>) = 10.

Find the least value of <var>n</var> for which C(<var>n</var>) = 1000.
