
int FUN_ram_4204dda0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [3];
  byte bStack_4d;
  uint uStack_38;
  byte bStack_34;
  byte bStack_33;
  
  uStack_58 = 0;
  uStack_54 = 0;
  iVar1 = FUN_ram_4204d8d8(param_1,param_2,0x48,param_3,&uStack_58,auStack_50,0xff,0xff,0);
  if (iVar1 == 0) {
    if (uStack_38 == param_5) {
      uVar2 = 0;
      uVar3 = (uint)bStack_33;
      while( true ) {
        iVar1 = 0;
        if ((uint)bStack_34 <= ((uVar3 & 0xff) - (uint)bStack_33 & 0xff)) break;
        iVar1 = FUN_ram_4204d8d8(param_1,param_2,0x42,param_3,&uStack_58,auStack_50,uVar3 & 0xff,
                                 0xff,&uStack_54);
        if (iVar1 != 0) {
          iVar1 = 0x1102;
LAB_ram_4204de7a:
          FUN_ram_4204dc6e(param_1,param_2,param_3,0xff);
          break;
        }
        if (param_5 - uVar2 < (uStack_38 & 0xffff)) {
          iVar1 = 0x110c;
          goto LAB_ram_4204de7a;
        }
        iVar1 = FUN_ram_4204cc82(uStack_58,auStack_50,uStack_54,param_4 + uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (bStack_4d != uVar3) goto LAB_ram_4204de0c;
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 + (uStack_38 & 0xffff);
      }
      if (uVar2 == param_5) {
        return iVar1;
      }
    }
LAB_ram_4204de0c:
    iVar1 = -1;
  }
  else {
    iVar1 = 0x1102;
  }
  return iVar1;
}

