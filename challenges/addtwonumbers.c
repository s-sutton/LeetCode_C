/* Pseudocode

-Input list
-Take the first list, set it in proper order
-Now that it's in proper order, multiply each element in the list with 10^(elementOrder) where elementOrder is its position in the list (0 is 1st element, 1 is 2nd element, ,,, etc.)
-Store this value as listOneTotal
-Do the above for the second list, stored in listTwoTotal
-Add listOneTotal and listTwoTotal
-Create new list structure with the solution

Alternatively:
-Add the last two corresponding elements in the list, carry the tens (and higher) place
  This can be done by removing the ones place (somehow) and multiplying by 0.1
-Add the previous two elements in the list, adding the tens place from the previous addition
-Continue until you hit the first item, which does not carry the tens place

The good news for the alternate solution is that the integers in the list do not exceed the value of 9. So then it might be possible to:
-Simply check if the answer is higher than 10
- If it is higher than 10, carry the 1 in a variable
- If it is higher than 10, subtract 10 before storing it in the answer list

Altogether:
-Add the last two elements in each input list
-Check if the solution is higher than 10, if not then store the solution in the output list
-If the solution is higher than 10, assign 1 to a carryTheOne variable, then subtract 10 before storing the solution in the output list
-Add the previous two elements in each input list and the carryTheOne variable
-Check if the solution is higher than 10, if not then store the solution in the output list and set carryTheOne to 0
-If the solution is higher than 10, assign 1 to the carryTheOne variable, then subtract 10 before storing the solution in the output list

This can be simplified to one function:
-Define the carryTheOne variable, set it to 0
-Loop through the two lists, starting at the end
-Add each corresponding element together with the carryTheOne variable
-Check if the solution is higher than 10, if not then store the solution in the output list and set carryTheOne to 0
-If the solution is higher than 10, assign 1 to the carryTheOne variable, then subtract 10 before storing the solution in the output list
-Return the output list

/Pseudocode */
