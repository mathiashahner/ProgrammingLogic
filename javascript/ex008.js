// cwi crescer 2

const units = [ "B", "KB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB" ];

function numBytes(bytes)
{
   let strBytes = "";
   let countDiv = 0;

   while( bytes >= 1024 )
   {
      bytes /= 1024;
      countDiv++;
   }

   strBytes = String( bytes.toFixed(2) + " " + units[countDiv]);

   return strBytes;
}

console.log( numBytes(2000000000000000000000000));