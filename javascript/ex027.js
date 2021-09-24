/*
*/

console.log(solucao([2,4,6], [4,2,7]));

function solucao(arrA, arrB) {
   let resposta = 0;
   let arrComum = [];

   for( value of arrA ) {
      if( arrB.includes(value)) {
         arrComum.push(value);
      }
   }

   if( arrComum.length > 0 ) {
      resposta = arrComum.reduce(function(resposta, value) {
         return resposta + value;
      });
   }

   return resposta;
}