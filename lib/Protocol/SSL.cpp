#include <Protocol/SSL.h>
#include <openssl/ssl.h>

using namespace groovim;

//===----------------------------------------------------------------------===//
// Protocol
//===----------------------------------------------------------------------===//

void groovim::SSL::Initialize()
{
  OpenSSL_add_ssl_algorithms();
}

