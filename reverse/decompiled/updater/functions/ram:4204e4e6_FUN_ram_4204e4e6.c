
int FUN_ram_4204e4e6(char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_ram_4201011e(0x3fcaf890);
  iVar2 = FUN_ram_420100b0(0x3fcaf890,param_1,uVar1);
  if (((iVar2 == 0) && (*param_1 == '\0')) &&
     (iVar3 = FUN_ram_40399d6c(param_1,param_1 + 1,(uVar1 >> 3) - 1), iVar3 == 0)) {
    iVar2 = 0x10b;
  }
  return iVar2;
}

