
int FUN_ram_420202ae(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                    uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iStack_74;
  byte bStack_6e;
  ushort auStack_58 [2];
  int iStack_54;
  undefined1 auStack_50 [36];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0x110b;
  }
  else {
    iVar1 = FUN_ram_42020034();
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4201f72a(param_3);
      if (iVar1 == 0) {
        if ((param_3 & 0xf) != param_6) {
          return 0x1103;
        }
        iVar1 = FUN_ram_40399d6c(param_5,auStack_58);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        if (param_6 < auStack_58[0]) {
          return 0x110c;
        }
        iVar1 = FUN_ram_4201f3f4(param_5,(uint)auStack_58[0],0);
        if (iVar1 == iStack_54) {
          uVar2 = (uint)auStack_58[0];
          for (uVar3 = 1; uVar3 < bStack_6e; uVar3 = uVar3 + 1) {
            iVar1 = FUN_ram_4201f830(param_1,uVar3,auStack_50);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar4 = uVar2;
            if (0x20 < uVar2) {
              uVar4 = 0x20;
            }
            iVar1 = FUN_ram_40399d6c(param_5,auStack_50,uVar4);
            if (iVar1 != 0) {
              return 0x1118;
            }
            iStack_74 = FUN_ram_4201f3f4(auStack_50,uVar4,(uint)&iStack_74 & -(uint)(uVar3 != 1));
            uVar2 = uVar2 - uVar4;
            param_5 = param_5 + uVar4;
          }
          if (iStack_54 == iStack_74) {
            return 0;
          }
        }
      }
      iVar1 = 0x1118;
    }
  }
  return iVar1;
}

