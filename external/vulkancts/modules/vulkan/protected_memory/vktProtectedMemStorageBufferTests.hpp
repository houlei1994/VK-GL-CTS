#ifndef _VKTPROTECTEDMEMSTORAGEBUFFERTESTS_HPP
#define _VKTPROTECTEDMEMSTORAGEBUFFERTESTS_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2017 The Khronos Group Inc.
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
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
 *
 *//*!
 * \file
 * \brief Protected memory storage buffer tests
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "tcuTestCase.hpp"

namespace vkt
{
namespace ProtectedMem
{

tcu::TestCaseGroup*		createReadStorageBufferTests	(tcu::TestContext& testCtx);
tcu::TestCaseGroup*		createWriteStorageBufferTests	(tcu::TestContext& testCtx);
tcu::TestCaseGroup*		createAtomicStorageBufferTests	(tcu::TestContext& testCtx);

} // ProtectedMem
} // vkt

#endif // _VKTPROTECTEDMEMSTORAGEBUFFERTESTS_HPP
