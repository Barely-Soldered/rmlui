#include <rmlui/core/traits.h>

namespace Rml {

int FamilyBase::GetNewId()
{
	static int id = 0;
	return id++;
}

} // namespace Rml
