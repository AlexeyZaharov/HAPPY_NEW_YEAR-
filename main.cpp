#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void cristmas_tree () {
	unsigned int k=0, m=0;
	const unsigned int p=18;
	
	for ( unsigned int i=0; i<p; i++ ) {
		m++;
		if ( m>3 ) {
			for ( unsigned int j=0; j < p-( i - ( (m-1)/3) ); j++) {
				cout << " ";
			}
		}
		else {
			for ( unsigned int j=0; j<p-i; j++) {
				cout << " ";
			}
		}
		if ( m%3 == 0 && i!=p-1) {
			cout << "!_";
			for (unsigned int t=0; t<2*(k-1); t++) {
				cout << " ";
			}
			cout << "_!";
		}
		else { 
			if (i!=p-1){
				cout << "/";
				for (unsigned int t=0; t<2*k; t++) {
					cout << " ";
				}
				cout << "\\";
				k++;
			}
			else {
				for (unsigned int t=0; t<2*(k+1); t++) {
					if (t%25 == 0) {
						cout << "!";
					}
					else {
						cout << "~";
					}
				}	
			}
		}
		cout << endl;
	}
	
	for (unsigned int i=0; i<3; i++) {
		for (unsigned int j=0; j<p+5; j++) {
			if (j%11 == 0 && j!=0) {
				cout << " |";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void star () {
	const unsigned int p=18;
	
	for (unsigned int i=0; i<p-4; i++) {
		cout << " ";
	}
	cout << "*   **   *" << endl;
	
	for (unsigned int i=0; i<p-3; i++) {
		cout << " ";
	}
	cout << "* **** *" << endl;
	
	for (unsigned int i=0; i<p-2; i++) {
		cout << " ";
	}
	cout << "******" << endl;
	
	for (unsigned int i=0; i<p-4; i++) {
		cout << " ";
	}
	cout << "* **** *" << endl;
	
	for (unsigned int i=0; i<p-4; i++) {
		cout << " ";
	}
	cout << "*   **   *" << endl;
}

void dollars () {
	unsigned int k=0, m=0;
	const unsigned int p=18;
	srand(time(NULL));
	
	star ();
	
	for ( unsigned int i=0; i<p; i++ ) {
		m++;
		if ( m>3 ) {
			for ( unsigned int j=0; j < p-( i - ( (m-1)/3) ); j++) {
				cout << " ";
			}
		}
		else {
			for ( unsigned int j=0; j<p-i; j++) {
				cout << " ";
			}
		}
		if ( m%3 == 0 && i!=p-1) {
			cout << "!_";
			for (unsigned int t=0; t<2*(k-1); t++) {
				if (t == rand()%2*(k-1) && k>2) {
					cout << "$";
				}
				else {
					cout << " ";	
				}
			}
			cout << "_!";
		}
		else { 
			if (i!=p-1){
				cout << "/";
				
				for (unsigned int t=0; t<2*k; t++) {
					if (t == rand()%k && k>2) {
						cout << "$";
					}
					else {
						cout << " ";	
					}
				}
				cout << "\\";
				k++;
			}
			else {
				for (unsigned int t=0; t<2*(k+1); t++) {
					if (t%25 == 0) {
						cout << "!";
					}
					else {
						cout << "~";
					}
				}	
			}
		}
		cout << endl;
	}
	
	for (unsigned int i=0; i<3; i++) {
		for (unsigned int j=0; j<p+5; j++) {
			if (j%11 == 0 && j!=0) {
				cout << " |";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void candies () {
	unsigned int k=0, m=0;
	const unsigned int p=18;
	srand(time(NULL));
	
	star ();
	
	for ( unsigned int i=0; i<p; i++ ) {
		m++;
		if ( m>3 ) {
			for ( unsigned int j=0; j < p-( i - ( (m-1)/3) ); j++) {
				cout << " ";
			}
		}
		else {
			for ( unsigned int j=0; j<p-i; j++) {
				cout << " ";
			}
		}
		if ( m%3 == 0 && i!=p-1) {
			cout << "!~";
			for (unsigned int t=0; t<2*(k-1); t++) {
				if (t == rand()%2*(k-1) && k>2) {
					cout << "$";
				}
				else {
					cout << " ";	
				}
			}
			cout << "~!";
		}
		else { 
			if (i!=p-1){
				cout << "/";
				
				for (unsigned int t=0; t<2*k; t++) {
					if (t == rand()%k && k>2) {
						cout << "$";
					}
					else {
						cout << " ";	
					}
				}
				cout << "\\";
				k++;
			}
			else {
				for (unsigned int t=0; t<(k+2); t++) {
					if (t%13 == 0) {
						cout << "!";
					}
					else {
						cout << "~J";
					}
				}	
			}
		}
		cout << endl;
	}
	
	for (unsigned int i=0; i<3; i++) {
		for (unsigned int j=0; j<p+5; j++) {
			if (j%11 == 0 && j!=0) {
				cout << " |";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void present () {
	candies ();
	const unsigned int p=9;
	
	for (unsigned int i=0; i<p; i++) {
		cout << " ";
	}
	
	cout << "*";
	for (unsigned int i=0; i<p+8; i++) {
		cout << "-";
	}
	cout << "*" << endl;
	
	for (unsigned int i=0; i<p; i++) {
		cout << " ";
	}
	cout << "|";
	for (unsigned int j=0; j<p+8; j++) {
		cout << " ";
	}
	cout << "|" << endl;

	
	for (unsigned int i=0; i<p; i++) {
		cout << " ";
	}
	cout << "| FIND FILE WITH  |" << endl;
	
	for (unsigned int i=0; i<p; i++) {
		cout << " ";
	}
	cout << "|  NAME \"PRESENT  |" << endl;
	
	for (unsigned int i=0; i<p; i++) {
		cout << " ";
	}
	cout << "| BY A.Z. STUDENT\"|" << endl;

	for (unsigned int i=0; i<p; i++) {
		cout << " ";
	}
	cout << "|";
	for (unsigned int j=0; j<p+8; j++) {
		cout << " ";
	}
	cout << "|" << endl;
	
	for (unsigned int i=0; i<p; i++) {
		cout << " ";
	}
	
	cout << "*";
	for (unsigned int i=0; i<p+8; i++) {
		cout << "-";
	}
	cout << "*" << endl;		
}

int main () {
	cout << "Press [Enter] to put the Cristmass Tree";
	cin.get();
	for (unsigned int i=0; i<4; i++) {
		cout << endl;
	}
	cristmas_tree ();
	cout << "\n\n";
	
	cout << "Press [Enter] to decorate the Tree with star";
	cin.get();
	star ();
	cristmas_tree ();
	cout << "\n\n";
	
	cout << "Press [Enter] to get some nice present";
	cin.get();
	dollars();
	cout << "\n\n";
	
	cout << "Press [Enter] to decorate the Tree with candies";
	cin.get();
	candies ();
	cout << "\n\n";
	
	cout << "Press [Enter] to get your present";
	cin.get();
	present ();
	
	cout << "Now find the file \"PRESENT BY A.Z. STUDENT\" (copy this name) and open it!";
	char c[] = "Vladislav Vadimovich!\nThank you for your work and your lessons! Be happy, drink the tastiest coffee, be the best programmist! Thak you!\n		HAPPY NEW YEAR!!!		";
	FILE *file = fopen("PRESENT BY A.Z. STUDENT", "w");
	fwrite (c, strlen(c), 1, file);
	fclose (file);
	cout << "\n\n";
	
	
	cin.get();
	cin.get();
	return 0;
}
