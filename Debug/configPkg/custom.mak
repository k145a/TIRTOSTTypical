## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,ea8fnv linker.cmd package/cfg/app_pea8fnv.oea8fnv

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/app_pea8fnv.xdl
	$(SED) 's"^\"\(package/cfg/app_pea8fnvcfg.cmd\)\"$""\"C:/ti/workspace_v6_0/TIRTOSTTypical/Debug/configPkg/\1\""' package/cfg/app_pea8fnv.xdl > $@
	-$(SETDATE) -r:max package/cfg/app_pea8fnv.h compiler.opt compiler.opt.defs
