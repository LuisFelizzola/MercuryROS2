// generated from
// rosidl_typesupport_c/resource/rosidl_typesupport_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef NAVIGATION__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
#define NAVIGATION__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_C_EXPORT_navigation __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_C_IMPORT_navigation __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_C_EXPORT_navigation __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_C_IMPORT_navigation __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_C_BUILDING_DLL_navigation
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_navigation ROSIDL_TYPESUPPORT_C_EXPORT_navigation
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_navigation ROSIDL_TYPESUPPORT_C_IMPORT_navigation
  #endif
#else
  #define ROSIDL_TYPESUPPORT_C_EXPORT_navigation __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_C_IMPORT_navigation
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_navigation __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_navigation
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATION__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
