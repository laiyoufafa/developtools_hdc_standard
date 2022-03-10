/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef HDC_DAEMON_FORWARD_H
#define HDC_DAEMON_FORWARD_H
#include "daemon_common.h"

namespace Hdc {
class HdcDaemonForward : public HdcForwardBase {
public:
    HdcDaemonForward(HTaskInfoPtr hTaskInfo);
    virtual ~HdcDaemonForward();

private:
    bool SetupJdwpPoint(HCtxForwardPtr ctxPoint);
    static void SetupJdwpPointCallBack(uv_idle_t *handle);
};
}  // namespace Hdc

#endif