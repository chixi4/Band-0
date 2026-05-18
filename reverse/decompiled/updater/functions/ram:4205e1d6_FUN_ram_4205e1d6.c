
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4205e1d6(int param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint local_28 [4];
  
  if (param_3 != 1) {
    if (param_3 != 2) {
      return -1;
    }
    if ((_DAT_ram_3fcb5f28 == 2) &&
       (iVar2 = FUN_ram_42061954(&DAT_ram_3fcb5f28,param_1,param_2), iVar2 == 0)) {
      _DAT_ram_3fcb5f28 = 3;
      FUN_ram_42063a84(0x3fcb5f2e,_DAT_ram_3fcb5f70,0x3fcb5f80,1);
      iVar2 = 0;
    }
    else {
      iVar2 = -1;
    }
    FUN_ram_4205e186();
    return iVar2;
  }
  if (_DAT_ram_3fcb5f28 == 1) {
    if (param_4 == 0x4c) {
      if (_DAT_ram_3fcb6868 != 0) {
        FUN_ram_4206587c();
      }
      if ((DAT_ram_3fcb5fa2 & 1) == 0) {
        if (1 < param_2) {
          iVar2 = param_2 - 2;
          param_1 = param_1 + 2;
          goto LAB_ram_4205e276;
        }
      }
      else if ((((*(char *)(param_1 + 2) == -1) && (*(byte *)(param_1 + 3) != 0)) &&
               ((uint)*(byte *)(param_1 + 3) <= param_2 - 4)) &&
              ((*(char *)(param_1 + 4) == ']' && (4 < param_2)))) {
        iVar2 = param_2 - 5;
        param_1 = param_1 + 5;
LAB_ram_4205e276:
        _DAT_ram_3fcb6868 = FUN_ram_42065852(param_1,iVar2);
        return 0;
      }
      return -1;
    }
    iVar2 = FUN_ram_420613f8(&DAT_ram_3fcb5f28,param_1,param_2,0,0,gp + -0x798,param_4 - 0x7eU < 2);
    if (iVar2 != 0xffff) {
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((_DAT_ram_3fcb5fa4 != 0) && (iVar2 = *(int *)(_DAT_ram_3fcb5fa4 + 0x90), iVar2 != 0)) {
        if ((*(uint *)(iVar2 + 4) & 1) != 0) {
          return -1;
        }
        puVar5 = *(ushort **)(iVar2 + 8);
        puVar6 = (ushort *)((*(uint *)(iVar2 + 4) & 0xfffffffe) + (int)puVar5);
        while (puVar5 != puVar6) {
          uVar1 = *puVar5;
          local_28[0] = 0x13;
          puVar5 = puVar5 + 1;
          local_28[1] = 0;
          puVar4 = local_28;
          while (uVar3 = *puVar4, 0 < (int)uVar3) {
            puVar4 = puVar4 + 1;
            if (uVar1 == uVar3) {
              return -1;
            }
          }
        }
      }
      iVar2 = FUN_ram_42060e9e(&DAT_ram_3fcb5f28);
      return iVar2;
    }
  }
  return 0x301b;
}

