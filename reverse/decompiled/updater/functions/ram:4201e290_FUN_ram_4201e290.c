
int FUN_ram_4201e290(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [2];
  byte bStack_3e;
  byte bStack_24;
  
  if (*(int *)(param_1 + 100) == 1) {
    uStack_48 = 0;
    uStack_44 = 0;
    iVar2 = FUN_ram_4201defa(param_1,param_2,0x48,param_3,&uStack_48,auStack_40,0xff,param_4,
                             &uStack_44);
    if (iVar2 == 0) {
      uVar4 = (uint)bStack_24;
      iVar3 = FUN_ram_4201fe64(uStack_48,uStack_44);
      iVar2 = iVar3;
      if (iVar3 == 0) {
        if (param_4 == 0xff) {
          iVar2 = FUN_ram_4201defa(param_1,param_2,0x48,param_3,&uStack_48,auStack_40,0xff,0xff,
                                   &uStack_44);
          if ((iVar2 != 0) || (iVar2 = FUN_ram_4201fe64(uStack_48,uStack_44), iVar2 == 0)) {
            for (iVar1 = *(int *)(param_1 + 0x10); iVar2 = iVar3, iVar1 != 0;
                iVar1 = *(int *)(iVar1 + 4)) {
              uStack_44 = 0;
              do {
                iVar2 = FUN_ram_42020034(iVar1,param_2,0x42,param_3,&uStack_44,auStack_40,0xff);
                if (iVar2 == 0x1102) break;
                if (iVar2 != 0) {
                  return iVar2;
                }
                iVar2 = FUN_ram_4201fe64(iVar1,uStack_44);
                uStack_44 = bStack_3e + uStack_44;
                if (iVar2 != 0) {
                  return iVar2;
                }
              } while (uStack_44 < 0x7e);
            }
          }
        }
        else if ((param_4 == 0) || (uVar4 = uVar4 ^ 0x80, param_4 == 0x80)) {
          for (; param_4 < uVar4; param_4 = param_4 + 1 & 0xff) {
            iVar3 = FUN_ram_4201defa(param_1,param_2,0x42,param_3,&uStack_48,auStack_40,param_4,0xff
                                     ,&uStack_44);
            if (iVar3 != 0) goto LAB_ram_4201e2d2;
            iVar3 = FUN_ram_4201fe64(uStack_48,uStack_44);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
        }
      }
    }
    else {
LAB_ram_4201e2d2:
      iVar2 = 0x1102;
    }
  }
  else {
    iVar2 = 0x1101;
  }
  return iVar2;
}

