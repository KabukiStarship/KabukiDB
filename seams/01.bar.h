/* Kabuki Database @version 0.x
@link    https://github.com/kabuki-starship/kabuki.db.git
@file    /seams/01.bar.h
@author  Cale McCollough <https://calemccollough.github.io>
@license Copyright (C) 2014-9 Cale McCollough; all right reserved (R). 
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, You can 
obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once
#include <module_config.h>

#if SEAM == KABUKI_DB_BAR
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace kabuki { namespace db { 
inline const CH1* _1_Bar (CH1* seam_log, CH1* seam_end, const CH1* args) {
#if SEAM >= KABUKI_DB_BAR
  TEST_BEGIN;

  PRINT_HEADING ("Testing Foo fun.");

#endif
  return 0;
}
}  //< namespace db
}  //< namespace kabuki
