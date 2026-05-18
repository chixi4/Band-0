
void FUN_ram_42099e5e(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) != 0) {
    *(undefined4 *)(param_2 + 200) = 0;
    *(undefined4 *)(param_2 + 0x44) = 0;
    (*(code *)&SUB_ram_40010488)(param_2 + 0x68,0,0x40);
    *(undefined4 *)(param_2 + 0x18) = 1;
    *(undefined4 *)(param_2 + 0x1c) = 2;
    *(undefined4 *)(param_2 + 0xf4) = 4;
    *(undefined4 *)(param_2 + 0xf8) = 5;
    FUN_ram_42099a2a(param_1,param_2);
    return;
  }
  iVar1 = *(int *)(param_2 + 0x44);
  if (iVar1 == 0) {
    if (*(int *)(param_2 + 0x20) != 0) {
LAB_ram_42099eb4:
      *(undefined4 *)(param_2 + 200) = 1;
      *(undefined4 *)(param_2 + 0x44) = 2;
      FUN_ram_42099cec(param_1,param_2);
      return;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return;
      }
      if (*(int *)(param_2 + 0xc) == 0) goto LAB_ram_42099eb4;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_ram_42099e14(param_1,param_2);
      return;
    }
  }
  return;
}

