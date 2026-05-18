
void FUN_ram_4206ea60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_14;
  
  iVar1 = FUN_ram_4206e970(param_1,param_2,&iStack_14,2);
  if (iVar1 == 0) {
    FUN_ram_420683d6(param_3,*param_1,iStack_14);
    *param_1 = *param_1 + iStack_14;
  }
  return;
}

