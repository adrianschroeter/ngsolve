#ifndef FILE_BOUNDARYLAYER
#define FILE_BOUNDARYLAYER


///
extern void InsertVirtualBoundaryLayer (Mesh & mesh);

/// Create a typical prismatic boundary layer on the given 
/// surfaces

class BoundaryLayerParameters
{
public:
  // parameters by Philippose ..
  Array<int> surfid;
  int prismlayers = 1;
  double hfirst = 0.01;
  double growthfactor = 1;
};

extern void GenerateBoundaryLayer (Mesh & mesh, BoundaryLayerParameters & blp);


#endif
