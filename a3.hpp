/*  YOUR_FIRST_NAME
 *  YOUR_LAST_NAME
 *  YOUR_UBIT_NAME
 */
#include <math.h>
#ifndef A3_HPP
#define A3_HPP

__global__ void estimate(int n, float h, float* x, float* y){
        int i = blockIdx.x * blockDim.x + threadIdx.x;
        float K = 1/sqrt(2*M_PI)*exp(-pow(num, 2)/2);
}

void gaussian_kde(int n, float h, const std::vector<float>& x, std::vector<float>& y) {
        int size = n * sizeof(float);
        float* d_x;
        float* d_y;
        cudaMalloc(&d_x, size);
        cudaMalloc(&d_y, size);
        cudaMemcpy(d_x, x.data(), size, cudaMemcpyHostToDevice);

        cudaMemcpy(d_y, y.data(), size, cudaMemcpyDeviceToHost);
        cudaFree(d_x);
} // gaussian_kde

#endif // A3_HPP
