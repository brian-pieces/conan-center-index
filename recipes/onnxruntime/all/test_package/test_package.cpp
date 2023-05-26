
#include <onnxruntime_cxx_api.h>
//#include <coreml_provider_factory.h>
#include <iostream>

int main() {
  const auto& api = Ort::GetApi();
  std::cout << OrtGetApiBase()->GetVersionString() << std::endl;

//  uint32_t coreml_flags = 0;
//  std::cout << "coreml_default: " << coreml_flags << std::endl;
//  coreml_flags |= COREML_FLAG_ONLY_ENABLE_DEVICE_WITH_ANE;
//  std::cout << "coreml_with_ane: " << coreml_flags << std::endl;
//  assert(coreml_flags == 4);
  return 0;
}
