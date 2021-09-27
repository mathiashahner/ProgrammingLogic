/*
    Given an array of integers, find the maximal absolute
        difference between any two of its adjacent elements.

    Example:
        - For inputArray = [2, 4, 1, 0], the output should be
            arrayMaximalAdjacentDifference(inputArray) = 3.
*/

console.log(arrayMaximalAdjacentDifference([2, 4, 1, 0]));

function arrayMaximalAdjacentDifference(arr) {
    let res = 0;

    for(let i=0; i<arr.length-1; i++)
        res = Math.abs(arr[i] - arr[i+1]) > res ? Math.abs(arr[i] - arr[i+1]) : res;

    return res;
}