# invoke SourceDir generated makefile for app.pea8fnv
app.pea8fnv: .libraries,app.pea8fnv
.libraries,app.pea8fnv: package/cfg/app_pea8fnv.xdl
	$(MAKE) -f C:\ti\workspace_v6_0\TIRTOSTTypical/src/makefile.libs

clean::
	$(MAKE) -f C:\ti\workspace_v6_0\TIRTOSTTypical/src/makefile.libs clean

