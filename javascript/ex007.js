// cwi crescer 1

console.log(validaComplexidade("Cwi_Cresc3r"));

function validaComplexidade(password)
{
   let result = false;

   if(( password.length >= 8 ) && ( password.length <= 32 ))
   {
      if( password !== password.toUpperCase())
      {
         if( password !== password.toLowerCase())
         {
            if( password.match(/\d/) !== null )
            {
               if( password.includes(" ") === false )
               {
                  if( password.match(/[,.;:?!^`´~]/g) === null )
                  {
                     result = true;
                  }
               }
            }
         }
      }
   }
   return result;
}