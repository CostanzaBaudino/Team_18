#include "sample.h"

void Configuration::parse(int argc, char **argv) {
   
    //tclap
    //xoradd fichierF matriceM mutuellement exlusifs?
    
    cmd.parse(argc, argv);

    //load_matrix ou load_positions
}

void Configuration::load_matrix(const std::string &infile);//counts the lines to get motif length

void Configuration::load_positions(const std::string &infile);

void Configuration::run(); 

//Peut etre definir globalement _usage1_/_usage2_ pour utiliser
//#ifdef _usage1_     
//#elif defined _usage2_ 


//outputs ? à quel niveau écrit on les resultats dans les fichiers voulus?
//les resultats sont de type positions ds le 1er mode d utilisation
//de type motif dans le 2e
