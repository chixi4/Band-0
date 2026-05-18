
undefined4 FUN_ram_4205c254(byte *param_1,int param_2)

{
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  byte bVar3;
  
  sVar1 = *(short *)(param_1 + 0xc);
  if (*(char *)(unaff_s0 + 0xf) == '\0') {
    *(char *)(unaff_s0 + 0xf) = *(char *)(param_2 + 0x3c) + '\x01';
  }
  if ((*param_1 & 1) != 0) {
    if (*param_1 == 1) {
      if ((param_1[1] != 0) || (param_1[2] != 0x5e)) goto LAB_ram_4205c2a0;
      bVar3 = *(byte *)(unaff_s0 + 0xd) | 0x10;
    }
    else {
      iVar2 = FUN_ram_4039c0e0(param_1,&DAT_ram_3c0f759c,6);
      if (iVar2 != 0) goto LAB_ram_4205c2a0;
      bVar3 = *(byte *)(unaff_s0 + 0xd) | 8;
    }
    *(byte *)(unaff_s0 + 0xd) = bVar3;
  }
LAB_ram_4205c2a0:
  if (sVar1 == 8) {
    if (((*(byte *)(unaff_s1 + 0x39) & 8) != 0) && (iVar2 = FUN_ram_42053a6a(), iVar2 == 0)) {
      FUN_ram_4205b928();
      return 0;
    }
  }
  else if (((sVar1 == 0x608) && ((*(byte *)(unaff_s1 + 0x39) & 8) != 0)) &&
          (iVar2 = FUN_ram_42053a6a(), iVar2 == 0)) {
    FUN_ram_4205a9e0();
    return 0;
  }
  FUN_ram_42053ac4();
  return 0;
}

