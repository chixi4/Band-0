
void FUN_ram_42054a7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_42054994(*(undefined4 *)(param_1 + 0x28),param_2,param_3,
                           *(undefined2 *)(param_1 + 0x1a),*(undefined2 *)(param_1 + 0x1c),0x10,
                           *(undefined2 *)(param_1 + 0x2e));
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x2e);
  }
  return;
}

