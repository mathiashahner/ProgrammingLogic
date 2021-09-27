/*
*/

console.log(solucao("Crescer", "Quero fazer o Crescer para crescer profissionalmente"));

function solucao(palavra, frase) {
   
    let resposta = "";
    let regExp = new RegExp(palavra, "gi");
    let aux;
    
    aux = frase.match(regExp);
  
    resposta = "A palavra " + palavra + " aparece " + aux.length + " vezes na frase"

    return resposta;
}