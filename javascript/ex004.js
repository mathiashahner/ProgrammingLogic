convertNote(85);

function convertNote(note) {
   let res = '';

   if ( note < 0 || note > 100 )
      console.log('Nota inválida');
   else if ( note >= 90 && note <= 100 )
      res = 'A';
   else if ( note >= 80 )
      res = 'B';
   else if ( note >= 70 )
      res = 'C';
   else if ( note >= 60 )
      res = 'D';
   else
      res = 'E';

   if ( res != '' )
      console.log( note + ': Sua nota é ' + res + '!');
}