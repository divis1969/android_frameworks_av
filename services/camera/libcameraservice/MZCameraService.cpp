#include "MZCameraService.h"

void MZCameraService::instantiate() {
    defaultServiceManager()->addService(
            String16("meizu.camera"), new MZCameraService());
}
