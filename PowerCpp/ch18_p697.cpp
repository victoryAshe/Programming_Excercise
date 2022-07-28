#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie
{
private:
	string title;
	double rating;

public:
	Movie(string t = "", double r = 0.0) { title = t; rating = r; }
	void print_movie() { cout << title << ": " << rating << endl; }
};

void main()
{
	vector<Movie> movies;

	Movie m("titinic", 9.9);
	movies.push_back(m);
	movies.push_back(Movie("Sprited Away", 9.6));
	movies.push_back(Movie("Silent Hill", 9.7));

	vector<Movie>::iterator p;
	for (p = movies.begin(); p != movies.end(); p++)
		p->print_movie();
	
}