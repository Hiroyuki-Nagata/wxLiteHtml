#ifndef _EL_SPACE_H_
#define _EL_SPACE_H_

#include "element.h"
#include "el_text.h"

namespace litehtml {
  class el_space: public el_text {
  public:
    el_space(litehtml::document* doc);
    virtual ~el_space();

    virtual bool is_white_space();
  };
}

#endif /** _EL_SPACE_H_ */
