#pragma once

#include <rmlui/core/log.h>
#include <rmlui/core/types.h>

namespace Rml {

/**
    Provides a platform-dependent default implementation for message logging.
 */

class LogDefault {
public:
	static bool LogMessage(Log::Type type, const String& message);
};

} // namespace Rml
