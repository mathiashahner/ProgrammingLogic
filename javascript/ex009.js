// cwi crescer 3

function comparePlayers(player1, exp1, player2, exp2)
{
   let prob1, prob2, result = "";

   prob1 = ( 50 + exp1 * 2 ) / 100 ;
   prob2 = ( 50 + exp2 * 2 ) / 100 ;

   if( prob1 > prob2 )
      result = "O vencedor é o Player 1";
   else if( prob1 < prob2 )
      result = "O vencedor é o Player 2";
   else
      result = "Empate";

   return result;
}

console.log( comparePlayers("Mathias", 8, "Alana", 12));