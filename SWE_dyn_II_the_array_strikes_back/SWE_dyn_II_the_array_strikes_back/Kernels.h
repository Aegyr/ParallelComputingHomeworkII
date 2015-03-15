#include "Utility.h"

//setting of border values
__global__ void setTopBorder_kernel(TreeArray* h, TreeArray* hu, TreeArray* hv, BoundaryType top);
__global__ void setBottomBorder_kernel(TreeArray* h, TreeArray* hu, TreeArray* hv, BoundaryType bottom);
__global__ void setRightBorder_kernel(TreeArray* h, TreeArray* hu, TreeArray* hv, BoundaryType right);
__global__ void setLeftBorder_kernel(TreeArray* h, TreeArray* hu, TreeArray* hv, BoundaryType left);

//computing the bathymetry
__global__ void computeBathymetry_kernel(TreeArray* h, TreeArray* b, TreeArray* Bu, TreeArray* Bv, float g, int refinementBaseX, int refinementBaseY, int maxRecursions);

//averaging of values
__device__ float getAveragedVerticalValue(TreeArray* arr, uint2 start, int refinementBase, int myDepth);
__device__ float getAveragedHorizontalValue(TreeArray* arr, uint2 start, int refinementBase, int myDepth);