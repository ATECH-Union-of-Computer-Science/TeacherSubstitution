#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Teacher {
	string name;
	string type;
	string room;
	vector<string> periods;
}

int findTeacher(const vector<Teacher>& teachers, const string& name) {
	//Returns the index of the teacher with the given name. (Junjie)
	//If not found return -1
	
}

vector<int> findSubs(const Teacher& teacher, vector<Teacher>& teachers) {
	//Returns a vector of ints containing the index of the teacher that will fill in for an absent teacher. (Kyle)
	//If no teacher is available to sub that period, place a -1 in the index.
	//If a period is a prep for an absent teacher, place a -2 in the index.
	//Replace teacher's preps with the phrase "SUB" to mark preps that have already been used.
	
}

void resetTeachers(vector<Teacher>& teachers) {
	//Replaces any teacher periods marked with "SUB" with "PREP" (Yu Peng)
	
}

void printTeacher(const Teacher& teacher) {
	cout << teacher.name << endl;
}

int main() {
	vector<Teacher> teachers;
	//Parse spreadsheet (Henry)
	
	
	//User interface (Charles)
	while (true) {
		//Ask for an absent teacher or Q to quit
		
		//Check if entered teacher exists
		
		//Find subsitutes for each teacer
		
		//Display the names of teachers that can fill in for each period
		
	}
	
	
	
	return 0;
}
