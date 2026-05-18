
undefined4 FUN_ram_420322d6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420365de(param_1);
  if (iVar1 == 0) {
    thunk_FUN_ram_4202b7f6();
    uVar2 = 7;
  }
  else {
    for (iVar4 = 0; iVar4 < *(int *)(iVar1 + 0x60); iVar4 = iVar4 + 1) {
      psVar5 = (short *)(*(int *)(iVar1 + 0x5c) + iVar4 * 4);
      if ((char)*(byte *)(psVar5 + 1) < '\0') {
        sVar3 = *psVar5;
        *(byte *)(psVar5 + 1) = *(byte *)(psVar5 + 1) & 0x7f;
        goto LAB_ram_42032326;
      }
    }
    sVar3 = 0;
LAB_ram_42032326:
    thunk_FUN_ram_4202b7f6();
    if (sVar3 != 0) {
      uVar2 = FUN_ram_4202cb96(param_1);
      return uVar2;
    }
    uVar2 = 5;
  }
  return uVar2;
}

