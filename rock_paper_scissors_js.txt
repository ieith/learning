const getUserChoice = userInput => {
  userInput = userInput.toLowerCase();
  if (userInput === 'rock' || userInput === 'paper' || userInput === 'scissors' || userInput === 'bomb') {
    return userInput;
  }
  else {
    console.log('You did not choose a valid option, fool.')
  }
};

const getComputerChoice = () => {
  const number = Math.floor(Math.random() * 3);
  switch(number) {
  case 0:
    return 'rock';
    break;
  case 1:
    return 'paper';
    break;
  case 2:
    return 'scissors';
    break;
  } 
};

const determineWinner = (userChoice, computerChoice) => {
  if (userChoice === computerChoice) {
    return 'Tis a tie, you lucky lucky fleshbag';
  }
  if (userChoice === 'rock') {
    if (computerChoice === 'paper') {
    return 'Loser User';
    } else {
      return 'The putrid lump takes it.';
    }
  }
  if (userChoice === 'paper') {
    if (computerChoice === 'scissors') {
    return 'Loser User';
    } else {
      return 'The putrid lump takes it.';
    }
  }
  if (userChoice === 'scissors') {
    if (computerChoice === 'rock') {
    return 'Loser User';
    } else {
      return 'The putrid lump takes it.';
    }
  }
  if (userChoice === 'bomb') {
    return 'Cheating meatbag!'
  }
}

const playGame = () => {
  const userChoice = getUserChoice('bomb');
  const computerChoice = getComputerChoice();
  console.log('Meatbag chose ' + userChoice);
  console.log('Superior intellect chose ' + computerChoice);
  console.log(determineWinner(userChoice, computerChoice));
}

playGame();


