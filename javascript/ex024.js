/*
    Given a string, find out if its characters can be
        rearranged to form a palindrome.

    Example:
        - For inputString = "aabb", the output should
            be palindromeRearranging(inputString) = true.

        - We can rearrange "aabb" to make "abba", which is a palindrome.
*/

console.log( palindromeRearranging("aabbccd"));

function palindromeRearranging(str)
{
    let letter, error = 0;

    str = str.split("").sort();
    
    while( str.length > 0 )
    {
        letter = str.shift();
        
        if( letter === str[0])
            str.shift();
        else
            error++;
    }

    return( error < 2 );
}