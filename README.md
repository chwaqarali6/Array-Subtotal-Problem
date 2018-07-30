# Array-Subtotal-Problem
Write a function named "subtotal" takes as its arguments the following:<br/>
(1) an array of floating point values;<br/>
(2) an integer that tells the number of cells in the array.<br/>

The function should replace the contents of each cell with the sum of the contents of all the cells in the original array from the left end to the cell in question. Thus, for example, if the array passed to the function looks like this:<br/>
5.8 | 2.6 | 9.1 | 3.4 | 7.0<br/>

then when the function returns, the array will have been changed so that it looks like this:<br/>
5.8 | 8.4 | 17.5 | 20.9 | 27.9<br/>

Because 5.8 + 2.6 = 8.4 and 5.8 + 2.6 + 9.1 = 17.5 and so on. Note that the contents of cell 0 are notchanged. The function should not return a value.
