// dllmain.h : Declaration of module class.

class CGMBAudioCOMModule : public ATL::CAtlDllModuleT< CGMBAudioCOMModule >
{
public :
	DECLARE_LIBID(LIBID_GMBAudioCOMLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_GMBAUDIOCOM, "{3E758540-6E0E-4CC0-9F38-2AFA21BB9B6B}")
};

extern class CGMBAudioCOMModule _AtlModule;
