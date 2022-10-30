# [Problem](https://projecteuler.net/problem=128) No. 128

## Hexagonal Tile Differences

A hexagonal tile with number 1 is surrounded by a ring of six hexagonal tiles, starting at "12 o'clock" and numbering the tiles 2 to 7 in an anti-clockwise direction.

New rings are added in the same fashion, with the next rings being numbered 8 to 19, 20 to 37, 38 to 61, and so on. The diagram below shows the first three rings.

<div align="center">
	<img src="https://user-images.githubusercontent.com/73425927/198836684-48f6d9e1-2861-4091-9d69-cf24a20c6d82.png">
</div>

By finding the difference between tile <var>n</var> and each of its six neighbours we shall define PD(<var>n</var>) to be the number of those differences which are prime.

For example, working clockwise around tile 8 the differences are 12, 29, 11, 6, 1, and 13. So PD(8) = 3.

In the same way, the differences around tile 17 are 1, 17, 16, 1, 11, and 10, hence PD(17) = 2.

It can be shown that the maximum value of PD(<var>n</var>) is 3.

If all of the tiles for which PD(<var>n</var>) = 3 are listed in ascending order to form a sequence, the 10<sup>th</sup> tile would be 271.

Find the 2000<sup>th</sup> tile in this sequence.
