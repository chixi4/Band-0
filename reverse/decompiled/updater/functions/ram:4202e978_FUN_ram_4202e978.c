
int FUN_ram_4202e978(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 8) == 1) && (uVar1 = *param_1, *(int *)(param_1 + 0x48) != 0)) {
    iVar2 = FUN_ram_4202e72a(param_1 + 0xc,param_1 + 0x6c,param_1 + 0x74,param_5,param_6);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_ram_42030140(param_1 + 0xc,param_1 + 0x74,uVar1,param_2,param_3,param_4);
    return iVar2;
  }
  return -0x4f80;
}

