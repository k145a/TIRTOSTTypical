#
_XDCBUILDCOUNT = 0
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_42_02_29/packages;C:/Users/RobsLaptop/myRepository/packages;C:/ti/workspace_v6_0/TIRTOSTTypical/.config
override XDCROOT = C:/ti/xdctools_3_30_01_25_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_42_02_29/packages;C:/Users/RobsLaptop/myRepository/packages;C:/ti/workspace_v6_0/TIRTOSTTypical/.config;C:/ti/xdctools_3_30_01_25_core/packages;..
HOSTOS = Windows
endif
