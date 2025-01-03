//kelvin is set as a constant here bc the project guidance said so//
const kelvin = 293;
//celsius is 273 less than kelvin//
let celsius = kelvin-273;
//here is the F formula//
let fahrenheit = celsius * (9/5) +32;
//.floor to round it down to a non-decimal//
fahrenheit = Math.floor(fahrenheit);
console.log(`The temperature is ${fahrenheit} degrees Fahrenheit.`);
let newton = celsius * (33/100);
//.floor to round it down to a non-decimal//
newton = Math.floor(newton);
console.log(`The temperature is ${newton} on the Newton scale.`);
