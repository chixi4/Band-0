
undefined4 FUN_ram_4039a1a8(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_24;
  
  puVar1 = (uint *)param_1[1];
  puVar1[1] = param_3;
  iVar3 = param_4 * 8;
  puVar1[6] = puVar1[6] & 0xefffffff | (uint)(iVar3 != 0) << 0x1c;
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1U & 0x3ff;
  }
  puVar1[10] = puVar1[10] & 0xfffffc00 | uVar2;
  *puVar1 = *puVar1 | 0x40000;
  (**(code **)(*param_1 + 0x40))();
  if (param_4 != 0) {
    if (((param_2 | param_4) & 3) == 0) {
      FUN_ram_4039c11e(param_2,puVar1 + 0x16,param_4);
    }
    else {
      uVar5 = param_4 + 3;
      for (uVar2 = 0; uVar5 >> 2 != uVar2; uVar2 = uVar2 + 1) {
        uVar4 = param_4;
        if (4 < param_4) {
          uVar4 = 4;
        }
        uStack_24 = puVar1[uVar2 + 0x16];
        FUN_ram_4039c11e(param_2,&uStack_24,uVar4);
        param_4 = param_4 - uVar4;
        param_2 = param_2 + uVar4;
      }
    }
  }
  return 0;
}

