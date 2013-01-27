#ifndef GROOVIM_SSL_H
#define GROOVIM_SSL_H

#include <Protocol/Protocol.h>

namespace groovim {

class SSL : public Protocol
{
public:
  // FIXME: static?
  void Initialize();
};

} // namespace of groovim

#endif
