# Top level targets that are defined in subsidiary SConscripts
#
# lib               -- build shared library object
# install           -- install everything under prefix directory
# install-include   -- install C++ header files
# install-lib       -- install shared library object

import os
import platform

def subdictionary(d, keyset):
    return dict([kv for kv in d.items() if kv[0] in keyset])

# copy system environment variables related to compilation
DefaultEnvironment(ENV=subdictionary(os.environ, [
    'PATH', 'PYTHONPATH',
    'CPATH', 'CPLUS_INCLUDE_PATH', 'LIBRARY_PATH',
    'LD_LIBRARY_PATH', 'DYLD_LIBRARY_PATH',
    ])
)

# Create construction environment
env = DefaultEnvironment().Clone()

# Variables definitions below work only with 0.98 or later.
env.EnsureSConsVersion(0, 98)

# Customizable compile variables
vars = Variables('sconsvars.py')

vars.Add('tests', 'Custom list of unit test sources', None)
vars.Add(EnumVariable('build',
    'compiler settings', 'debug',
    allowed_values=('debug', 'fast')))
vars.Add(BoolVariable('profile',
    'build with profiling information', False))
vars.Add(PathVariable('prefix',
    'installation prefix directory', '/usr/local'))
vars.Update(env)
vars.Add(PathVariable('libdir',
    'object code library directory [prefix/lib]',
    env['prefix'] + '/lib',
    PathVariable.PathAccept))
vars.Add(PathVariable('includedir',
    'installation directory for C++ header files [prefix/include]',
    env['prefix'] + '/include',
    PathVariable.PathAccept))
vars.Add(PathVariable('datadir',
    'installation directory for architecture independent data [prefix/share]',
    env['prefix'] + '/share',
    PathVariable.PathAccept))
vars.Add(BoolVariable('enable_objcryst',
    'enable objcryst support, when installed', True))
vars.Update(env)
env.Help(vars.GenerateHelpText(env))

builddir = env.Dir('build/%s-%s' % (env['build'], platform.machine()))

Export('env')

if os.path.isfile('sconscript.local'):
    env.SConscript('sconscript.local')

env.SConscript('src/SConscript', variant_dir=builddir)

# vim: ft=python
