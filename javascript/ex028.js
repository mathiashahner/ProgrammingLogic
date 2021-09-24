/*
*/

console.log(solucao([547541.50, 77952.00, 1158657.00, 447550.00], [537800.50, 78790.00, 1159500.00, 447550.00]));

function solucao(previsoes, valoresReais) {

   let resposta = 0;
   let erros = [];

   for(index in previsoes) {
      erros.push(Math.abs(valoresReais[index] - previsoes[index]));
   }

   if( erros.length > 0 ) {
      resposta = erros.reduce(function(resposta, value) {
         return resposta + value;
      });

      resposta /= erros.length;
   }

   return resposta;
}