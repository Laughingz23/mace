// Copyright 2020 The MACE Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#ifndef MACE_OPS_DELEGATOR_DEPTHWISE_DECONV_2D_H_
#define MACE_OPS_DELEGATOR_DEPTHWISE_DECONV_2D_H_

#include "mace/ops/delegator/deconv_2d.h"
namespace mace {
namespace ops {
namespace delegator {

typedef Deconv2dParam DepthwiseDeconv2dParam;
typedef Deconv2dParam GroupDeconv2dParam;

typedef Deconv2d DepthwiseDeconv2d;
typedef Deconv2d GroupDeconv2d;

}  // namespace delegator
}  // namespace ops
}  // namespace mace

#endif  // MACE_OPS_DELEGATOR_DEPTHWISE_DECONV_2D_H_
