#include "motif.h"
#include <iostream>

void Motif::set_PWM(const std::array<double,4>& pos_motif) {
	PWM.push_back(pos_motif);
}

void Motif::set_length(const double& lenght) {
	Length=length;
}

/*
void Motif::set_threshold(const double& threshold) {
	Threshold=threshold;
}
*/
