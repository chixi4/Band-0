
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42078dde(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = *(byte **)(*(int *)(param_1 + 4) + 4);
  bVar4 = *pbVar3 & 0xf0;
  if (bVar4 != 0xc0) {
    if (bVar4 == 0xd0) {
      iVar1 = FUN_ram_420761be(pbVar3[0x18]);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else if (bVar4 != 0xa0) {
      return 0;
    }
  }
  iVar1 = FUN_ram_4207fc22(1);
  if (iVar1 == 0xffff) {
    return 0;
  }
  uVar2 = FUN_ram_4208c6b8(1,param_1,_DAT_ram_3fcc425c);
  return uVar2;
}

