#include <gst/gst.h>
#include <stdio.h>
#include <wayland-client.h>
//#include <gstgldisplay_wayland.h>
//#include <gst/gl/wayland/wayland.h>
//
// main is where all program execution starts
//
int main(int argc, char **argv) {
  printf("Hello there.\n");

  struct wl_display *display = NULL;

  display = wl_display_connect(NULL);
  if (display == NULL) {
    fprintf(stderr, "Can't connect to display\n");
    exit(1);
  }
  printf("connected to display\n");
  //GstGLDisplayWayland* a = gst_gl_display_wayland_new(display);

  wl_display_disconnect(display);
  printf("disconnected from display\n");

  exit(0);
  return 0;
}
