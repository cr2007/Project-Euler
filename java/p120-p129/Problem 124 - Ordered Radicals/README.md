# [Problem](https://projecteuler.net/problem=124) No. 124

## Ordered Radicals

The radical of <var>n</var>, rad(<var>n</var>), is the product of the distinct prime factors of <var>n</var>.<br>
For example, $504 = 2^3 \times 3^2 \times 7$, so $\text{rad}(504) = 2 \times 3 \times 7 = 42$.

If we calculate rad(<var>n</var>) for $1 \leq n \leq 10$, then sort them on rad(<var>n</var>), and on sorting on <var>n</var> if the radical values are equal, we get:

<table class="center">
	<tr>
		<th colspan="2">Unsorted</th>
		<td width="25px"> </td>
		<th colspan="3">Sorted</th>
	</tr>
	<tr>
		<th width="50"><var>n</var></th>
		<th class="w50">rad(<var>n</var>)</th>
		<td> </td>
		<th class="w50"><i>n</i></th>
		<th class="w50">rad(<i>n</i>)</th>
		<th class="w50">k</th>
	</tr>
	<tr>
		<td>1</td>
		<td>1</td>
		<td> </td>
		<td>1</td>
		<td>1</td>
		<td>1</td>
	</tr>
	<tr>
		<td>2</td>
		<td>2</td>
		<td> </td>
		<td>2</td>
		<td>2</td>
		<td>2</td>
	</tr>
	<tr>
		<td>3</td>
		<td>3</td>
		<td> </td>
		<td>4</td>
		<td>2</td>
		<td>3</td>
	</tr>
	<tr>
		<td>4</td>
		<td>2</td>
		<td> </td>
		<td>8</td>
		<td>2</td>
		<td>4</td>
	</tr>
	<tr>
		<td>5</td>
		<td>5</td>
		<td> </td>
		<td>3</td>
		<td>3</td>
		<td>5</td>
	</tr>
	<tr>
		<td>6</td>
		<td>6</td>
		<td> </td>
		<td>9</td>
		<td>3</td>
		<td>6</td>
	</tr>
	<tr>
		<td>7</td>
		<td>7</td>
		<td> </td>
		<td>5</td>
		<td>5</td>
		<td>7</td>
	</tr>
	<tr>
		<td>8</td>
		<td>2</td>
		<td> </td>
		<td>6</td>
		<td>6</td>
		<td>8</td>
	</tr>
	<tr>
		<td>9</td>
		<td>3</td>
		<td> </td>
		<td>7</td>
		<td>7</td>
		<td>9</td>
	</tr>
	<tr>
		<td>10</td>
		<td>10</td>
		<td> </td>
		<td>10</td>
		<td>10</td>
		<td>10</td>
	</tr>
</table>

Let E(<var>k</var>) be the <var>k</var><sup>th</sup> element in the sorted <var>n</var> column; for example, E(4) = 8 and E(6) = 9.

If rad(<var>n</var>) is sorted for $1 \leq n \leq 100000$, find E(10000).
