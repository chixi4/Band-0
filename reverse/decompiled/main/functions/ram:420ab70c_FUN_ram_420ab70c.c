
int FUN_ram_420ab70c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_14;
  
  iVar1 = FUN_ram_4206e970(param_1,param_2,&iStack_14,0x30);
  if (iVar1 == 0) {
    iVar1 = -0x2566;
    if (param_2 == *param_1 + iStack_14) {
      iVar1 = FUN_ram_420ab5fe(param_1,param_2,param_3);
    }
  }
  else {
    iVar1 = iVar1 + -0x2500;
  }
  return iVar1;
}

