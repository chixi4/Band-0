
int FUN_ram_42026e40(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_1c = 0;
  iStack_14 = 0;
  local_20 = param_1;
  uStack_18 = param_3;
  iVar1 = FUN_ram_4202cff2(1,0x42016da6,&local_20);
  if (iVar1 == 0) {
    *param_2 = uStack_1c;
    iVar1 = iStack_14;
  }
  return iVar1;
}

