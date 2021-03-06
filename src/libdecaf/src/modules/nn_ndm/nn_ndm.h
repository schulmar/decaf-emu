#pragma once
#include "kernel/kernel_hlemodule.h"

namespace nn
{

namespace ndm
{

class Module : public kernel::HleModuleImpl<Module>
{
public:
   virtual void initialise() override;

public:
   static void RegisterFunctions();

private:
   static void registerInitFunctions();
};

} // namespace ndm

} // namespace nn
