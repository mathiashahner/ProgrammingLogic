/*
    Given a rectangular matrix of characters, add a border of asterisks(*) to it.

    Example:
        - For picture = ["abc",
                         "ded"]
        
        the output should be addBorder(picture) = ["*****",
                                                   "*abc*",
                                                   "*ded*",
                                                   "*****"]

*/

let array = ["abc",
             "ded"];

console.log( addBorder(array));

function addBorder(p)
{
    let i, a = "*".repeat( p[0].length + 2 );

    for( i in p )
        p[i] = "*" + p[i] + "*";

    p.unshift(a);
    p.push(a);

    return p;
}