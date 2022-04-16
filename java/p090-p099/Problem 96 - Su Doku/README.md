# [Problem](https://projecteuler.net/problem=96) No. 96

## Su Doku

**Su Doku** (Japanese meaning _number place_) is the name given to a popular puzzle concept. Its origin is unclear, but credit must be attributed to Leonhard Euler who invented a similar, and much more difficult, puzzle idea called Latin Squares.<br>
The objective of Su Doku puzzles, however, is to replace the blanks (or zeros) in a 9 by 9 grid in such that each row, column, and 3 by 3 box contains each of the digits 1 to 9.

Below is an example of a typical starting puzzle grid and its solution grid.

<div align="center">
    <img src = "https://user-images.githubusercontent.com/73425927/163531797-bf6cfb23-cdf8-42da-8e20-bcc24967b2b6.png" alt="p096_1">
    <img src = "https://user-images.githubusercontent.com/73425927/163531797-bf6cfb23-cdf8-42da-8e20-bcc24967b2b6.png" alt="p096_2">
</div>

A well constructed Su Doku puzzle has a unique solution and can be solved by logic, although it may be necessary to employ "guess and test" methods in order to eliminate options (there is much contested opinion over this).<br>
The complexity of the search determines the difficulty of the puzzle; the example above is considered easy because it can be solved by straight forward direct deduction.

The 6K text file, [sudoku.txt](p096_sudoku.txt), contains fifty different Su Doku puzzles ranging in difficulty, but all with unique solutions (the first puzzle in the file is the example above).

By solving all fifty puzzles find the sum of the 3-digit numbers found in the top left corner of each solution grid; for example, 483 is the 3-digit number found in the top left corner of the solution grid above.
