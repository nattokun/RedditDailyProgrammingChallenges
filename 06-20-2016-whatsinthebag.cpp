/*
r/dailyprogrammer
06-20-2016
#267 Easy
What's in the bag
----------------------------------------------------------------------------------------------------------------------------------------------
Scrabble is a popular word game where players remove tiles with letters on them from a bag and use them to create words on a board. The total number of tiles as well as the frequency of each letter does not change between games.

For this challenge we will be using the tile set from the English edition, which has 100 tiles total. Here's a reference for the distribution and point value of each tile.

Each tile will be represented by the letter that appears on it, with the exception that blank tiles are represented by underscores _.
(http://scrabblewizard.com/scrabble-tile-distribution/)
----------------------------------------------------------------------------------------------------------------------------------------------
Input: 
The tiles already in play are inputted as an uppercase string. For example, if 14 tiles have been removed from the bag and are in play, you would be given an input like this:

AEERTYOXMCNB_S
----------------------------------------------------------------------------------------------------------------------------------------------
Output:
You should output the tiles that are left in the bag. The list should be in descending order of the quantity of each tile left in the bag, skipping over amounts that have no tiles.

In cases where more than one letter has the same quantity remaining, output those letters in alphabetical order, with blank tiles at the end.

10: E
9: I
8: A
7: O
5: N, R, T
4: D, L, U
3: G, S
2: F, H, P, V, W
1: B, C, J, K, M, Q, Y, Z, _
0: X

If more tiles have been removed from the bag than possible, such as 3 Qs, you should give a helpful error message instead of printing the list.

Invalid input. More Q's have been taken from the bag than possible.
----------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

char [] letters = {'a', 'b', 'c', 'd','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s,'t','u','v','w','x','y','z'};
int [] count = 
int main()
{
  
  return 0;
}

void getScrabbleList(char [] list, int count)
{
  count = 0;
  fstream filein;
	filein.open("file.dat");
	
	if(!filein.fail())
	{	
		while(!fin.eof())
		{
		  filein>>list[count];
		  count++;
		}
	}
	
	
	
}
