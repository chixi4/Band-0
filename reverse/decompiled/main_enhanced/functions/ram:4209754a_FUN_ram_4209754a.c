
undefined1 * FUN_ram_4209754a(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  puVar4 = &local_20;
  uVar1 = param_1[2];
  *param_2 = 1;
  param_2[1] = 4;
  local_20 = uVar1;
  puVar2 = (undefined1 *)FUN_ram_42097526(param_2 + 2,param_1 + 7);
  *puVar2 = 0x33;
  puVar2[1] = 4;
  puVar2[2] = (char)((uint)(param_1[0xd] * 0x3c) >> 0x18);
  puVar2[3] = (char)((uint)(param_1[0xd] * 0x3c) >> 0x10);
  puVar2[4] = (char)((uint)(param_1[0xd] * 0x3c) >> 8);
  iVar6 = param_1[0xd];
  puVar2[7] = 4;
  puVar2[5] = (char)iVar6 * '<';
  puVar2[6] = 0x36;
  puVar2 = (undefined1 *)FUN_ram_42097526(puVar2 + 8,&local_20);
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    iVar6 = *param_1;
    uStack_1c = 0;
    uStack_18 = 0;
    iStack_14 = 0;
    if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x39) & 1) != 0)) {
      uStack_1c = *(uint *)(iVar6 + 4);
      uStack_18 = *(undefined4 *)(iVar6 + 8);
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 != 0) {
        *puVar2 = 3;
        puVar2[1] = 4;
        iStack_14 = iVar6;
        puVar2 = (undefined1 *)FUN_ram_42097526(puVar2 + 2,&iStack_14);
      }
    }
  }
  puVar3 = puVar2 + 2;
  if ((*(byte *)((int)param_1 + 0x39) & 2) == 0) {
    *puVar2 = 6;
    puVar2[1] = 4;
  }
  else {
    iVar6 = param_1[4];
    *puVar2 = 6;
    puVar2[1] = (iVar6 != 0) * '\x04' + '\x04';
    puVar3 = (undefined1 *)FUN_ram_42097526(puVar3,param_1 + 3);
    puVar4 = (uint *)(param_1 + 4);
    if (param_1[4] == 0) goto LAB_ram_42097634;
  }
  puVar3 = (undefined1 *)FUN_ram_42097526(puVar3,puVar4);
LAB_ram_42097634:
  uStack_1c = ~param_1[7] | uVar1;
  *puVar3 = 0x1c;
  puVar3[1] = 4;
  puVar2 = (undefined1 *)FUN_ram_42097526(puVar3 + 2,&uStack_1c);
  *puVar2 = 0x1a;
  puVar2[1] = 2;
  puVar2[2] = 5;
  puVar2[3] = 0xdc;
  if (param_1[0xf] == 0) {
    puVar2 = puVar2 + 4;
  }
  else {
    iVar6 = (*(code *)&SUB_ram_400104a8)();
    puVar2[4] = 0x72;
    puVar2[5] = (char)iVar6;
    for (iVar5 = 0; iVar5 != iVar6; iVar5 = iVar5 + 1) {
      puVar2[iVar5 + 6] = *(undefined1 *)(param_1[0xf] + iVar5);
    }
    puVar2 = puVar2 + iVar5 + 6;
  }
  *puVar2 = 0x1f;
  puVar2[1] = 1;
  puVar2[5] = 1;
  puVar2[3] = 0x2b;
  puVar2[6] = 4;
  puVar2[2] = 0;
  puVar2[4] = 6;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 2;
  return puVar2 + 0xb;
}

