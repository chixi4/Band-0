
int FUN_ram_42057e3a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  
  if (param_1 == 0) {
    param_1 = FUN_ram_4039bf1e();
  }
  uVar1 = FUN_ram_420523b8(*(undefined4 *)(param_1 + 0x54));
  iVar2 = FUN_ram_4205752e(param_1,0,uVar1);
  if (iVar2 == 0) {
    iVar2 = -2;
    uVar3 = *(ushort *)(param_1 + 0x1e) | 3;
  }
  else {
    iVar2 = FUN_ram_420573d8(param_1,iVar2,param_1,param_1 + 4);
    if (iVar2 == 0) {
      uVar3 = *(ushort *)(param_1 + 0x1e) & 0xfffc;
    }
    else {
      uVar3 = *(ushort *)(param_1 + 0x1e) | 3;
    }
  }
  *(ushort *)(param_1 + 0x1e) = uVar3;
  return iVar2;
}

