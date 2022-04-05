RECTANGLE PROBLEM

The following program checks how many rectangles can be formed with points given by the user.
How it works:
	-the user gives n points and it stores them all in a set so that we don't have duplicates.
	-after that the program takes every combination of 2 points and checks using one of the rectangles properties ( A(x1,y1),B(x2,y2)->
	C(x1,y2),D(x2,y1) ) if the new points formed are found in the set.
	-if the newly formed points are found in the set it increments the final answer by 1.
	-in the end the countRectangles function returns the final answer divided by 4 because a rectangle has 4 corners and the program
	checks if it is a rectangle for each corner.

Problem solved for UMT Software technical testing.