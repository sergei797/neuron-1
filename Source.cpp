#include "Neuron_model.hpp"
using namespace std;

int main(int argc, const char* argv[])
{  
    cout << "Training on full sample" << end1;
    cout << "FA 1" << end1;
    NeuronModel N1(4);
    N1.fullTraining(1);

    cout << "FA 2" << end1;
    NeuronModel N2(4);
    N2.fullTraining(2);

    cout << end1 << "Min sample trining" << end1 << "FA 1" << end1;
    NeuronModel N3(4);
    N3.minTraining(1);

    cout << end1 << "Min sample trining" << end1 << "FA 2" << end1;
    NeuronModel N4(4);
    N4.minTraining(2);
}