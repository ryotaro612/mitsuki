project('mitsuki', 'c')
gst_dep = dependency('gstreamer-1.0', version : '>=1.0')
wl_dep = dependency('wayland-client')
executable('demo', 'src' / 'main.c', dependencies : [gst_dep, wl_dep])
