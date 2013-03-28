#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "stylesheet.h"

namespace litehtml {
  class context {
    litehtml::css m_master_css;
  public:
    void load_master_stylesheet(const wchar_t* str);
    litehtml::css& master_css() {
      return m_master_css;
    }
  };
}

#endif /** _CONTEXT_H_ */
