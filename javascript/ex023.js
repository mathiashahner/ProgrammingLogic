/*
    You are given an array of integers.
    On each move you are allowed to increase exactly
        one of its element by one.
        
    Find the minimal number of moves required to obtain
        a strictly increasing sequence from the input.

    Example:
         - For inputArray = [1, 1, 1], the output should
            be arrayChange(inputArray) = 3.
*/

let array = [1, 1, 1];

console.log( arrayChange(array));

function arrayChange(inputArray)
{
    let i = 0, result = 0;
    
    while(1)
    {
        if ( i > inputArray.length - 1 )
        {
            break;
        }
        else
        {
            if ( inputArray[i+1] <= inputArray[i])
            {
                inputArray[i+1] += 1;
                result++;
            }
            else
            {
                i++;
            }
        }
    }
    return result;
}