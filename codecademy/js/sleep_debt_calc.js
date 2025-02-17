const getSleepHours = day => {
  if (day === 'monday') {
    return 7;
  } else if (day === 'tuesday') {
    return 6;
  } else if (day === 'wednesday') {
    return 5;
  } else if (day === 'thursday') {
    return 4;
  } else if (day === 'friday') {
    return 3;
  } else if (day === 'saturday') {
    return 2;
  } else if (day === 'sunday') {
    return 1;
  } else {
    return 'unknown';
  }
};

getActualSleepHours = () =>
  getSleepHours('monday') +
  getSleepHours('tuesday') +
  getSleepHours('wednesday') +
  getSleepHours('thursday')+
  getSleepHours('friday')+
  getSleepHours('saturday')+
  getSleepHours('sunday');

getIdealSleepHours = () => {
  let idealHours = 6*7;
  return idealHours;
}

//console.log(getActualSleepHours());
//console.log(getIdealSleepHours());

calculateSleepDebt = () => {
  let actualSleepHours = getActualSleepHours();
  let idealSleepHours = getIdealSleepHours();
  let difference = idealSleepHours - actualSleepHours;
  if (actualSleepHours === idealSleepHours) {
    console.log('perfect');
  } else if (actualSleepHours > idealSleepHours) {
    console.log('too much by ' + difference);
  } else if (actualSleepHours < idealSleepHours) {
    console.log('too little by ' + difference);
  };
};

calculateSleepDebt();
