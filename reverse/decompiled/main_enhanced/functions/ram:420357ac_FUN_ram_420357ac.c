
bool FUN_ram_420357ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (int)*(short *)(param_4 + 2);
  bVar3 = true;
  iVar1 = (int)(char)((iVar4 + 0x1f) / 0x20);
  iVar2 = FUN_ram_42034ee8(param_2,param_1,param_4 + 0x24,iVar1);
  if (iVar2 == 0) {
    bVar3 = false;
    if (iVar4 < iVar1 << 5) {
      iVar2 = FUN_ram_420350b8(param_2,iVar4);
      bVar3 = iVar2 != 0;
    }
  }
  FUN_ram_42034ee8(param_3,param_2,param_4 + 0x24,iVar1);
  return bVar3;
}

