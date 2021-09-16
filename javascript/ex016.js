/*
    Ticket numbers usually consist of an even number of digits.

    A ticket number is considered lucky if the sum of the first
        half of the digits is equal to the sum of the second half.

    Given a ticket number n, determine if it's lucky or not.

    Example:
    - For n = 1230, the output should be isLucky(n) = true;
    - For n = 239017, the output should be isLucky(n) = false.
*/

console.log( isLucky(1230));

function isLucky(n)
{
    let num = String(n);
    let sum = 0;

    for( let i=0; i<num.length; i++ )
        sum = i < ( num.length / 2 ) ? sum += Number(num[i]) : sum -= Number(num[i]);

    return ( sum === 0 );
}