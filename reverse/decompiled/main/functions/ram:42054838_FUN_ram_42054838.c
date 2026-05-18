
void FUN_ram_42054838(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    uVar5 = FUN_ram_4039bf1e();
  }
  uVar4 = (uint)*(ushort *)((int)uVar5 + 0x2c);
  uVar2 = (int)((ulonglong)uVar5 >> 0x20) + uVar4;
  uVar3 = uVar2 & 0xffff;
  if ((0x1680 < uVar3) || (uVar1 = (short)uVar2, uVar3 < uVar4)) {
    uVar1 = 0x1680;
  }
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  uVar2 = FUN_ram_420547dc(param_1);
  if (0x59f < uVar2) {
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 2;
    FUN_ram_42057e96(param_1);
    return;
  }
  return;
}

