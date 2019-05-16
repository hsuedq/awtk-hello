#include "awtk.h"
#include "base/assets_manager.h"
#ifndef WITH_FS_RES
#include "assets/inc/strings/en_US.data"
#include "assets/inc/strings/zh_CN.data"
#include "assets/inc/styles/default.data"
#include "assets/inc/styles/keyboard.data"
#include "assets/inc/styles/main.data"
#include "assets/inc/styles/window1.data"
#include "assets/inc/ui/kb_ascii.data"
#include "assets/inc/ui/kb_default.data"
#include "assets/inc/ui/kb_float.data"
#include "assets/inc/ui/kb_hex.data"
#include "assets/inc/ui/kb_int.data"
#include "assets/inc/ui/kb_phone.data"
#include "assets/inc/ui/kb_ufloat.data"
#include "assets/inc/ui/kb_uint.data"
#include "assets/inc/ui/main.data"
#include "assets/inc/ui/window1.data"
#ifdef WITH_STB_IMAGE
#include "assets/inc/images/arrow_down_n.res"
#include "assets/inc/images/arrow_down_o.res"
#include "assets/inc/images/arrow_down_p.res"
#include "assets/inc/images/arrow_left_n.res"
#include "assets/inc/images/arrow_left_o.res"
#include "assets/inc/images/arrow_left_p.res"
#include "assets/inc/images/arrow_right_n.res"
#include "assets/inc/images/arrow_right_o.res"
#include "assets/inc/images/arrow_right_p.res"
#include "assets/inc/images/arrow_up_n.res"
#include "assets/inc/images/arrow_up_o.res"
#include "assets/inc/images/arrow_up_p.res"
#include "assets/inc/images/check.res"
#include "assets/inc/images/checked.res"
#include "assets/inc/images/dialog_title.res"
#include "assets/inc/images/earth.res"
#include "assets/inc/images/edit_clear_n.res"
#include "assets/inc/images/edit_clear_o.res"
#include "assets/inc/images/edit_clear_p.res"
#include "assets/inc/images/empty.res"
#include "assets/inc/images/radio_checked.res"
#include "assets/inc/images/radio_unchecked.res"
#include "assets/inc/images/switch.res"
#include "assets/inc/images/unchecked.res"
#else
#include "assets/inc/images/arrow_down_n.data"
#include "assets/inc/images/arrow_down_o.data"
#include "assets/inc/images/arrow_down_p.data"
#include "assets/inc/images/arrow_left_n.data"
#include "assets/inc/images/arrow_left_o.data"
#include "assets/inc/images/arrow_left_p.data"
#include "assets/inc/images/arrow_right_n.data"
#include "assets/inc/images/arrow_right_o.data"
#include "assets/inc/images/arrow_right_p.data"
#include "assets/inc/images/arrow_up_n.data"
#include "assets/inc/images/arrow_up_o.data"
#include "assets/inc/images/arrow_up_p.data"
#include "assets/inc/images/check.data"
#include "assets/inc/images/checked.data"
#include "assets/inc/images/dialog_title.data"
#include "assets/inc/images/earth.data"
#include "assets/inc/images/edit_clear_n.data"
#include "assets/inc/images/edit_clear_o.data"
#include "assets/inc/images/edit_clear_p.data"
#include "assets/inc/images/empty.data"
#include "assets/inc/images/radio_checked.data"
#include "assets/inc/images/radio_unchecked.data"
#include "assets/inc/images/switch.data"
#include "assets/inc/images/unchecked.data"
#endif/*WITH_STB_IMAGE*/
#ifdef WITH_VGCANVAS
#endif/*WITH_VGCANVAS*/
#if defined(WITH_STB_FONT) || defined(WITH_FT_FONT)
#if defined(WITH_MINI_FONT)
#else/*WITH_MINI_FONT*/
#include "assets/inc/fonts/default.res"
#endif/*WITH_MINI_FONT*/
#else/*WITH_STB_FONT or WITH_FT_FONT*/
#endif/*WITH_STB_FONT or WITH_FT_FONT*/
#endif/*WITH_FS_RES*/

ret_t assets_init(void) {
  assets_manager_t* rm = assets_manager();

#ifdef WITH_FS_RES
#if defined(WITH_MINI_FONT)
  assets_manager_preload(rm, ASSET_TYPE_FONT, "default_mini");
#else/*WITH_MINI_FONT*/
  assets_manager_preload(rm, ASSET_TYPE_FONT, "default");
#endif/*WITH_MINI_FONT*/
  assets_manager_preload(rm, ASSET_TYPE_STYLE, "default");
#else
  assets_manager_add(rm, image_arrow_down_n);
  assets_manager_add(rm, image_arrow_down_o);
  assets_manager_add(rm, image_arrow_down_p);
  assets_manager_add(rm, image_arrow_left_n);
  assets_manager_add(rm, image_arrow_left_o);
  assets_manager_add(rm, image_arrow_left_p);
  assets_manager_add(rm, image_arrow_right_n);
  assets_manager_add(rm, image_arrow_right_o);
  assets_manager_add(rm, image_arrow_right_p);
  assets_manager_add(rm, image_arrow_up_n);
  assets_manager_add(rm, image_arrow_up_o);
  assets_manager_add(rm, image_arrow_up_p);
  assets_manager_add(rm, image_check);
  assets_manager_add(rm, image_checked);
  assets_manager_add(rm, image_dialog_title);
  assets_manager_add(rm, image_earth);
  assets_manager_add(rm, image_edit_clear_n);
  assets_manager_add(rm, image_edit_clear_o);
  assets_manager_add(rm, image_edit_clear_p);
  assets_manager_add(rm, image_empty);
  assets_manager_add(rm, image_radio_checked);
  assets_manager_add(rm, image_radio_unchecked);
  assets_manager_add(rm, image_switch);
  assets_manager_add(rm, image_unchecked);
  assets_manager_add(rm, strings_en_US);
  assets_manager_add(rm, strings_zh_CN);
  assets_manager_add(rm, style_default);
  assets_manager_add(rm, style_keyboard);
  assets_manager_add(rm, style_main);
  assets_manager_add(rm, style_window1);
  assets_manager_add(rm, ui_kb_ascii);
  assets_manager_add(rm, ui_kb_default);
  assets_manager_add(rm, ui_kb_float);
  assets_manager_add(rm, ui_kb_hex);
  assets_manager_add(rm, ui_kb_int);
  assets_manager_add(rm, ui_kb_phone);
  assets_manager_add(rm, ui_kb_ufloat);
  assets_manager_add(rm, ui_kb_uint);
  assets_manager_add(rm, ui_main);
  assets_manager_add(rm, ui_window1);
#ifdef WITH_VGCANVAS
#endif/*WITH_VGCANVAS*/
#endif

  tk_init_assets();
  return RET_OK;
}
