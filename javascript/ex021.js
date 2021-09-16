/*
    Two arrays are called similar if one can be obtained from another
        by swapping at most one pair of elements in one of the arrays.

    Given two arrays a and b, check whether they are similar.

    Example:
        - For a = [1, 2, 3] and b = [1, 2, 3], the output should be
            areSimilar(a, b) = true.

        - The arrays are equal, no need to swap any elements.

        - For a = [1, 2, 3] and b = [2, 1, 3], the output should be
            areSimilar(a, b) = true.

        - We can obtain b from a by swapping 2 and 1 in b.

        - For a = [1, 2, 2] and b = [2, 1, 1], the output should be
            areSimilar(a, b) = false.

        - Any swap of any two elements either in a or in b won't make a and b equal.
*/

let array1 = [1, 2, 3];
let array2 = [2, 3, 1];

console.log( areSimilar(array1, array2));

function areSimilar(a, b)
{
    let result = false;
    let aux = [];
    
    for( let i=0; i<a.length; i++ )
    {
        if (a[i] !== b[i])
            aux.push(i);
    }

    if ( aux.length === 0 )
        result = true;

    if ( aux.length === 2 )
        result = ((a[aux[0]] === b[aux[1]]) && (a[aux[1]] === b[aux[0]]));

    return result;
}