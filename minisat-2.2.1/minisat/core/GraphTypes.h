// __SZH_ADD_BEGIN__
#ifndef GRAPHTYPES_H
#define GRAPHTYPES_H

#include <iostream>
#include <vector>
#include <bitset>
#include <set>

#include "../../minisat/mtl/Vec.h"
#include "../../minisat/mtl/Heap.h"
#include "../../minisat/mtl/Alg.h"
#include "../../minisat/core/SolverTypes.h"
#include "../../minisat/mtl/Sort.h"

#define MAX_NODES 10000

namespace Minisat
{

typedef std::vector<Lit> literal_vector;
typedef std::set<Lit> literal_set;

enum edge_kindt
{
    OC_NA,
    OC_APO,
    OC_PO,
    OC_RF,
    // the following are exclusive for ICD
    OC_WS,
    OC_FR,
    // the following is for data race
    OC_RACE
};

edge_kindt str_to_kind(const std::string& str);
std::string kind_to_str(edge_kindt kind);
std::ostream& operator<<(std::ostream& out, const literal_vector& v);

}
#endif // GRAPHTYPES_H
// __SZH_ADD_END__