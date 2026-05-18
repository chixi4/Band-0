
int FUN_ram_4201e17c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [3];
  byte bStack_5d;
  uint uStack_48;
  uint uStack_44;
  
  uStack_68 = 0;
  uStack_64 = 0;
  iVar1 = FUN_ram_4201defa(param_1,param_2,0x48,param_3,&uStack_68,auStack_60,0xff,0xff,0);
  if (iVar1 == 0) {
    if (uStack_48 == param_5) {
      uVar4 = uStack_44 >> 8 & 0xff;
      uVar5 = uStack_44 & 0xff;
      uVar7 = 0;
      uVar3 = uVar4;
      while( true ) {
        uVar6 = uVar3 & 0xff;
        iVar1 = 0;
        if (uVar5 <= (uVar6 - uVar4 & 0xff)) break;
        iVar1 = FUN_ram_4201defa(param_1,param_2,0x42,param_3,&uStack_68,auStack_60,uVar6,0xff,
                                 &uStack_64);
        if (iVar1 != 0) {
          iVar1 = 0x1102;
          break;
        }
        if ((param_5 - uVar7 < (uStack_48 & 0xffff)) ||
           (uVar2 = FUN_ram_4201f3f4(param_4,uStack_48 & 0xffff,0), uVar2 != uStack_44))
        goto LAB_ram_4201e1c4;
        iVar1 = FUN_ram_420202ae(uStack_68,param_2,0x42,param_3,param_4 + uVar7,uStack_48 & 0xffff,
                                 uVar6,0xff);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (bStack_5d != uVar3) goto LAB_ram_4201e26e;
        uVar3 = uVar3 + 1;
        uVar7 = uVar7 + (uStack_48 & 0xffff);
      }
      if (uVar7 != param_5) {
LAB_ram_4201e26e:
        iVar1 = -1;
      }
    }
    else {
LAB_ram_4201e1c4:
      iVar1 = 0x1118;
    }
  }
  else {
    iVar1 = 0x1102;
  }
  return iVar1;
}

