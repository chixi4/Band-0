
int FUN_ram_4205e538(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_42024bb6(param_1 + 4);
  if ((param_3 != 0) && (iVar2 = FUN_ram_420663cc(param_2,param_3,uVar1), iVar2 < 0)) {
    return -1;
  }
  iVar2 = 0;
  if (param_4 != 0) {
    iVar2 = FUN_ram_420663cc(param_2 + 8,param_4,uVar1);
    iVar2 = iVar2 >> 0x1f;
  }
  return iVar2;
}

