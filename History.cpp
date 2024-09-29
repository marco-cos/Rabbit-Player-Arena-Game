#include "History.h"
#include <iostream>
#include "Arena.h"
using namespace std;

History::History(int nRows, int nCols) {
	m_cols = nCols;
	m_rows = nRows;
	//Fill grid with dots
	for (int i = 0; i < nRows; i++) {
		for (int k = 0; k < nCols; k++)
			m_grid[i][k] = '.';
	}
}

bool History::record(int r, int c) {
	//Notify history that rabbit began posioned but alive
	// For every rabbit in arena, check health
	// Rabbits are poisioned if rabbit health is < initial rabbit health, but > 0 so it's not dead
	//Return false if r and c are not within bounds of m_cols and m_rows
	if (r > m_rows || c > m_cols) {
		return false;
	}
	else {
		//Return true after recording
		if (m_grid[r-1][c-1] == '.') {
			//If it is the first time poisioned rabbit is in square, set it to A to indicate 1
			m_grid[r-1][c-1] = 'A';
		}
		else if ((m_grid[r][c] >= 65) && (m_grid[r][c] <= 89)) {
			//If letter is in between A-Y, increase letter by one until Z is reached
			m_grid[r-1][c-1]++;
		}
		return true;
	}
}

void History::display() const {
	//Clears screen
	clearScreen();

	//Display the history grid 
	for (int i = 0; i < m_rows; i++) {
		for (int k = 0; k < m_cols; k++)
			//Print each value
			cout << m_grid[i][k];
		//Skip line at end of each row
		cout << endl;
	}

	//Write empty line after
	cout << endl;
}

//Add data member to arena
//Which public function to access it?