
void FUN_ram_4203158c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_42028f3c(param_1,param_2,1);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_42029140(param_2);
    iVar1 = FUN_ram_4202915c(param_1,param_1 + 0xc,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_ram_42029140(param_2);
      (*(code *)&SUB_ram_40010488)(param_1 + 0xc,1,uVar2);
      FUN_ram_420313cc(param_1,param_3,param_4);
      return;
    }
  }
  return;
}

