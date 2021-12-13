/*Q3:
Write a program that reads in test scores and applies two different curves to them. 
The program should contain:
1) a base class ScoreBank with two private(or protected as needed) data members:  [refer to the ScoreBank.h and ScoreBank.cpp]
	-- an integer pointer for the scores and
    -- a float for the average. 
	The class should also contain the following methods:
	-- method EnterScores which:
    	** asks the user how many test scores are needed,
        ** allocates enough memory, and reads in the scores. 
    -- a method CalcAverage which:
        ** stores the average of the entered scores in the float data member. 
	-- a method printScores which:
        ** prints the list of test scores to the screen as well as the average. 
	-- Make sure to complete the given constructor and destructor. 
	    ** in the given constructor, you should free the memory alloacted in the class
		
2) Derive from ScoreBank a class Curve1 which contains:  [refer to the Curve1.h and Curve1.cpp]
    -- a method Curve which:
 	    ** sets the average score to 75. 
		** Find out how far away from 75 the actual average is and then
        ** add this value to each test score. 
	-- Overload the Output method to print: 
	    ** the original scores and
        ** the curved scores as well as
        ** the original and new average.

3) Derive from ScoreBank a class Curve2 which contains [refer to the Curve2.h and Curve2.cpp]
    -- a method Curve which:
        ** sets the high score to 100 and scales the rest of the scores accordingly.
		** the scale should be 100 divided by the highest score
        ** then multiply each score in the list with the scale.

    -- overload the Output function to print:
        ** the original scores,
        ** the new scores, and 
		** the averages for both sets.
		
Feel free to add any other methods or data members to the classes other than the ones I’ve mentioned if it will help you implement any of the required
features.


4) Write a main function driver for these classes that creates objects of type Curve1 and Curve2 and asks the user to input a list of test scores into each object and
then runs the Output functions from each object. 
*/
