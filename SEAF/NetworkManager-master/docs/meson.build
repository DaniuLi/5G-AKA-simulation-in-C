version_conf = configuration_data()
version_conf.set('VERSION', nm_version)

version_xml = 'version.xml'

subdir('libnm')
subdir('api')

if enable_libnm_glib
  subdir('libnm-util')
  subdir('libnm-glib')
endif

test(
  'check-docs',
  find_program(join_paths(meson.source_root(), 'tools', 'check-docs.sh')),
  args: [meson.source_root(), meson.build_root()],
)
