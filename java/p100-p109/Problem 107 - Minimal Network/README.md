# [Problem](https://projecteuler.net/problem=107) No. 107

## Minimal Network

The following undirected network consists of seven vertices and twelve edges with a total weight of 243.

<div align="center">
	<img alt="p107_1" style="background: white;" src="https://user-images.githubusercontent.com/73425927/168728556-ed01f951-7415-4149-9acc-80273a0ce190.png" />
</div>

The same network can be represented by the matrix below.


<table align="center">
	<thead>
		<tr>
			<th></th>
			<th style="text-align:center">A</th>
			<th style="text-align:center">B</th>
			<th style="text-align:center">C</th>
			<th style="text-align:center">D</th>
			<th style="text-align:center">E</th>
			<th style="text-align:center">F</th>
			<th style="text-align:center">G</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><strong>A</strong></td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">16</td>
			<td style="text-align:center">12</td>
			<td style="text-align:center">21</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
		</tr>
		<tr>
			<td><strong>B</strong></td>
			<td style="text-align:center">16</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">17</td>
			<td style="text-align:center">20</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
		</tr>
		<tr>
			<td><strong>C</strong></td>
			<td style="text-align:center">12</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">28</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">31</td>
			<td style="text-align:center">-</td>
		</tr>
		<tr>
			<td><strong>D</strong></td>
			<td style="text-align:center">21</td>
			<td style="text-align:center">17</td>
			<td style="text-align:center">28</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">18</td>
			<td style="text-align:center">19</td>
			<td style="text-align:center">23</td>
		</tr>
		<tr>
			<td><strong>E</strong></td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">20</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">18</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">11</td>
		</tr>
		<tr>
			<td><strong>F</strong></td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">31</td>
			<td style="text-align:center">19</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">27</td>
		</tr>
		<tr>
			<td><strong>G</strong></td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">-</td>
			<td style="text-align:center">23</td>
			<td style="text-align:center">11</td>
			<td style="text-align:center">27</td>
			<td style="text-align:center">-</td>
		</tr>
	</tbody>
</table>

<!-- |       |   A   |   B   |   C   |   D   |   E   |   F   |   G   |
	 | ----- | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
	 | **A** |   -   |  16   |  12   |  21   |   -   |   -   |   -   |
	 | **B** |  16   |   -   |   -   |  17   |  20   |   -   |   -   |
	 | **C** |  12   |   -   |   -   |  28   |   -   |  31   |   -   |
	 | **D** |  21   |  17   |  28   |   -   |  18   |  19   |  23   |
	 | **E** |   -   |  20   |   -   |  18   |   -   |   -   |  11   |
	 | **F** |   -   |   -   |  31   |  19   |   -   |   -   |  27   |
	 | **G** |   -   |   -   |   -   |  23   |  11   |  27   |   -   | -->

However, it is possible to optimise the network by removing some edges and still ensure that all points on the network remain connected.<br>
The network which achieves the maximum saving is shown below.<br>
It has a weight of 93, representing a saving of 243 − 93 = 150 from the original network.

<div align="center">
	<img style="background: white;" src="https://user-images.githubusercontent.com/73425927/168731395-15c4fbe0-bf9a-48b2-9b99-ae42c611e170.png">
</div>

Using [network.txt](p107_network.txt), a 6K text file containing a network with forty vertices, and given in matrix form,<br>
find the maximum saving which can be achieved by removing redundant edges whilst ensuring that the network remains connected.
