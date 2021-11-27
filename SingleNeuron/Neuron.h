#ifndef NEURON_H
#define NEURON_H
#include <string>

using namespace std;

class Neuron
{
public:
	static const int cols = 7, rows = 5;
	static const int weight_limit = 100000;
	int weight[cols][rows];
	int input_matrix[cols][rows];
	void get_axon();
	int get_weight_sum();
	bool check_result();
	bool load_weight_from_file();
	void recognize_letter();
	void study(bool real_result, int& restudy);
	void setup_input(int** p);
	Neuron();
	int axon[cols][rows];
	int weight_sum;
	void add_weight();
	void decrease_weight();
};

#endif