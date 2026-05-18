
undefined4 FUN_ram_42065ec2(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (((param_2 == 0) || (iVar2 = FUN_ram_4206560a(), iVar2 != 0)) ||
     (iVar2 = FUN_ram_4206589e(param_1), iVar2 != 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3f8) + 1;
    iVar2 = (uint)(uVar3 < *(uint *)(param_1 + 0x3f8)) + *(int *)(param_1 + 0x3fc);
    *(uint *)(param_1 + 0x3f8) = uVar3;
    *(int *)(param_1 + 0x3fc) = iVar2;
    *(uint *)(param_2 + 0x28) = uVar3;
    *(int *)(param_2 + 0x2c) = iVar2;
    uVar1 = 0;
  }
  return uVar1;
}

