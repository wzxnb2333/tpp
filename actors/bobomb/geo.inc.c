/**************************************************************/
/*	shape data bom_basedata (skeleton & animation) */
/**************************************************************/

#define	softspriteON	1

Hierarchy RCP_HmsEnemybom_basedata[] = {
 hmsShadow(70, 200, 1)
 hmsBegin()

 hmsScale(0.25f)
    hmsBegin()
 
#if softspriteON
      hmsJoint(RM_SURF,NULL,0,0,0)  /* body_sprite(35) */
	  hmsBegin()
		hmsBboard(0,0,0)
	    hmsBegin()
		  hmsGfx(RM_SPRITE,gfx_bom)
	  	hmsEnd()
	  hmsEnd()
#else
     hmsJoint(RM_SURF,RCP_bom_basedata3,0, 0,0)  /* sphere7_1(9) */
#endif

      hmsBegin()
         hmsJoint(RM_SURF,RCP_bom_basedata2,0,0,0)  /* cyl2(8) */
         hmsJoint(RM_SURF,NULL,42,-39,0)  /* chn5(7) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt5_1(4) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,63,0,0)  /* jnt5_2(2) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_bom_basedata0,0,0,0)  /* cube3(0) */
               hmsEnd()
            hmsEnd()
         hmsEnd()
         hmsJoint(RM_SURF,NULL,-42,-39,0)  /* chn7(6) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt7_1(5) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,63,0,0)  /* jnt7_2(3) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_bom_basedata1,0,0,0)  /* cube2(1) */
               hmsEnd()
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()

 hmsEnd()
 hmsExit()
};

static long long bom_parts_dmmy50 = 0;

Hierarchy RCP_HmsBomParts[] = { 
        hmsShadow(30, 150, 1)
        hmsBegin()
		hmsScale(0.25f)
                hmsBegin()
                        hmsGfx(RM_SURF, RCP_bom_basedata0)
                hmsEnd()
        hmsEnd()
        hmsExit()
};

Hierarchy RCP_HmsIronBall[] = { 
        hmsShadow(70, 200, 1)
        hmsBegin()
		  hmsGfx(RM_SPRITE,gfx_bom)
        hmsEnd()
        hmsExit()
};
