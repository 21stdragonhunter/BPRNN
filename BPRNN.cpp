// BPRNN.cpp : main project file.

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>

//using namespace std;

namespace BPRNN {
	#include <cmath>
	#include <string>
	#include <iostream>
	class Neuron;
	class Synapse;

	class Network {

	public:
		Network(int* sizes[], double learning, double momentum, double decay, double minimum) : learning(learning), momentum(momentum), decay(decay), minimum(minimum) {

			

		}
		
		int run(double* inputs[], double* targets[], int maxEpoch, int pauseEpoch) {



		}
		
		void completeConnection(int index, int otherIndex) {



		}

		void minimumConnection(int index, int otherIndex) {



		}

		void newSynapse(Neuron* terminal, Neuron* dendrite) {



		}

		void newStaticSynapse(Neuron* terminal, Neuron* dendrite) {



		}

		double learning;
		double momentum;
		double decay;
		double minimum;

	private:
		double* propagate(double* inputs[]) {



		}
		
		double backpropagate(double* targets[]) {



		}

		void newInputGeneration(int size) {



		}

		void newGeneration(int size) {



		}

		int epoch;
		std::vector<Neuron*> generations;
		std::vector<Synapse*> synapses;

	};

	class Neuron {

	public:
		Neuron() {



		}

		void activate() {



		}

		void learn() {



		}

		std::vector<Synapse*> dendrites;
		std::vector<Synapse*> terminals;

		double output;
		double error;
		double prev;

	private:
		double sigmoid(double value) {

			return 1 / (1 + pow(exp(1), value));

		}

		double hyperbolic(double value) {



		}

		double sigmoidDerivative(double value) {



		}

		double hyperbolicDerivative(double value) {



		}

	};

	class Synapse {

	public:
		Synapse(Network* net, Neuron* terminal, Neuron* dendrite) : net(net), terminal(terminal), dendrite(dendrite) {

			terminal->terminals.push_back(this);
			dendrite->dendrites.push_back(this);

			weight = 1;
			input = 0;

		}
		
		void transfer() {

			input = terminal->output;

		}
		
		void update() {



		}

		Neuron* terminal;
		Neuron* dendrite;

		double input;
		double weight;

	private:
		Network* net;

	};
	
}

int main() {



}