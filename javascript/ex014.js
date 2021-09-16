/*
    Given an array of strings, return another array containing all of its longest strings.

    Example:
        - For inputArray = ["aba", "aa", "ad", "vcd", "aba"],
            the output should be allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
*/

let array = ["aba", "aa", "ad", "vcd", "aba"];

console.log( allLongestStrings(array));

function allLongestStrings(inputArray)
{
    var result, max = 0;
    
    for( var i=0, j=0; i<inputArray.length; i++ )
    {
        if( inputArray[i].length > max )
        {
            j = 0;
            result = [];
            max = inputArray[i].length;
        }
        
        if( inputArray[i].length == max )
        {
            result[j] = inputArray[i];
            j++;
        }
    }    
    return result;
}