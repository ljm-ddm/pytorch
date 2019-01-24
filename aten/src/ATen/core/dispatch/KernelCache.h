#pragma once

namespace c10 {

/**
 * A kernel can keep around a cache to have better performance when it's
 * called multiple times. This is used by a lot of caffe2 kernels.
 * This cache owned by the call site and passed in to the kernel as a function
 * argument. It must inherit from KernelCache so the call site knows how to
 * store and destruct it.
 */
class KernelCache {
public:
  virtual ~KernelCache() = default;
};

}
