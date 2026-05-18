
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_420799d0(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  iVar3 = *(int *)(_DAT_ram_3fcc4018 + 0xec);
  pbVar5 = &DAT_ram_3fcc4173 + (*(ushort *)(param_1 + 0x26) >> 3 & 0x7ff);
  bVar1 = *pbVar5;
  uVar6 = *(ushort *)(param_1 + 0x26) & 7;
  uVar4 = (int)(uint)bVar1 >> uVar6 & 1;
  if (param_2 != uVar4) {
    bVar2 = (byte)(1 << uVar6);
    if (param_2 == 0) {
      *pbVar5 = bVar1 & ~bVar2;
      if (iVar3 == param_1) {
        DAT_ram_3fcc4172 = DAT_ram_3fcc4172 & 0xfe;
      }
    }
    else {
      *pbVar5 = bVar1 | bVar2;
      if (iVar3 == param_1) {
        DAT_ram_3fcc4172 = DAT_ram_3fcc4172 | 1;
      }
    }
  }
  return param_2 != uVar4;
}

