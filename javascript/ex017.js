/*
    Some people are standing in a row in a park.
    There are trees between them which cannot be moved.

    Your task is to rearrange the people by their heights
        in a non-descending order without moving the trees.

    People can be very tall!

Example:
    - For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should
        be sortByHeight(a) = [-1, 150, 160, 170, -1, -1, 180, 190].
*/

let array = [-1, 150, 190, 170, -1, -1, 160, 180];

console.log( sortByHeight(array));

function sortByHeight(a)
{
    let tmp = a.filter(num => (num !== -1));
    tmp.sort((a, b) => (a - b));
    return a.map(num => (num !== -1) ? tmp.shift() : -1);
}