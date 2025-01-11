const team = {
  _players: [
    {firstName: 'Ade', lastName: 'Addison', age: 12},
    {firstName: 'Bade', lastName: 'Baddison', age: 13},
    {firstName: 'Cade', lastName: 'Caddison', age: 14}
  ],
  _games: [
    {opponent: 'bill', teamPoints: 2, opponentPoints: 5},
    {opponent: 'ben', teamPoints: 4, opponentPoints: 3},
    {opponent: 'flowerpot men', teamPoints: 1, opponentPoints: 1}
  ],

get players() {
    return this._players
  },

  get games() {
    return this._games
  },

  addPlayer(newFirstName,newLastName,newAge) {
    let player = {
      firstName: newFirstName,
      lastName: newLastName,
      age: newAge
    };
    this.players.push(player);
  },

      
  addGame(newOpponent,newTeamPoints,newOpponentPoints) {
    let game = {
      Opponent: newOpponent,
      TeamPoints: newTeamPoints,
      OpponentPoints: newOpponentPoints
    }
    this.games.push(game);
  }

};

team.addPlayer('Dade', 'Daddison', 15);
team.addGame('Donkeys', 2, 15);
console.log(team._players);
console.log(team._games);
