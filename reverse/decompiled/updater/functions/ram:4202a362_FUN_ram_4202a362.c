
undefined4 FUN_ram_4202a362(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar1 = (*param_1 & 0x7f) + 1;
  *(undefined1 *)((int)param_1 + (*param_1 & 0x7f) + 0x50) = 0x80;
  iVar5 = 0x70;
  puVar4 = param_1 + 0x14;
  if (uVar1 < 0x71) {
    iVar5 = 0x70 - uVar1;
    puVar2 = (uint *)(uVar1 + (int)puVar4);
  }
  else {
    (*(code *)&SUB_ram_40010488)(uVar1 + (int)puVar4,0,0x80 - uVar1);
    FUN_ram_420295fc(param_1,puVar4);
    puVar2 = puVar4;
  }
  (*(code *)&SUB_ram_40010488)(puVar2,0,iVar5);
  uVar1 = param_1[1];
  uVar6 = (*(code *)&SUB_ram_400108c8)
                    (param_1[2] << 3 | uVar1 >> 0x1d,param_1[2] >> 0x1d | param_1[3] << 3);
  *(char *)((int)param_1 + 0xc1) = (char)((ulonglong)uVar6 >> 8);
  *(char *)((int)param_1 + 0xc2) = (char)((ulonglong)uVar6 >> 0x10);
  *(char *)(param_1 + 0x31) = (char)((ulonglong)uVar6 >> 0x20);
  *(char *)((int)param_1 + 0xc5) = (char)((ulonglong)uVar6 >> 0x28);
  *(char *)(param_1 + 0x30) = (char)uVar6;
  *(char *)((int)param_1 + 199) = (char)((ulonglong)uVar6 >> 0x38);
  *(char *)((int)param_1 + 0xc3) = (char)((ulonglong)uVar6 >> 0x18);
  *(char *)((int)param_1 + 0xc6) = (char)((ulonglong)uVar6 >> 0x30);
  uVar6 = (*(code *)&SUB_ram_400108c8)(*param_1 << 3,*param_1 >> 0x1d | uVar1 << 3);
  *(char *)((int)param_1 + 0xc9) = (char)((ulonglong)uVar6 >> 8);
  *(char *)((int)param_1 + 0xca) = (char)((ulonglong)uVar6 >> 0x10);
  *(char *)(param_1 + 0x32) = (char)uVar6;
  *(char *)(param_1 + 0x33) = (char)((ulonglong)uVar6 >> 0x20);
  *(char *)((int)param_1 + 0xcd) = (char)((ulonglong)uVar6 >> 0x28);
  *(char *)((int)param_1 + 0xce) = (char)((ulonglong)uVar6 >> 0x30);
  *(char *)((int)param_1 + 0xcb) = (char)((ulonglong)uVar6 >> 0x18);
  *(char *)((int)param_1 + 0xcf) = (char)((ulonglong)uVar6 >> 0x38);
  FUN_ram_420295fc(param_1,puVar4);
  uVar6 = (*(code *)&SUB_ram_400108c8)(param_1[4],param_1[5]);
  param_2[1] = (char)((ulonglong)uVar6 >> 8);
  param_2[2] = (char)((ulonglong)uVar6 >> 0x10);
  *param_2 = (char)uVar6;
  param_2[4] = (char)((ulonglong)uVar6 >> 0x20);
  param_2[5] = (char)((ulonglong)uVar6 >> 0x28);
  param_2[3] = (char)((ulonglong)uVar6 >> 0x18);
  param_2[7] = (char)((ulonglong)uVar6 >> 0x38);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_2[6] = (char)((ulonglong)uVar6 >> 0x30);
  uVar6 = (*(code *)&SUB_ram_400108c8)(uVar1,uVar3);
  param_2[9] = (char)((ulonglong)uVar6 >> 8);
  param_2[10] = (char)((ulonglong)uVar6 >> 0x10);
  param_2[8] = (char)uVar6;
  param_2[0xc] = (char)((ulonglong)uVar6 >> 0x20);
  param_2[0xd] = (char)((ulonglong)uVar6 >> 0x28);
  param_2[0xb] = (char)((ulonglong)uVar6 >> 0x18);
  param_2[0xf] = (char)((ulonglong)uVar6 >> 0x38);
  uVar1 = param_1[8];
  uVar3 = param_1[9];
  param_2[0xe] = (char)((ulonglong)uVar6 >> 0x30);
  uVar6 = (*(code *)&SUB_ram_400108c8)(uVar1,uVar3);
  param_2[0x11] = (char)((ulonglong)uVar6 >> 8);
  param_2[0x12] = (char)((ulonglong)uVar6 >> 0x10);
  param_2[0x10] = (char)uVar6;
  param_2[0x14] = (char)((ulonglong)uVar6 >> 0x20);
  param_2[0x15] = (char)((ulonglong)uVar6 >> 0x28);
  param_2[0x13] = (char)((ulonglong)uVar6 >> 0x18);
  param_2[0x17] = (char)((ulonglong)uVar6 >> 0x38);
  uVar1 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[0x16] = (char)((ulonglong)uVar6 >> 0x30);
  uVar6 = (*(code *)&SUB_ram_400108c8)(uVar1,uVar3);
  param_2[0x19] = (char)((ulonglong)uVar6 >> 8);
  param_2[0x1a] = (char)((ulonglong)uVar6 >> 0x10);
  param_2[0x18] = (char)uVar6;
  param_2[0x1c] = (char)((ulonglong)uVar6 >> 0x20);
  param_2[0x1d] = (char)((ulonglong)uVar6 >> 0x28);
  param_2[0x1b] = (char)((ulonglong)uVar6 >> 0x18);
  param_2[0x1f] = (char)((ulonglong)uVar6 >> 0x38);
  uVar1 = param_1[0xc];
  uVar3 = param_1[0xd];
  param_2[0x1e] = (char)((ulonglong)uVar6 >> 0x30);
  uVar6 = (*(code *)&SUB_ram_400108c8)(uVar1,uVar3);
  param_2[0x21] = (char)((ulonglong)uVar6 >> 8);
  param_2[0x22] = (char)((ulonglong)uVar6 >> 0x10);
  param_2[0x20] = (char)uVar6;
  param_2[0x24] = (char)((ulonglong)uVar6 >> 0x20);
  param_2[0x25] = (char)((ulonglong)uVar6 >> 0x28);
  param_2[0x23] = (char)((ulonglong)uVar6 >> 0x18);
  param_2[0x27] = (char)((ulonglong)uVar6 >> 0x38);
  uVar1 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_2[0x26] = (char)((ulonglong)uVar6 >> 0x30);
  uVar6 = (*(code *)&SUB_ram_400108c8)(uVar1,uVar3);
  param_2[0x29] = (char)((ulonglong)uVar6 >> 8);
  param_2[0x2a] = (char)((ulonglong)uVar6 >> 0x10);
  param_2[0x2d] = (char)((ulonglong)uVar6 >> 0x28);
  param_2[0x2e] = (char)((ulonglong)uVar6 >> 0x30);
  uVar1 = param_1[0x34];
  param_2[0x28] = (char)uVar6;
  param_2[0x2c] = (char)((ulonglong)uVar6 >> 0x20);
  param_2[0x2b] = (char)((ulonglong)uVar6 >> 0x18);
  param_2[0x2f] = (char)((ulonglong)uVar6 >> 0x38);
  if (uVar1 == 0) {
    uVar6 = (*(code *)&SUB_ram_400108c8)(param_1[0x10],param_1[0x11]);
    param_2[0x31] = (char)((ulonglong)uVar6 >> 8);
    param_2[0x32] = (char)((ulonglong)uVar6 >> 0x10);
    param_2[0x30] = (char)uVar6;
    param_2[0x34] = (char)((ulonglong)uVar6 >> 0x20);
    param_2[0x35] = (char)((ulonglong)uVar6 >> 0x28);
    param_2[0x33] = (char)((ulonglong)uVar6 >> 0x18);
    param_2[0x37] = (char)((ulonglong)uVar6 >> 0x38);
    uVar1 = param_1[0x12];
    uVar3 = param_1[0x13];
    param_2[0x36] = (char)((ulonglong)uVar6 >> 0x30);
    uVar6 = (*(code *)&SUB_ram_400108c8)(uVar1,uVar3);
    param_2[0x39] = (char)((ulonglong)uVar6 >> 8);
    param_2[0x3a] = (char)((ulonglong)uVar6 >> 0x10);
    param_2[0x38] = (char)uVar6;
    param_2[0x3c] = (char)((ulonglong)uVar6 >> 0x20);
    param_2[0x3d] = (char)((ulonglong)uVar6 >> 0x28);
    param_2[0x3b] = (char)((ulonglong)uVar6 >> 0x18);
    param_2[0x3e] = (char)((ulonglong)uVar6 >> 0x30);
    param_2[0x3f] = (char)((ulonglong)uVar6 >> 0x38);
  }
  FUN_ram_4202949e(param_1);
  return 0;
}

