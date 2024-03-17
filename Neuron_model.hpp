#ifndef Neuron_model_hpp
#define Neuron_model_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <bitset>


class NeuronModel
{
private:
  const double rateOfTraining = 0.3;
  int varNum = 0;
  std: :vector<double> weight;
  std: :vector<bool> truthTable;

  bool func(bool x1, bool x2, bool x3, bool x4);
  void fillTruthTable();
  int fa1(double net);
  int fa2(double net);
  double fa2derivate(double net);
  double net(bool x1, bool x2, bool x3, bool x4, std:: vector<double> weight);

pablic:
  NeuronModel(int VariableNum);
  void fullTraining(int mode);
  void minTraining(int mode);
  ~NeuronModel();
     
} 