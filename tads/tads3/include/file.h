#pragma once
/* if we're using File objects, we probably want FileName objects as well */
#include "filename.h"
     *   any directory path.  This parses the filename according to the local
     *   file system's syntax rules.  For example, given the filename
     *   'a/b/c.txt', if you're running on a Unix or Linux machine, the
     *   function returns 'c.txt'.
     *   
     *   Note that this function doesn't attempt to open the file or check
     *   for its existence or validity; it simply parses the name according
     *   to the local syntax conventions.
     *   
     *   (It's recommended that you use the newer FileName.getBaseName() in
     *   place of this function.)
     *   
     *   (It's recommended that you use the newer FileName.deleteFile() in
     *   place of this function.)