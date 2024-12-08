#include "AggregationA.h"

cout << "Aggregaatio esimerkki:" << endl;
ClassB& refB = objB;
AggregationA objAggr(refB);
objAggr.setBinfo("Olion Agr asettama info");

cout << "objB: " << objB.getInfo() << endl;
cout << "objAggr: " << objAggr.getBinfo() << endl;
