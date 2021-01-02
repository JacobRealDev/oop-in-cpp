#include <iostream>

class Movie {
	private:
		std::string Name;
		std::string Genre;
		float Ratings;
		bool isAvailble;
	public:
		Movie(std::string name, std::string genre, float ratings) {
			Name = name;
			Genre = genre;
			Ratings = ratings;
		}
		void getInfo() {
			std::cout << "Name: " << Name << std::endl;
			std::cout << "Genre: " << Genre << std::endl;
			std::cout << "Ratings: " << Ratings << "/5" << std::endl;
		}
		// Set Methods
		void setAvailable() {
			std::cout << "Set to avaiable" << std::endl;
			isAvailble = true;
		}
		void setDisable() {
			std::cout << "Set to disabled" << std::endl;
			isAvailble = false;
		}
		// Check availability
		void checkAvailability() {
			if (isAvailble) {
				std::cout << Name << " is available." << std::endl;
			} else {
				std::cout << Name << " is not available" << std::endl;
			}
		}
};

class ShortFilms :public Movie {
	public:
		ShortFilms(std::string name, std::string genre, float ratings):Movie(name, genre, ratings) {
		}
};


int main() {

	Movie beeMovie("Bee Movie", "Cartoon", 2.3);
	ShortFilms megamind("Megamind", "Cartoon", 5.0);
	
	beeMovie.getInfo();
	megamind.getInfo();

}