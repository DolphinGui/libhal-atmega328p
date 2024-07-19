// Copyright 2024 Khalil Estell
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <libhal-atmega/output_pin.hpp>

namespace hal::atmega {  // NOLINT

void output_pin::driver_configure(
  [[maybe_unused]] const settings& p_settings)  // Remove [[maybe_unused]]
{
  // Fill this out
}

void output_pin::driver_level(
  [[maybe_unused]] bool p_high)  // Remove [[maybe_unused]]
{
  // Fill this out
}

bool output_pin::driver_level()
{
  // Replace this with the correct implementation
  return true;
}
}  // namespace hal::atmega
