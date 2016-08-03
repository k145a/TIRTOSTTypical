#
_XDCBUILDCOUNT = 0
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/tirtos_sitara_2_00_01_23/packages;C:/ti/tirtos_sitara_2_00_01_23/products/bios_6_40_01_15/packages;C:/ti/tirtos_sitara_2_00_01_23/products/ndk_2_23_01_01/packages;C:/ti/tirtos_sitara_2_00_01_23/products/uia_2_00_00_28/packages;C:/ti/workspace_v6_0/TIRTOSTTypical/.config
override XDCROOT = C:/ti/xdctools_3_30_06_67_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/tirtos_sitara_2_00_01_23/packages;C:/ti/tirtos_sitara_2_00_01_23/products/bios_6_40_01_15/packages;C:/ti/tirtos_sitara_2_00_01_23/products/ndk_2_23_01_01/packages;C:/ti/tirtos_sitara_2_00_01_23/products/uia_2_00_00_28/packages;C:/ti/workspace_v6_0/TIRTOSTTypical/.config;C:/ti/xdctools_3_30_06_67_core/packages;..
HOSTOS = Windows
endif
