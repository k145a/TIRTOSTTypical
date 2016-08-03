#
_XDCBUILDCOUNT = 0
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_42_02_29/packages;C:/Users/RobsLaptop/myRepository/packages
override XDCROOT = c:/ti/xdctools_3_30_06_67_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_42_02_29/packages;C:/Users/RobsLaptop/myRepository/packages;c:/ti/xdctools_3_30_06_67_core/packages;..
HOSTOS = Windows
endif
