#include <iostream>

using namespace std;

class ScoreKeeper {
	
public:
	ScoreKeeper() {


	}


	int usrScore = 0;
	int rpsScore = 0;



};

int main()
{
	// 0 = Rock
	 // 1 = paper 
	 // 2 = scissors
	 // int rps [] = { 0, 1, 2 };
	int usr;
	bool play = true;
	int con;
	ScoreKeeper board;




	cout << "Welcome to Rock, Paper, Scissors!!" << endl;
	//	cout << "For Rock pick '0'" << endl; 
	//	cout << "For Paper Pick '1'" << endl; 
	//	cout << "For Scissors Pick '2'" << endl; 



	while (play == true) {
		int rps = rand() % 3;

		cout << endl;
		cout << "For Rock pick '0'" << endl;
		cout << "For Paper pick '1'" << endl;
		cout << "For Scissors pick '2'" << endl;
		cout << "Enter number" << endl;
		cin >> usr;

		if (usr == rps) {
			cout << "You Picked:" << usr << endl;
			cout << "The computer picks:" << rps << endl;
			cout << "It was a tie!!" << endl;
			cout <<  endl;
			cout << endl;
		}
		else if (usr == 0 && rps == 1) {
			cout << "You Picked: Rock" << endl;
			cout << "The computer picks: Paper" << endl;
			cout << "The computer wins! Try again next time." << endl;
			board.rpsScore++;
			cout << endl;
			cout << endl;
		}
		else if (usr == 0 && rps == 2) {
			cout << "You Picked: Rock" << endl;
			cout << "The computer picks: Scissors" << endl;
			cout << "You win this time...." << endl;
			board.usrScore++;
			cout << endl;
			cout << endl;
		}
		else if (usr == 1 && rps == 0) {
			cout << "You Picked: Paper" << endl;
			cout << "The computer picks: Rock" << endl;
			cout << "You win this time...." << endl;
			board.usrScore++;
			cout << endl;
			cout << endl;
		}
		else if (usr == 1 && rps == 2) {
			cout << "You Picked: Paper" << endl;
			cout << "The computer picks: Scissors" << endl;
			cout << "The computer wins! Try again next time." << endl;
			board.rpsScore++;
			cout << endl;
			cout << endl;

		}
		else if (usr == 2 && rps == 1) {
			cout << "You Picked: Scissors" << endl;
			cout << "The computer picks: Paper" << endl;
			cout << "You win this time...." << endl;
			board.usrScore++;
			cout << endl;
			cout << endl;
		}
		else if (usr == 2 && rps == 0) {
			cout << "You Picked: Scissors" << endl;
			cout << "The computer picks: Rock" << endl;
			cout << "The computer wins! Try again next time." << endl;
			board.rpsScore++;
			cout << endl;
			cout << endl;

		}
		else {
			cout << "Invalid input" << endl;
			cout << "You fucked up, quiting now" << endl;
			break;
		}

		cout << "Player Score:" << board.usrScore << endl;
		cout << "Computer Score:" << board.rpsScore << endl;

		cout << "would you like to play again?" << endl;
		cout << " Enter '1' for Yes, '2' for No" << endl;
		cin >> con;

		if (con == 1) {
			play = true;
		}
		else if (con == 2) {
			play = false;
		}
		else {
			cout << "Invalid input" << endl;
			cout << "You fucked up, quiting now" << endl;
			break;
		}



	}

	cout << "Player Score:" << board.usrScore << endl;
	cout << "Computer Score:" << board.rpsScore << endl;
	cout << endl;
	cout << endl;
	
	cout << "Thanks for playing my game!" << endl;
	cout << "Good bye!" << endl;



}