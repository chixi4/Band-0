
int FUN_ram_4205b50c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(iVar2 + 0x3c);
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = (*(code *)&SUB_ram_40010504)(iVar3,0x3c072fb8);
  if (iVar1 == 0) {
    iVar3 = iVar2 + 0x34;
  }
  else {
    iVar1 = (*(code *)&SUB_ram_40010504)(iVar3,0x3c072fc4);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_40399d6c(param_2,0x3c072fd8,param_3), iVar1 == 0)) {
      *(undefined1 *)(*(int *)(iVar2 + 0x24) + 0x2c) = 1;
      goto LAB_ram_4205b590;
    }
    iVar3 = (*(code *)&SUB_ram_40010504)(iVar3,0x3c072fe0);
    if (iVar3 != 0) goto LAB_ram_4205b590;
    iVar3 = iVar2 + 0x38;
  }
  iVar3 = FUN_ram_4205d164(iVar3,param_2,param_3);
  if (iVar3 == 0) {
    return -1;
  }
LAB_ram_4205b590:
  iVar2 = FUN_ram_4205d164(iVar2 + 0x40,param_2,param_3);
  return -(uint)(iVar2 == 0);
}

