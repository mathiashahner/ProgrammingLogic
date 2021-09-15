fizzBuzz(9);

function fizzBuzz(num)
{
   if ( typeof(num) !== 'number' )
      console.log("O valor informado não é um número");
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