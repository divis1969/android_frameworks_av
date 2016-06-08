/*
 * Copyright (C) 2016
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_SERVERS_CAMERA_MZCAMERASERVICE_H
#define ANDROID_SERVERS_CAMERA_MZCAMERASERVICE_H

#include <camera/IMZCameraService.h>

namespace android {

namespace meizu {

namespace camera {

class MZCameraService :
    public BnMZCameraService
{
public:
    MZCameraService();
    void instantiate();
};

} // namespace camera
} // namespace meizu
} // namespace android

#endif
