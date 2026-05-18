
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203b742(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                     byte param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcdfec4;
  iVar2 = *(int *)(param_5 + -0x94);
  *(byte *)(param_1 + 0x78) = param_6 | 0x10;
                    /* WARNING: Could not recover jumptable at 0x4203b764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x14))(*(int *)(iVar2 + 0x1c) + 0x10,param_2 + 0xd4);
  return;
}

