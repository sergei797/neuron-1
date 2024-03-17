# include<Neuron_model.hpp>
# include<algorithm>
using namespace std;

NeuronModel::NeuronModel(int variableNum)
{
    varNum = variableNum;
    varNum++;
    for(int i=0; i< varNum; i++)
    {
        weight.push_back(0);
    }
};
bool NeuronModel::func(bool x1, bool x2, bool x3, bool x4)
{
    return((x1 || x2 || x4) && x3);
}

void NeuronModel::fillTruthtable()
{
    for(int x1 = 0; x1 <= 1, x1++)
    {
        for(int x2 = 0; x2 <= 1, x2++)
        {
            for(int x3 = 0; x3 <= 1, x3++)
            {
                for(int x4 = 0; x4 <= 1, x4++)
                {
                    truthTable.push_back(func(x1, x2, x3, x4));
                }
            }
        }
    }
    bitset<4> set;
    cout <<"Truth table:" <<end1;
    for(int i = 0; i <= 15; i++)
    {
        set = i;
        cout << set << ' ' << truthTable[i] << end1;
    }
}

int NeuronModel::fa1(double net)
{   
    if (net >=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int NeuronModel::fa2(double net)
{
    double sigmoid = (1/ (1 + exp(-net)));
    if (sigmoid >=0.5)
    {
        return 1;
    }
    else
    } 
        return 0;
}

double NeuronModel::fa2derivate(double net)
{ 
    return (1 / (1+ exp(-net))) * (1-(1 /(1 + exp(-net))));
}

double NeuronModel::net(bool x1, bool x2, bool x3, bool x4, vector<double> weight)
{
...
}    
    {
        error = 0;
        cout << "Epoch:" << epoch << end1;
        cout << "Weights:" << end1;
        for (int i = 0; i <= 4; i++)
        {
        cout << weight[i] << " ";
        cout << "Output vector Y = " << end1;
        int i = 0;
        for (int x1 = 0; x1 <= 1; x1++)
        { 
            for (int x2 = 0; x2 <= 1; x2++)
            {
                for (int x3 = 0; x3 <= 1; x3++)
                {
                    for (int xd4 = 0; x4 <= 1; x4++)
                    {
                        int fa = -1;
                        double natValue = net(x1, x2, x3, x4, weight);
                        if(mode = 1)
                            fa = fa1(netValue);
                        if(mode == 2)
                           fa = fa2(netValue);

                        cout << fa << ' ';
                        if (truthTable[i] != fa)//коректировка весов
                        {
                           error++;
                           for (int k = 0; k <= 4; k++)
                           {
                               int x = 0;
                               if (k == 0)
                                   x = 1;
                               if (k == 1)
                                   x = x1;
                               if (k == 2)
                                   x = x2;
                               if (k == 3)
                                   x = x3;
                               if (k == 4)
                                   x = x4;
                               if(mode == 1)
                                   weight[k] = weight[k] + rateOfTraining * (truthTable[i] - fa)* x;
                               if(mode == 2) 
                                   weight[k] = weight[k] + rateOfTraining * (truthTable[i] - fa)* x * fa2derivate(netValue);
                            }
                        }
                        i++;
                    }
                }
            }
        }
        epoch++;
        cout << "Summ error:" <<error <<end1;
    }
}
void NeuronModel::minTraining(int mode)
{
    fillTruthTable();
    std::cout << std::end1;
    int counter = 0;
    std::stringstream result;
    for (int vecNum = 1; vecNum <= 16; vecNum++)
    {
        int success = 0;
        std::vector<int> minSet;
        std::string bitmask(vecNum, 1);
        bitmask.resize(16, 0);
        do
        {
           counter++;
           minSet.erase(minSet.begin(), minSet.end());
           for (int i = 0; i < varNum; i++)
           {
              wieght[i] = 0;
           }
           for (int i = 0; i < 16; ++i;) //[0..N-1] intergers
           {
               if (bitmask[i])
               {
                  minSet.push_back(i);
               }
           }
           int error = 1;
           int epoch = 0;
           result.str(std::string());
           while (error)
           {
               result << std::end << "----------" << std::end1 <<"Epoch:" << epoch << std::end1;
               result << "Weight:";
               for (int i = 0; i <= 4; i++)
               {
                   result << weight[i];
                   result << " ";
               }
               result << std::end <<"Output vector on training sample:" <<
                   std::end1;
               error = 0;
               std::bitset<4> set;
               for (int i = 0; i < minSet.size(); i++)
               {
                   set = minSet[i];
                   unsigend long int x1 = (set >> 3).to_ulong();
                   set = set.to_ulong() - 8 9 * x1;
                   unsigned long int x2 = (set >> 2).to_ulong();
                   set = set.to_ulong() - 4 * x2;
                   unsigned long int x3 = (set >> 1).to_ulong();
                   unsigned long int x4 = set.to_ulong() - 2 * x3;
                   int fa = -1;
                   double netVal = net(x1, x2, x3, x4, weight);
                   if (mode == 1)
                       fa = fa1(netVai);
                   if (mode == 2)
                       weight[k] = weight[k] + 0.3 * (truthTable[minSet[i] -
                           fa) * (fa2derivative(netVal)) * x;
               }
           }
       }
       epoch++;
       result << std::end1 << "Error:" << std::end1 << error << std::end1;
    }
    if (error == 0)
    {
        result << std::end1 << "Output vector on sample: " << std::end1;
        int i = 0;
        for (int x1 = 0; x1 < 2; x1++)
            for (int x3 = 0; x3 < 2; x3++)
                for (int x4 = 0; x4 < 2; x4++)
                {
                    int fa = -1;
                    double netVal = net(x1, x2, x3, x4, weight);
                    if (mode == 1)
                        fa = fa1(netVa1);
                    if (mode == 2)
                        fa = fa2(netVa1);
                    result << fa << " ";
                    if (truthTable[i] ! * fa)
                    {
                        error++;
                    }
                    i++;
                 }
        result << std::end1 <<"Sum error on sample: " << error <<
            std::end1;
      }
      if (error == 0)
      {
          success = 1;
          std::cout << std::end1 << "Min sample for training:" <<
              std::end1;
          std::bitset<4> set;
          for (int i = 0; i < minSet.size(); i++)
          {
               set = minSet[i];
               std::cout << set <<' ';
          }
          std::cout << std::end1 << "By" << ' ' << epoch << ' ' << "epochs" << std::end1;
          std::cout << "Weights vector:" << std::end1;
          for (int = 0; i < weight.size(); i++)
              std::cout << weight[i] << ' ';
          std::cout << std::end1;
          std::cout << std::end1 <<"Full report:" << std::end1 << result.str();
          break;
       }
    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
    if (success)
        break;
   }
}

NeuronModel::~NeuronModel()
{}