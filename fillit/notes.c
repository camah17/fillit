/* notes from 4x4.c file:
 *
 *
 * this function aims to test whether the form is a 4x4.
tests whether it's followed by a new line after each of these lines - done - apart from 4th line ****
first test should be whether each tetriminos is 19 chars - done - consider 20 due to \0?? didn't work ****
then next test should be whether there is another block of tetriminos that will follow ***********
but could have that one as another function, or some kind of loop ****
have another function saying that the 5th, 9th etc is a '\n' - done

maybe think about how the entire logic can be applied if based on a 4 character basis (line by line basis) - don't think this is necessary ***

then will surely need to create functions linking all these mini functions together, no?? or is that part of the main?

later on need to identify the linkage of the hashes *******
Yue mentioned that per block, 4/16 are hashes, whereas there are 12 dots. - no longer understand her logic
so if there are multiple blocks, you need to work out the smallest possible square.
*/

/* notes from quantities file:
 *
 *
 * this file outlines the quantities required for the specs
doesn't consider the order in which they come in.
fn for declaration of max 4 hashes and max 12 dots per 19 chars - done see quantities file
note, if there's a foreign character, it won't recognise it here - done see hashdot file
consider creating a fn declaring whether each specified element doesn't exist - no need as quantities file will resolve this
*/

/* notes from hashdot file:
 *
 *
 * need a function to identify foreign characters
fn to identify only these as correct: # . \n - facing issues here - no big deal, quantities file will resolve this
need a function to identify the order in which the tetriminos can come in *********
need to think of a better way to code this, is it done on a per line basis?
maybe include the numbered conditions as pre-requistes included in this fn??? i think this is in relation to the indexes

my fn identifies as correct the strings where one of the three is missing - no big deal, as quantities file will resolve missing chars
so it identifies as correct as long as there is no foreign character
also need to make sure it identifies blank strings as false - done
*/

/*notes from forms.c file
 *
 *
 *this file contains the valid tetris forms
there are 17 forms
need to find a way to describe each of these to indicate their validity - is this needed????? *********
perhaps needed for the linkage purpose
it's hard to describe each form in terms of indexes, especially as there's space for it to move about in a box that could be relatively large
might need to just specify if it comes 1 char before, then ok, if after 1 char, then ok, if after 5 chars - so directly below **********
then could treat it on a per line basis maybe.
*/

/*
 *
 *
 *need a file/funciton to identify where the error comes from, so which part of the fn it's falling short from ***********
so a fn which verifies all the verification fns in each file, then if not, state where and display relevant error msg ********
**********************************************************************************************************************************************
need a fn to recognise each set of tetriminos
considerations: could have a fn specifying that if after the first tetriminos, we have a new line and another set, then we can go from there
consider this in the quantities file.
maybe consider some kind of word count fn to make this work
*********************************************************************************************************************************************
need a fn to specify that if all these conditions are met, we can use a counter to then loop to evaluate the next set of tetriminos
need to specify that there must only be between 1 and 26 tetriminos per file
one fn purely to count limit from 1 - 26
another to assess whether each loop fulfils the conditions
**********************************************************************************************************************************************
how about the inclusion of strsplit??
or the inclusion of a word splitting fn, that counts if string is longer than 19 chars, apply this fn to it, and see how many there are,
then apply the verification fn to it *******************************************************************************************************
*/

/*notes from multiple.c - file now redundant
 *
 *
 *options:
see if there are 19 chars - if so, proceed as normal
if not 19 chars, assess if it fulfills the 19 chars' conditions, after finding a new line after the 19th char, then loop it somehow.
other option: counter per 19/20 chars, impose limit of upto 26 inclusive
if 19 chars per block x 26 = 494 chars
if 20 chars per block x 26 = 520 chars
**********************************************************************************************************************************
so could have something like while string is less than or equal to 520 chars.
create a fn to say whether there is 19 chars, if not, then move onto next fn.
alternative option, make sure that per block is defined by a counter n.
*/

/*notes from mult.c - file now redundant
 * 
 *
 *
 *attempt to create a word count fn to count no. of sets of tetriminos we have, using \n\n as the delimiter
could try to write it as if k == \n && k + 1 == '\n' - this is done for the word count type fn, which works fine
or could make the string's delimiter \n\n straight away - this is done for the strstr type fn, which needed tweeking to work fine
these fns will work fine assuming that the strings don't terminate with \n\n.
now need to find a way to identify how to analyse each set:
need to lay down that per string, when the ft_m condition is satisfied, then we can impose a limit of having upto 25 sets of these \n\n, meaning max 26 tetriminos
then need to state that per string, given n number of sets of \n\n, eg, two = 3 tetriminos, analyse it until it reaches the first set of \n\n
if n = 2, this means we have 3 tetris, but it could be used as an index figure - maybe but doubtful
*/

/*notes from limit.c or per.c file
 *
 *
 *
 *need to state that per string, given n number of sets of \n\n, eg, analyse it until it reaches the first set of \n\n
so for this bit, might need to assign a few variables to say that until "\n\n" is reached. Might need to be phrased like, analyse string until it equals the first set of \n\n
next loop will be analyse the string after n = 1 but before n =2, so until it reaches the second set of \n\n. So per \n\n set will have an int counter variable attached to it
if this fails, might need to integrate a string split function
*/
