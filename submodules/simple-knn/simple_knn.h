/*
 * Copyright (C) 2023, Inria
 * GRAPHDECO research group, https://team.inria.fr/graphdeco
 * All rights reserved.
 *
 * This software is free for non-commercial, research and evaluation use
 * under the terms of the LICENSE.md file.
 *
 * For inquiries contact  george.drettakis@inria.fr
 */

#ifndef SUBMODULES_SIMPLE_KNN_SIMPLE_KNN_H
#define SUBMODULES_SIMPLE_KNN_SIMPLE_KNN_H

class SimpleKNN
{
  public:
    static void knn(int P, float3* points, float* meanDists);
};

#endif  // SUBMODULES_SIMPLE_KNN_SIMPLE_KNN_H
