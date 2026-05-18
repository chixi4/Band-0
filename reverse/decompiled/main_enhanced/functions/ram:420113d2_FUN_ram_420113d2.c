
bool FUN_ram_420113d2(uint *param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_2c [8];
  uint uStack_24;
  
  uVar1 = *param_1 >> 0x11 & 0x1f;
  FUN_ram_4201217a(param_3,uVar1,auStack_2c);
  if (((uStack_24 & 2) == 0) && (((uStack_24 & 1) == 0 || (param_4 != -1)))) {
    uVar4 = (uint)(short)*param_1;
    uVar3 = (int)uVar4 >> 8 & 0xf;
    if (((uVar3 == 0) || (((int)param_2 >> uVar3 & 1U) != 0)) && ((uVar4 & 1) == 0)) {
      if ((uVar4 & 0xc) == 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      if ((uVar4 & 8) != 0) {
        return false;
      }
      if ((uVar4 & 4) == 0) {
        iVar2 = FUN_ram_420b6232(uVar1);
        return iVar2 == 0;
      }
      if ((param_2 & 0x100) == 0) {
        return false;
      }
      return (param_2 >> 10 & 1) == (uVar4 >> 1 & 1);
    }
  }
  return false;
}

