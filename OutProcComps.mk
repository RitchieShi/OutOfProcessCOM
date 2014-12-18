
OutProcComps.dll: dlldata.obj OutProcCom_p.obj OutProcCom_i.obj
	link /dll /out:OutProcComps.dll /def:OutProcComps.def /entry:DllMain dlldata.obj OutProcCom_p.obj OutProcCom_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del OutProcComps.dll
	@del OutProcComps.lib
	@del OutProcComps.exp
	@del dlldata.obj
	@del OutProcCom_p.obj
	@del OutProcCom_i.obj
