
int FUN_ram_42055290(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  
  uVar1 = FUN_ram_4205074c(*(undefined4 *)(param_1 + 0x54));
  iVar2 = FUN_ram_42054a7c(param_1,0,uVar1);
  if (iVar2 == 0) {
    iVar2 = -2;
    uVar3 = *(ushort *)(param_1 + 0x1e) | 3;
  }
  else {
    iVar2 = FUN_ram_42054938(param_1,iVar2,param_1,param_1 + 4);
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

