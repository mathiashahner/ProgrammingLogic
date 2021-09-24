/*
*/

console.log(solucao(15));

function solucao(n) {
  let possiveisPiramidesPerfeitas = 0;
  let pecasFaltantesParaProximaPiramidePerfeita = 0;
  let pecasUtilizadas = 3; // pois e o minimo para se
  let ultimaCamada = 2;    // ter uma piramide perfeita

  while( pecasUtilizadas <= n ) {
    pecasUtilizadas += ++ultimaCamada;
    possiveisPiramidesPerfeitas++;
  }

  pecasFaltantesParaProximaPiramidePerfeita = pecasUtilizadas - n;

  return [possiveisPiramidesPerfeitas, pecasFaltantesParaProximaPiramidePerfeita];
}