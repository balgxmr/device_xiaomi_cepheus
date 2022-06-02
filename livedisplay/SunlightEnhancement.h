/*
 * Copyright (C) 2019-2020 The LineageOS Project
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

<<<<<<< HEAD
#ifndef VENDOR_LINEAGE_LIVEDISPLAY_V2_1_SUNLIGHTENHANCEMENT_H
#define VENDOR_LINEAGE_LIVEDISPLAY_V2_1_SUNLIGHTENHANCEMENT_H

#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <vendor/lineage/livedisplay/2.1/ISunlightEnhancement.h>
=======
#ifndef VENDOR_LINEAGE_LIVEDISPLAY_V2_0_SUNLIGHTENHANCEMENT_H
#define VENDOR_LINEAGE_LIVEDISPLAY_V2_0_SUNLIGHTENHANCEMENT_H

#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <vendor/lineage/livedisplay/2.0/ISunlightEnhancement.h>
>>>>>>> parent of c7f60f1... [SQUASH]cepheus: Nuke LiveDisplay HAL

namespace vendor {
namespace lineage {
namespace livedisplay {
<<<<<<< HEAD
namespace V2_1 {
namespace implementation {

using ::android::sp;
using ::android::hardware::Return;
using ::android::hardware::Void;

class SunlightEnhancement : public ISunlightEnhancement {
  public:
    // Methods from ::vendor::lineage::livedisplay::V2_1::ISunlightEnhancement follow.
=======
namespace V2_0 {
namespace implementation {

using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

class SunlightEnhancement : public ISunlightEnhancement {
  public:
    // Methods from ::vendor::lineage::livedisplay::V2_0::ISunlightEnhancement follow.
>>>>>>> parent of c7f60f1... [SQUASH]cepheus: Nuke LiveDisplay HAL
    Return<bool> isEnabled() override;
    Return<bool> setEnabled(bool enabled) override;
};

}  // namespace implementation
<<<<<<< HEAD
}  // namespace V2_1
=======
}  // namespace V2_0
>>>>>>> parent of c7f60f1... [SQUASH]cepheus: Nuke LiveDisplay HAL
}  // namespace livedisplay
}  // namespace lineage
}  // namespace vendor

<<<<<<< HEAD
#endif  // VENDOR_LINEAGE_LIVEDISPLAY_V2_1_SUNLIGHTENHANCEMENT_H
=======
#endif  // VENDOR_LINEAGE_LIVEDISPLAY_V2_0_SUNLIGHTENHANCEMENT_H
>>>>>>> parent of c7f60f1... [SQUASH]cepheus: Nuke LiveDisplay HAL
