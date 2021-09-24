/*
*/

console.log(solucao("Mosca", "Mouse"));

function solucao(palavraCorreta, tentativa) {

   let resposta = 0;
   let count = 0;

   for( index in tentativa ) {
      if( tentativa[index] === palavraCorreta[index]) {
         count++;
      }
   }

   resposta = count / palavraCorreta.length * 100;

   return resposta;
}