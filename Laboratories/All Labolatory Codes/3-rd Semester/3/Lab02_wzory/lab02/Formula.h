#ifndef Formula_h
#define Formula_h

// print entire formula, which is described in operationsTab with data provided in dataTab, the size of operationsTab is given in nOperations, resultTab contains intermediate and final results
void PrintFormula(int nOperations, operationsTab_t operationsTab, dataTab_t dataTab, resultTab_t resultTab);

// print a piece of formula described in operationsTab, starting from the step opNo; data is provided in dataTab, the size of operationsTab is given in nOperations, resultTab contains intermediate and final results
void PrintFormula(int nOperations, int opNo, operationsTab_t operationsTab, dataTab_t dataTab, resultTab_t resultTab);

#endif 
