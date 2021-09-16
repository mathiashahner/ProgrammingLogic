/*
    Given two strings, find the number of common characters between them.

    Example:
        - For s1 = "aabcc" and s2 = "adcaa", the output should be commonCharacterCount(s1, s2) = 3.
        - Strings have 3 common characters - 2 "a"s and 1 "c".
*/

console.log( commonCharacterCount("aabcc", "adcaa"));

function commonCharacterCount(s1, s2)
{
    let index, i, count = 0;
    
    for ( i=0; i<s1.length; i++ )
    {
        index = s2.indexOf(s1[i]);        
        if ( index >= 0 )
        {
            s2 = s2.replace(s1[i], '-');
            count++;
        }
    }    
    return count;
}