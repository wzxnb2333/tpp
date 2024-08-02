const GeoLayout water_land_area_1_geo[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND(BACKGROUND_UNDERWATER_CITY, geo_skybox_main),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(2, 0, 2000, 6000, 2560, 0, 512, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, water_land_1_dl_mesh),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, water_land_2_dl_mesh),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, water_land_3_dl_mesh),
               GEO_DISPLAY_LIST(LAYER_TRANSPARENT, water_land_3_arrow_dl_mesh),
               GEO_ASM(   0, geo_movtex_pause_control),
               GEO_ASM(0x2301, geo_movtex_draw_water_regions),
               GEO_RENDER_OBJ(),
               GEO_ASM(  2, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_ASM(4, AreaMap),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
