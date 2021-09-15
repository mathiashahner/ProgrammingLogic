let sumRevenue, sumOutlay;

let outlayControl = {
   revenue: [1700, 230.50, 1245],
   outlay: [590.90, 465, 870.85],
};

function sumValues(array)
{
   let sum = 0;

   for (value of array)
   {
      sum += value;
   }

   return sum;
}

function showResume(revenues, outlays)
{
   console.log(`Total de ganhos: R$${revenues.toFixed(2)}`);
   console.log(`Total de gastos: R$${outlays.toFixed(2)}`);
   console.log(`Saldo: R$${(revenues - outlays).toFixed(2)}`);
}

sumRevenue = sumValues(outlayControl.revenue);
sumOutlay = sumValues(outlayControl.outlay);
showResume(sumRevenue, sumOutlay);