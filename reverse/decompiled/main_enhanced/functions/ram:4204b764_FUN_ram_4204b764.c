
int FUN_ram_4204b764(char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_ram_42010128(gp + -0x7d8);
  if ((uVar1 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  iVar2 = FUN_ram_420100ba(gp + -0x7d8,param_1,uVar1);
  if (((iVar2 == 0) && (*param_1 == '\0')) &&
     (iVar3 = FUN_ram_4039c0e0(param_1,param_1 + 1,(uVar1 >> 3) - 1), iVar3 == 0)) {
    iVar2 = 0x10b;
  }
  return iVar2;
}

