# [Problem](https://projecteuler.net/problem=109) No. 109

## Darts

In the game of darts a player throws three darts at a target board which is split into twenty equal sized sections numbered one to twenty.

<div align="center">
	<img src="https://user-images.githubusercontent.com/73425927/170833741-8e1eda47-584f-42ff-8d1a-1567d1d204b7.png" alt="p109.png">
</div>

The score of a dart is determined by the number of the region that the dart lands in.<br>
A dart landing outside the red/green outer ring scores zero.<br>
The black and cream regions inside this ring represent single scores. However, the red/green outer ring and middle ring score double and treble scores respectively.

At the centre of the board are two concentric circles called the bull region, or bulls-eye. The outer bull is worth 25 points and the inner bull is a double, worth 50 points.

There are many variations of rules but in the most popular game the players will begin with a score 301 or 501 and the first player to reduce their running total to zero is a winner.<br>
However, it is normal to play a "doubles out" system, which means that the player must land a double (including the double bulls-eye at the centre of the board) on their final dart to win; any other dart that would reduce their running total to one or lower means the score for that set of three darts is "bust".

When a player is able to finish on their current score it is called a "checkout" and the highest checkout is 170: T20 T20 D25 (two treble 20s and double bull).

There are exactly eleven distinct ways to checkout on a score of 6:

<div align="center">
	<table>
		<tr>
			<td>D3</td>
		</tr>
		<tr>
			<td>D1</td>
			<td>D2</td>
		</tr>
		<tr>
			<td>S2</td>
			<td>D2</td>
		</tr>
		<tr>
			<td>D2</td>
			<td>D1</td>
		</tr>
		<tr>
			<td>S4</td>
			<td>D1</td>
		</tr>
		<tr>
			<td>S1</td>
			<td>S1</td>
			<td>D2</td>
		</tr>
		<tr>
			<td>S1</td>
			<td>T1</td>
			<td>D1</td>
		</tr>
		<tr>
			<td>S1</td>
			<td>S3</td>
			<td>D1</td>
		</tr>
		<tr>
			<td>D1</td>
			<td>D1</td>
			<td>D1</td>
		</tr>
		<tr>
			<td>D1</td>
			<td>S2</td>
			<td>D1</td>
		</tr>
		<tr>
			<td>S2</td>
			<td>S2</td>
			<td>D1</td>
		</tr>
	</table>
</div>

Note that D1 D2 is considered **different** to D2 D1 as they finish on different doubles.<br>
However, the combination S1 T1 D1 is considered the **same** as T1 S1 D1.

In addition we shall not include misses in considering combinations; for example, D3 is the **same** as 0 D3 and 0 0 D3.

Incredibly there are 42336 distinct ways of checking out in total.

How many distinct ways can a player checkout with a score less than 100?
