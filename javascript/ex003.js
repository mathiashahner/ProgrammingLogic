let temperature = "50f";

celsius2Fahrenheit(temperature);

function celsius2Fahrenheit(temperature)
{
   let result = temperature.slice(0, temperature.length - 1);
   let unit = "";

   temperature = temperature.toUpperCase();

   if (temperature.includes("C"))
   {
      result = ((result * 9 / 5) + 32);
      unit = "F";
   }
   else if (temperature.includes("F"))
   {
      result = ((result - 32) * 5 / 9);
      unit = "C";
   }
   else
   {
      console.log(`Temperature ${temperature} not suported!`);
   }

   if (unit != "")
   {
      console.log(`${temperature} is ${result.toFixed(2)}${unit}`);
   }
}