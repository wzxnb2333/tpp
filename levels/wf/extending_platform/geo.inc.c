const GeoLayout wf_geo_000B10[] = {
   GEO_CULLING_RADIUS(650),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_0700F018),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout wf_geo_000B38[] = {
   GEO_CULLING_RADIUS(650),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_0700F018),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout wf_geo_000B60[] = {
   GEO_CULLING_RADIUS(650),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_0700F018),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, extending_platform_decal_dl_mesh),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
