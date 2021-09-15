/*
    Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

    Example:
        - For input Array = [3, 6, -2, -5, 7, 3], the output should beadjacentElementsProduct(inputArray) = 21.
        - 7 and 3 produce the largest product.
*/

let array = [3, 6, -2, -5, 7, 3];

console.log( adjacentElementsProduct(array));

function adjacentElementsProduct(inputArray)
{
   var sum = Number.NEGATIVE_INFINITY;

   for( var i=0; i<inputArray.length-1; i++ )
   {        
      if (( inputArray[i] * inputArray[i+1]) > sum )
         sum = inputArray[i] * inputArray[i+1];
   }

   return sum;
}