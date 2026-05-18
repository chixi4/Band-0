
int FUN_ram_420a6fd0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *param_2;
  *param_1 = param_2;
  param_1[2] = uVar2;
  if (param_1[0x12] != 0) {
    FUN_ram_420a5152();
  }
  if (param_1[0xd] != 0) {
    FUN_ram_420a5988();
  }
  if (param_1[0xe] != 0) {
    FUN_ram_420a593e(param_1);
  }
  if (param_1[0x12] == 0) {
    uVar2 = FUN_ram_4206d7ce(1,0xdc);
    param_1[0x12] = uVar2;
  }
  if (param_1[0xd] == 0) {
    uVar2 = FUN_ram_4206d7ce(1,0x74);
    param_1[0xd] = uVar2;
  }
  if (param_1[0xe] == 0) {
    iVar1 = FUN_ram_4206d7ce(1,0x1fc);
    param_1[0xe] = iVar1;
    if (iVar1 == 0) goto LAB_ram_420a7038;
  }
  if ((param_1[0x12] != 0) && (param_1[0xd] != 0)) {
    FUN_ram_420a563e(param_1[0xd]);
    FUN_ram_420a5602(param_1[0x12]);
    iVar3 = param_1[0xe];
    (*(code *)&SUB_ram_40010488)(iVar3,0,0x1fc);
    iVar4 = iVar3 + 0x154;
    FUN_ram_4206c48e(iVar4);
    uVar2 = FUN_ram_4206c444(9);
    iVar1 = FUN_ram_4206c572(iVar4,uVar2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4206c624(iVar4);
    if (iVar1 != 0) {
      return iVar1;
    }
    *(undefined4 *)(iVar3 + 0x10) = 0x42096fc6;
    FUN_ram_42071830(iVar3 + 0x48);
    *(undefined1 *)(iVar3 + 2) = 3;
    FUN_ram_420a85a4(iVar3 + 0x108);
    FUN_ram_4206d7d4(param_1[0x25]);
    param_1[0x25] = 0;
    iVar1 = FUN_ram_420a6994(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_ram_4206d7d4(param_1[0x16]);
    param_1[0x16] = 0;
    FUN_ram_420a69b8(param_1);
    return 0;
  }
LAB_ram_420a7038:
  FUN_ram_4206d7d4();
  param_1[0xe] = 0;
  FUN_ram_4206d7d4(param_1[0x12]);
  param_1[0x12] = 0;
  FUN_ram_4206d7d4(param_1[0xd]);
  param_1[0xd] = 0;
  return -0x7f00;
}

