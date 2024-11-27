let raceNumber = Math.floor(Math.random() * 1000);
let earlyReg = false;
let age = 18;

if (age >=18 && earlyReg === true) {
  raceNumber +=1000;
  console.log(raceNumber);
}
else {
  console.log(raceNumber);
}

if (age >=18 && earlyReg === true) {
  console.log("Your race time is 9:30.");
}
else if (age >=18 && earlyReg != true) {
  console.log("Your race time is 11:00.");
}
else {
  console.log("Your race time is 12:30.");
}
