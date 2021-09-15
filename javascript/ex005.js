fizzBuzz('a');

function fizzBuzz(num)
{
   if ( typeof(num) !== 'number' )
      console.log("The value entered is not a number");
   else
   {
      let msg = "";

      if (( num % 3) === 0 )
         msg += "Fizz";

      if (( num % 5) === 0 )
         msg += "Buzz";

      if ( msg === "" )
         console.log(num);
      else
         console.log(msg);
   }
}