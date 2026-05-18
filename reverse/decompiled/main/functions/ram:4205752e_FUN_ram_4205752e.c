
void FUN_ram_4205752e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    uVar3 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
  }
  iVar1 = (int)uVar3;
  iVar2 = FUN_ram_42057434(*(undefined4 *)(iVar1 + 0x28),(int)((ulonglong)uVar3 >> 0x20),param_3,
                           *(undefined2 *)(iVar1 + 0x1a),*(undefined2 *)(iVar1 + 0x1c),0x10,
                           *(undefined2 *)(iVar1 + 0x2e));
  if (iVar2 != 0) {
    *(uint *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x28) + (uint)*(ushort *)(iVar1 + 0x2e);
  }
  return;
}

