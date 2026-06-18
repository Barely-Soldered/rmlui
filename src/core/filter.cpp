#include <rmlui/core/filter.h>
#include <rmlui/core/render_manager.h>

namespace Rml {

Filter::Filter() {}

Filter::~Filter() {}

void Filter::ExtendInkOverflow(Element* /*element*/, Rectanglef& /*scissor_region*/) const {}

FilterInstancer::FilterInstancer() {}

FilterInstancer::~FilterInstancer() {}

} // namespace Rml
