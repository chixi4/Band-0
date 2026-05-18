
undefined4 FUN_ram_4201edbe(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar2 = 0x1107;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar1 = (*(code *)&SUB_ram_400104a8)(param_3);
      uVar2 = FUN_ram_4201e558(*(undefined4 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0x10),0x21,
                               param_2,param_3,iVar1 + 1);
      return uVar2;
    }
    uVar2 = 0x1104;
  }
  return uVar2;
}

