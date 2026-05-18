
int FUN_ram_420670f2(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4206707a(*param_1,param_1[1]);
  iVar2 = FUN_ram_42030c94(*puVar1,puVar1,param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = iVar2 + -0x3d00;
  }
  return iVar2;
}

