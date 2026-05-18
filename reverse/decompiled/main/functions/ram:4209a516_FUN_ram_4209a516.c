
void FUN_ram_4209a516(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 auStack_22 [26];
  
  param_1[0x68] = 0;
  param_1[0xe] = 0;
  *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
  param_1[4] = 7;
  iVar1 = param_1[0xc];
  param_1[0xc] = iVar1 + 1;
  if (iVar1 + 1 < 5) {
    if ((param_1[0x7f] == 2) && ((param_1[0x81] & 0x4000c00U) != 0)) {
      uStack_28 = 0xf0014dd;
      uStack_24 = 0x4ac;
      if (param_1[0x82] == 0) {
        FUN_ram_4209c6a6(param_1 + 0x24,param_1[0x2c],*param_1 + 0x78,param_1 + 2,auStack_22);
      }
      else {
        FUN_ram_4039c11e(auStack_22,param_1[0x82] + 8,0x10);
      }
      uVar3 = 0x16;
      puVar2 = &uStack_28;
    }
    else {
      uVar3 = 0;
      puVar2 = (undefined4 *)0x0;
    }
    FUN_ram_4209a4b0(*param_1,param_1,0x88,0,param_1 + 0x14,puVar2,uVar3,0,0);
    return;
  }
  return;
}

