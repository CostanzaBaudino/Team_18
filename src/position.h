#include <string>

class Position {
	
	Position();
    
    out& print(fichier out);//format BED
	
	std::string Fasta_name;
	size_t position;
	string nucleotides;//pas explicitement fourni dans le fichier BED (juste debut/fin)
	bool strand;//optionnel dans l usage 2->valeur par defaut ?
	double score;//optionnel dans l usage 2->valeur par defaut ?
	//std::string region; inutile
};

