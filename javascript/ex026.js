/*
*/

console.log(solucao("crescer", "quero fazer o crescer para crescer profissioa"));

function solucao(palavra, frase) {
   
    let resposta = "";
    let regExp = new RegExp(palavra, "gi");
    let aux;
    
    aux = frase.match(regExp);
  
    resposta = "A palavra " + palavra + " aparece " + aux.length + " vezes na frase"

    return resposta;
}