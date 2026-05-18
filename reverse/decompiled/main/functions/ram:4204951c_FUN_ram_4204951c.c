
int FUN_ram_4204951c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 == 0) || (uVar1 = FUN_ram_40392644(), uVar1 < *(ushort *)(param_1 + 0xf))) {
    param_2 = 0;
  }
  else if (param_2 == 0) {
    param_2 = 1;
  }
  else if (((*(ushort *)(param_1 + 0x11) - 1 & 0xffff) < 0xfffe) &&
          (*(ushort *)(param_1 + 0x11) < uVar1)) {
    iVar2 = (*(code *)&LAB_ram_40392686)();
    return iVar2;
  }
  return param_2;
}

