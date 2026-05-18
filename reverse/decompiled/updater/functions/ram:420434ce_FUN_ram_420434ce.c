
int FUN_ram_420434ce(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x3c079be4;
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_40399d6c(param_1,iVar3,2);
    if (iVar2 == 0) {
      return (uint)*(byte *)(iVar1 * 3 + 0x3c079be6) * 10 + 0x3c079b08;
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 3;
  } while (iVar1 != 0xb0);
  return 0;
}

