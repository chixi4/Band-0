
uint FUN_ram_420549c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (param_3 == 0) {
    uVar5 = FUN_ram_4039bf1e();
  }
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)uVar5;
  if ((iVar2 != 0) && (uVar3 = (uint)*(ushort *)(iVar2 + 0x30), uVar3 != 0)) {
    if (uVar3 < 0x28) {
      uVar3 = 0x28;
    }
    uVar4 = uVar3 - 0x28;
    if (uVar1 < (uVar3 - 0x28 & 0xffff)) {
      uVar4 = uVar1;
    }
    uVar1 = uVar4 & 0xffff;
  }
  return uVar1;
}

