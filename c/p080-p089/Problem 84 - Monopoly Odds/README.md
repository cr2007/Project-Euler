# [Problem](https://projecteuler.net/problem=84) No. 84

## Monopoly Odds

In the game, _Monopoly_, the standard board is set up in the following way:

<div align="center">
    <img alt="A picture of a Monopoly board" src="https://user-images.githubusercontent.com/73425927/146792420-5b96d831-392b-49f0-85c7-e60ee15e2179.png">
</div>

A player starts on the GO square and adds the scores on two 6-sided dice to determine the number of squares they advance in a clockwise direction.<br>
Without any further rules we would expect to visit each square with equal probability: 2.5%.<br>
However, landing on G2J (Go To Jail), CC (community chest), and CH (chance) changes this distribution.

In addition to G2J, and one card from each of CC and CH, that orders the player to go directly to jail, if a player rolls three consecutive doubles, they do not advance the result of their 3rd roll. Instead they proceed directly to jail.

At the beginning of the game, the CC and CH cards are shuffled. When a player lands on CC or CH they take a card from the top of the respective pile and, after following the instructions, it is returned to the bottom of the pile.<br>
There are sixteen cards in each pile, but for the purpose of this problem we are only concerned with cards that order a movement; any instruction not concerned with movement will be ignored and the player will remain on the CC/CH square.

<ul>
    <li>Community Chest (2/16 cards):<br>
     1. Advance to GO<br>
     2. Go to JAIL
    </li>
    <li>Chance (10/16 cards):<br>
     1. Advance to GO<br>
     2. Go to JAIL<br>
     3. Go to C1<br>
     4. Go to E3<br>
     5. Go to H2<br>
     6. Go to R1<br>
     7. Go to next R (Railway Company)<br>
     8. Go to next R<br>
     9. Go to next U (Utility Company)<br>
     10. Go back 3 squares
    </li>
</ul>

The heart of this problem concerns the likelihood of visiting a particular square.<br>
That is, the probability of finishing at that square after a roll. For this reason it should be clear that, with the exception of G2J for which the probability of finishing on it is zero, the CH squares will have the lowest probabilities, as 5/8 request a movement to another square, and it is the final square that the player finishes at on each roll that we are interested in.<br>
We shall make no distinction between "Just Visiting" and being sent to JAIL, and we shall also ignore the rule about requiring a double to "get out of jail", assuming that they pay to get out on their next turn.

By starting at GO and numbering the squares sequentially from 00 to 39 we can concatenate these two-digit numbers to produce strings that correspond with sets of squares.

Statistically it can be shown that the three most popular squares, in order, are JAIL (6.24%) = Square 10, E3 (3.18%) = Square 24, and GO (3.09%) = Square 00.<br>
So these three most popular squares can be listed with the six-digit modal string: 102400.

If, instead of using two 6-sided dice, two 4-sided dice are used, find the six-digit modal string.
