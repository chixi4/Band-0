
int FUN_ram_4202dace(undefined4 param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = FUN_ram_4202d97c(param_1,0,*(undefined1 *)(param_2 + 1));
  if (iVar3 != 0) {
    iVar2 = FUN_ram_4202d598(param_3,2);
    iVar4 = iVar2;
    if (iVar2 == 0) {
      iVar4 = 10;
      if (*(short *)((undefined4 *)*param_3 + 4) == 2) {
        sVar1 = **(short **)*param_3;
        if (sVar1 == 0) {
          iVar4 = 0;
        }
        else if (sVar1 == 1) {
          iVar4 = 0x10;
        }
      }
    }
    FUN_ram_4202d96e(iVar3,iVar4);
    FUN_ram_4202da9a(iVar3);
  }
  return iVar2;
}

