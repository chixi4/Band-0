
int FUN_ram_42040f44(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_11 [5];
  
  iVar2 = FUN_ram_420384d8();
  if ((param_1 - 2U < 2) || (param_1 == 5)) {
    auStack_11[0] = 1;
  }
  else {
    auStack_11[0] = 0;
    if (param_1 != 0) {
      return 0;
    }
  }
  iVar3 = FUN_ram_420386f6(0x3b,auStack_11);
  cVar1 = DAT_ram_3fcb5145;
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined1 *)(iVar2 + 0x471) = auStack_11[0];
  iVar2 = FUN_ram_42038516(0x3b,auStack_11[0],cVar1 == '\0');
  if (iVar2 == 0) {
    iVar2 = FUN_ram_420384de();
    return iVar2;
  }
  return iVar2;
}

