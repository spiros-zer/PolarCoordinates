-- (c) Spyridon Zervos


project('PolarCoordinates')
kind('StaticLib')
language('C++')
staticruntime('on')

targetdir('../bin/' .. outputdir .. '/%{prj.name}')
objdir('../bin-int/' .. outputdir .. '/%{prj.name}')

files({
    'inc/**.h',
    'src/**.cpp'
})

includedirs({
    'inc',
    'src'
})

filter('system:windows')
systemversion('latest')

filter('configurations:Debug')
runtime('Debug')
symbols('On')

filter('configurations:Release')
runtime('Release')
optimize('On')
symbols('On')

filter('configurations:Dist')
runtime('Release')
optimize('Speed')
symbols('Off')