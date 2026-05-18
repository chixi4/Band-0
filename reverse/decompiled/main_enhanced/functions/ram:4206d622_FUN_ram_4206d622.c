
undefined4 FUN_ram_4206d622(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  uVar1 = (*param_1 & 0x3f) + 1;
  *(undefined1 *)((int)param_1 + (*param_1 & 0x3f) + 0x18) = 0x80;
  iVar5 = 0x38;
  puVar4 = param_1 + 6;
  if (uVar1 < 0x39) {
    iVar5 = 0x38 - uVar1;
    puVar2 = (uint *)(uVar1 + (int)puVar4);
  }
  else {
    (*(code *)&SUB_ram_40010488)(uVar1 + (int)puVar4,0,0x40 - uVar1);
    FUN_ram_4206c98c(param_1,puVar4);
    puVar2 = puVar4;
  }
  (*(code *)&SUB_ram_40010488)(puVar2,0,iVar5);
  iVar3 = param_1[1] << 3;
  iVar5 = *param_1 << 3;
  *(char *)(param_1 + 0x14) = (char)iVar5;
  *(char *)((int)param_1 + 0x51) = (char)((uint)iVar5 >> 8);
  *(char *)((int)param_1 + 0x53) = (char)((uint)iVar5 >> 0x18);
  *(byte *)(param_1 + 0x15) = (byte)iVar3 | (byte)(*param_1 >> 0x1d);
  *(char *)((int)param_1 + 0x55) = (char)((uint)iVar3 >> 8);
  *(char *)((int)param_1 + 0x52) = (char)((uint)iVar5 >> 0x10);
  *(char *)((int)param_1 + 0x56) = (char)((uint)iVar3 >> 0x10);
  *(char *)((int)param_1 + 0x57) = (char)((uint)iVar3 >> 0x18);
  FUN_ram_4206c98c(param_1,puVar4);
  *param_2 = (char)param_1[2];
  param_2[1] = *(undefined1 *)((int)param_1 + 9);
  param_2[2] = *(undefined1 *)((int)param_1 + 10);
  param_2[3] = *(undefined1 *)((int)param_1 + 0xb);
  param_2[4] = (char)param_1[3];
  param_2[5] = *(undefined1 *)((int)param_1 + 0xd);
  param_2[6] = *(undefined1 *)((int)param_1 + 0xe);
  param_2[7] = *(undefined1 *)((int)param_1 + 0xf);
  param_2[8] = (char)param_1[4];
  param_2[9] = *(undefined1 *)((int)param_1 + 0x11);
  param_2[10] = *(undefined1 *)((int)param_1 + 0x12);
  param_2[0xb] = *(undefined1 *)((int)param_1 + 0x13);
  param_2[0xc] = (char)param_1[5];
  param_2[0xd] = *(undefined1 *)((int)param_1 + 0x15);
  param_2[0xe] = *(undefined1 *)((int)param_1 + 0x16);
  param_2[0xf] = *(undefined1 *)((int)param_1 + 0x17);
  FUN_ram_4206c936(param_1);
  return 0;
}

