
undefined4 FUN_ram_4205dc06(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (*(int *)(param_1 + 4) == 1) {
    FUN_ram_4205d83e();
  }
  else if (*(int *)(param_1 + 4) == 4) {
    FUN_ram_4205da48();
  }
  iVar1 = *(int *)(param_1 + 8);
  if (((iVar1 != 0) && (0xb41 < *(ushort *)(iVar1 + 0x68))) && (*(ushort *)(iVar1 + 0x6a) < 8)) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xef;
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_1,2,param_3);
    }
  }
  return 0;
}

