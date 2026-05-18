
uint FUN_ram_4205e8e2(int *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  bVar2 = false;
  uVar3 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    uVar1 = *(ushort *)((int)param_1 + 10);
    iVar4 = FUN_ram_4205e786(param_1[1],uVar1);
    uVar3 = (iVar4 + uVar3 >> 0x10) + (iVar4 + uVar3 & 0xffff);
    if ((uVar1 & 1) != 0) {
      bVar2 = (bool)(bVar2 ^ 1);
      uVar3 = uVar3 >> 8 & 0xff | (uVar3 & 0xff) << 8;
    }
  }
  if (bVar2) {
    uVar3 = uVar3 >> 8 & 0xff | (uVar3 & 0xff) << 8;
  }
  return ~uVar3 & 0xffff;
}

