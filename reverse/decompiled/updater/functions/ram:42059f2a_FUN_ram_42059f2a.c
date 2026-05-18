
int FUN_ram_42059f2a(uint *param_1,int param_2,int param_3,byte param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *apuStack_38 [2];
  int iStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  byte bStack_1c;
  undefined4 uStack_18;
  
  if (param_1 == (uint *)0x0) {
    return -0x10;
  }
  iVar2 = -6;
  if (((*param_1 & 0xf0) == 0x10) &&
     ((((param_1[10] & 2) == 0 && (param_4 & 4) == 0) && param_1[8] == 0 ||
      (param_5 != (undefined4 *)0x0)))) {
    puVar3 = (uint *)(param_2 + 4);
    uStack_24 = 0;
    for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 2;
      uStack_24 = uStack_24 + uVar1;
      if (uStack_24 < uVar1) {
        return -6;
      }
    }
    if (uStack_24 != 0) {
      if ((int)uStack_24 < 0) {
        if (param_5 == (undefined4 *)0x0) {
          return -6;
        }
        uStack_24 = 0x7fffffff;
      }
      uStack_2c = (undefined2)param_3;
      uStack_28 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      apuStack_38[0] = param_1;
      iStack_30 = param_2;
      bStack_1c = param_4;
      if (param_1[8] != 0) {
        uStack_18 = FUN_ram_420599aa();
      }
      iVar2 = FUN_ram_42059d54(0x4204afc4,apuStack_38);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = uStack_20;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

