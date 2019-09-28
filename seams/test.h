/* Kabuki Database @version 0.x
@link    https://github.com/kabuki-starship/kabuki.db.git
@file    /seams/test.h
@author  Cale McCollough <https://calemccollough.github.io>
@license Copyright (C) 2014-9 Cale McCollough; all right reserved (R). 
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, You can 
obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once
#include <module_config.h>

#include "00.foo.h"
#include "01.bar.h"

namespace kabuki { namespace db { 

static const CH1* Test(CH1* seam_log, CH1* seam_end,
                        const CH1* args) {
  return TTestTree<Foo, Bar>(seam_log, seam_end, args);
}
}  //< namespace db
}  //< namespace kabuki
