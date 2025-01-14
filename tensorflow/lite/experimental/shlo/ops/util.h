/* Copyright 2024 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_LITE_EXPERIMENTAL_SHLO_OPS_UTIL_H_
#define TENSORFLOW_LITE_EXPERIMENTAL_SHLO_OPS_UTIL_H_

#include "absl/status/status.h"
#include "tensorflow/lite/experimental/shlo/shape.h"

namespace shlo_ref {

// Propages the input shape to the output shape.
//
// If the output shape is already populated, checks that is it compatible with
// the input.
absl::Status Propagate(const Shape& input_shape, Shape& output_shape);

}  // namespace shlo_ref

#endif  // TENSORFLOW_LITE_EXPERIMENTAL_SHLO_OPS_UTIL_H_
