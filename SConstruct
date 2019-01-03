import os
num_cpu = int(os.environ.get('NUM_CPU', 4))
print(num_cpu)
SetOption('num_jobs', num_cpu)
prodir = os.environ['PWD']
srcdir = prodir + '/src'
bindir = prodir + '/bin'
objdir = './obj'
cpppath = []
cxx = 'ccache g++'
cxxflags = ' -std=c++1z'
libpath = os.environ['HOME'] + "/usr/lib"
cppdefines = []
release_env = Environment(ENV=os.environ, CXX=cxx, CCFLAGS = '-O3' + cxxflags, CPPPATH = cpppath, LIBPATH=libpath, CPPDEFINES=cppdefines)
debug_env = Environment(ENV=os.environ, CXX=cxx, CCFLAGS = '-Wall -ggdb3' + cxxflags, CPPPATH = cpppath, LIBPATH=libpath, CPPDEFINES=cppdefines)

env = release_env
debug = ARGUMENTS.get('debug', 0)
if debug != 0:
    env = debug_env

Decider('MD5')

vars = Split('env srcdir bindir objdir')
for var in vars:
    Export(var)

SConscript('1st/SConscript', exports = vars)
