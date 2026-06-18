#include <rmlui/core/compiled_filter_shader.h>
#include "render_manager_access.h"

namespace Rml {

void CompiledFilter::AddHandleTo(FilterHandleList& list)
{
	if (resource_handle != InvalidHandle())
	{
		list.push_back(resource_handle);
	}
}

void CompiledFilter::Release()
{
	if (resource_handle != InvalidHandle())
	{
		RenderManagerAccess::ReleaseResource(render_manager, *this);
		Clear();
	}
}

void CompiledShader::Release()
{
	if (resource_handle != InvalidHandle())
	{
		RenderManagerAccess::ReleaseResource(render_manager, *this);
		Clear();
	}
}

} // namespace Rml
