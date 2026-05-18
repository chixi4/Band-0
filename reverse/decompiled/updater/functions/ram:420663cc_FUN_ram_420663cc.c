
int FUN_ram_420663cc(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_3 < param_4) {
    return -1;
  }
  uVar1 = FUN_ram_42024bb6();
  iVar2 = -1;
  if (uVar1 <= param_3) {
    iVar4 = 0;
    if (uVar1 < param_4) {
      iVar4 = param_4 - uVar1;
    }
    (*(code *)&SUB_ram_40010488)(param_2,0,iVar4);
    uVar3 = FUN_ram_42024bb6(param_1);
    iVar2 = FUN_ram_42024c5e(param_1,param_2 + iVar4,uVar3);
    if (iVar2 == 0) {
      iVar2 = iVar4 + uVar1;
    }
  }
  return iVar2;
}

