#pragma once

#include <rmlui/core/header.h>

namespace Rml {

/**
    RmlUi's Interface to Time.
 */
class Clock {
public:
	/// Get the elapsed time since application startup
	/// @return Seconds elapsed since application startup.
	RMLUICORE_API static double GetElapsedTime();
};

} // namespace Rml
