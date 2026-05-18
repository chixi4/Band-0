
undefined4 FUN_ram_42076eb8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
LAB_ram_42076f00:
    uVar2 = 0;
  }
  else {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
      FUN_ram_42077334();
    }
    if ((*(uint *)(param_2 + 100) & 1) == 0) {
      if ((*(ushort *)(param_2 + 0xc) & 0x200) == 0) {
        FUN_ram_403910e0(*(undefined4 *)(param_2 + 0x58));
        goto LAB_ram_42076eea;
      }
    }
    else {
LAB_ram_42076eea:
      if (*(short *)(param_2 + 0xc) == 0) {
        if ((*(uint *)(param_2 + 100) & 1) == 0) {
          FUN_ram_40391168(*(undefined4 *)(param_2 + 0x58));
        }
        goto LAB_ram_42076f00;
      }
    }
    uVar2 = FUN_ram_42076f8e(param_1,param_2);
    if ((*(code **)(param_2 + 0x30) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_2 + 0x30))(param_1,*(undefined4 *)(param_2 + 0x20)), iVar1 < 0))
    {
      uVar2 = 0xffffffff;
    }
    if ((*(ushort *)(param_2 + 0xc) & 0x80) != 0) {
      FUN_ram_40399d4e(param_1,*(undefined4 *)(param_2 + 0x10));
    }
    if (*(int *)(param_2 + 0x34) != 0) {
      if (*(int *)(param_2 + 0x34) != param_2 + 0x44) {
        FUN_ram_40399d4e(param_1);
      }
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    if (*(int *)(param_2 + 0x48) != 0) {
      FUN_ram_40399d4e(param_1);
      *(undefined4 *)(param_2 + 0x48) = 0;
    }
    FUN_ram_42077232();
    *(undefined2 *)(param_2 + 0xc) = 0;
    if ((*(uint *)(param_2 + 100) & 1) == 0) {
      FUN_ram_40391168(*(undefined4 *)(param_2 + 0x58));
    }
    FUN_ram_403910a8(*(undefined4 *)(param_2 + 0x58));
    FUN_ram_42077242();
  }
  return uVar2;
}

