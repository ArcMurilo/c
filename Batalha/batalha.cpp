// Class Personagem
#include <string>
#include <cstdlib>

using namespace std;

class Personagem {
	private:
		string nome;
		int hit_points;
		int attack;
		int defense;
		string typeClass;
		const string CLASSES[3] = {"ARCHER", "MAGE", "WARRIOR"};
 
	public:
		Personagem() {
			//CLASSES = {"ARCHER", "MAGE", "WARRIOR"};
			calculaVida();
		}

		void calculaVida();

};

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}