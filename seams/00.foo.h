/* Kabuki Database @version 0.x
@link    https://github.com/kabuki-starship/kabuki.db.git
@file    /seams/00.foo.h
@author  Cale McCollough <https://calemccollough.github.io>
@license Copyright (C) 2014-9 Cale McCollough; all right reserved (R). 
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, You can 
obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once
#include <_config.h>

#if SEAM == KABUKI_DB_FOO
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace kabuki { namespace db { 
inline const CH1* _0_Foo (CH1* seam_log, CH1* seam_end, const CH1* args) {
#if SEAM >= KABUKI_DB_FOO
  TEST_BEGIN;

  PRINT_HEADING ("Testing Foo Fun.");

#endif
  return 0;
}
}  //< namespace db
}  //< namespace kabuki
