#include <iostream>

class Movie {
	public:
		std::string Name;
		std::string Genre;
		float Ratings;

		Movie(std::string name, std::string genre, float ratings) {
			Name = name;
			Genre = genre;
			Ratings = ratings;	
		}
		void getMovieInfo() {
			std::cout << "Name: " << Name << std::endl;
			std::cout << "Genre: " << Genre << std::endl;
			std::cout << "Ratings: " << Ratings << "/5" << std::endl;					
		}
};


int main() {

	Movie beeMovie("Bee Movie", "Cartoon", 2.3);
	beeMovie.getMovieInfo();

}