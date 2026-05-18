
int FUN_ram_42099cec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_ram_4209c726(*(undefined4 *)(param_1 + 0x58));
  iVar2 = FUN_ram_4209c8dc(*(undefined4 *)(param_1 + 0x20));
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar2 == 7) {
    iVar2 = FUN_ram_4209999e(iVar3,iVar3 * 0x20 + 0x48 + param_2,*(undefined4 *)(param_2 + 0x14));
  }
  else {
    iVar2 = FUN_ram_4207f742(iVar2,"th.",iVar3);
  }
  iVar2 = iVar2 >> 0x1f;
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (iVar3 = FUN_ram_4209999e(*(int *)(param_2 + 0xf4),
                               *(int *)(param_2 + 0xf4) * 0x10 + 0x94 + param_2,uVar1), iVar3 < 0))
  {
    iVar2 = -1;
  }
  return iVar2;
}

