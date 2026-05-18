
int FUN_ram_4201983c(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_ram_40391b06();
  iVar3 = 0;
  if (param_1 != 0xffff) {
    iVar3 = -(uint)(uVar1 < param_1);
  }
  if ((((param_2 != 0xffff) && (param_2 != 0)) && (param_2 < uVar1)) &&
     (iVar2 = FUN_ram_40391b36(), iVar2 == 0)) {
    iVar3 = -1;
  }
  return iVar3;
}

