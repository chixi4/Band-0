
undefined4 FUN_ram_40399d60(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (uint *)param_1[1];
  if ((int)(puVar1[4] << 1) < 0) {
    uVar3 = (puVar1[5] >> 0x1b) + 1 & 0xfffffff8;
    if (uVar3 == 0x20) {
      uVar2 = 0;
      goto LAB_ram_40399d8c;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar2 = 0xffffffff >> (uVar3 & 0x1f);
LAB_ram_40399d8c:
  puVar1[1] = param_3 << (0x20 - uVar3 & 0x1f) | uVar2;
  iVar4 = param_4 * 8;
  puVar1[4] = puVar1[4] & 0xefffffff | (uint)(iVar4 != 0) << 0x1c;
  if (iVar4 != 0) {
    puVar1[7] = iVar4 - 1U & 0x3ffff | puVar1[7] & 0xfffc0000;
  }
  puVar1[2] = puVar1[2] | 0x100000;
  *puVar1 = *puVar1 | 0x800000;
  do {
  } while ((int)(*puVar1 << 8) < 0);
  *puVar1 = *puVar1 | 0x1000000;
  (**(code **)(*param_1 + 0x40))();
  if (param_4 != 0) {
    FUN_ram_403998bc(puVar1,param_2);
  }
  return 0;
}

