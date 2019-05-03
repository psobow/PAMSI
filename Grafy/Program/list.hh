#ifndef LIST_HH_INCLUDED
#define LIST_HH_INCLUDED

#include "graph.hh"

class list : public graph{

public:

// Number of vertex

  int node;

// Value of connection between two vertices

  int weight;

// A pointer we need to add next connections
// between vertices

  class list * next;

// Wierchołek startowy
/* TU ZMIENIŁEM */
   int start;

public:

// Declaration of functions that are
// in list source file

   int returnStart();
   void loadList ();
   void showList ();
   void dijkstryListAlgorithm();

};

#endif // LIST_HH_INCLUDED