
int FUN_ram_42016248(uint param_1)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = 0x103;
  if ((DAT_ram_3fcc4f98 != '\0') && (iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,&uStack_14), iVar1 == 0))
  {
    if (600 < param_1) {
      param_1 = 600;
    }
    if ((param_1 & 0xffff) < 0x1e) {
      param_1 = 0x1e;
    }
    iVar1 = FUN_ram_4204c024(uStack_14,0x3c0a8778,param_1 & 0xffff);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4204c0c8(uStack_14);
      FUN_ram_4204c3d0(uStack_14);
      if (iVar1 == 0) {
        *(short *)(gp + -0x7b0) = (short)param_1;
        DAT_ram_3fcc4f95 = 1;
      }
    }
    else {
      FUN_ram_4204c3d0();
    }
  }
  return iVar1;
}

