
void FUN_ram_4205752e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar1 = FUN_ram_42057434(*(undefined4 *)(param_1 + 0x28),param_2,param_3,
                           *(undefined2 *)(param_1 + 0x1a),*(undefined2 *)(param_1 + 0x1c),0x10,
                           *(undefined2 *)(param_1 + 0x2e));
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x2e);
  }
  return;
}

