
ushort FUN_ram_4202c63e(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = FUN_ram_420305fa();
  if (iVar3 == 0) {
    uVar2 = 0x17;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xc);
    uVar2 = 0x17;
    if ((uVar1 != 0) && (uVar2 = *(ushort *)(param_1 + 10), uVar1 < *(ushort *)(param_1 + 10))) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

