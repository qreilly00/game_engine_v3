# build option variables
bld = 0 # 0 = test; 1 = release
env = 1 # 0 = c++; 1 = c++ & sfml

# build location variables

varSrc0 = 'src'

varObj0 = 'bld/test/'
varTrg0 = 'bin/test/app'

varObj1 = 'bld/release/'
varTrg1 = 'bin/release/app'

trg = '' #'bin/app'
src = '' #['bld/main.cpp', Glob('bld/window/*.cpp'), Glob('bld/input/*.cpp')]
libs = ['sfml-window', 'sfml-graphics', 'sfml-system', '-lpthread']
libpath = ['lib/SFML-2.5.1/lib']

# build environment variables

env0 = Environment(CCFLAGS = '-std=c++11 -pthread')
env1 = Environment(CCFLAGS = '-std=c++11 -pthread -Ilib/SFML-2.5.1/include')

# build option if statements

if bld == 0: # 0 = test
	VariantDir(varObj0, varSrc0, duplicate = 0) # set object and source folder
	trg = varTrg0 # set target directory
	src = [varObj0 + 'main.cpp', Glob(varObj0 + '/window/*.cpp'), Glob(varObj0 + '/sprite/*.cpp')] # set all source files
elif bld == 1: # 1 = release
	VariantDir(varObj1, varSrc0, duplicate = 0) # set object and source folder
	trg = varTrg1 # set target directory
	src = [varObj1 + 'main.cpp', Glob(varObj1 + '/window/*.cpp'), Glob(varObj1 + '/sprite/*.cpp')] # set all source files

if env == 0: # 0 = c++
    env0.Program(target = trg, source = src) # create program without sfml
elif env == 1: # 1 = c++ & sfml
    env1.Program(target = trg, source = src, LIBS = libs, LIBPATH = libpath) # create program with sfml

#VariantDir('bld', 'src', duplicate = 0)
#Program(target = 'bin/app', source = ['src/main.cpp'])
#Program(target = 'bin/app', source = ['src/main.cpp', Glob('src/difficulty/*cpp'), Glob('src/button/*.cpp'), Glob('src/simon/*.cpp'), Glob('src/timeUtil/*.o')], , LIBS = ['sfml-window', 'sfml-graphics', 'sfml-system', '-lpthread'], LIBPATH = ['lib/SFML-2.5.1/lib'])
