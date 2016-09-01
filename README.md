## Hot-potato
DSA IC-250 Lab assignment 03 part A ##

HotPotato is a program to devise a winning strategy for a game called Hot-Potato also known as Josephus problem.

RULES for the game :

In this game children line up in a circle and pass an item from neighbor to
neighbor as fast as they can. At a certain point (say after a round) in the game,
the action is stopped and the child who has the item (the potato) is removed
from the circle. Play continues until only one child is left.

1. Players : Let there are n children.
2. Elimination Rule : Every ith child will be removed after a round .

It uses queue data structure for doing the above task.

The executable file is in the folder ./bin/

For building the program one can run the make command from the terminal of a linux os.

Input Data and Format
• Enter number of children : n
• Elimination Rule : i

Sample Output :

The removal sequence is as follows -
[1] Firstly, the person at position 2 is removed.
[2] Then person at position 4 is removed.
[3] Then person at position 1 is removed.
[4] Finally, the person at position 5 is removed.
Hence the person at position 3 survives. (WINNER)
