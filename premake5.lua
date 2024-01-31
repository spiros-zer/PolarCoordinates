-- (c) Spyridon Zervos


workspace('PolarCoordinatesTest')
    architecture('x64')
    startproject('PolarCoordinatesTest')
    configurations { "Debug", "Release", "Dist" }

outputdir = '%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}'

include "test/PolarCoordinatesTest.lua"