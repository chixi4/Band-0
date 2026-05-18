
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204d676(uint param_1,uint param_2,int param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = param_3 + 3U & 0xfffffffc;
  uVar4 = param_2;
  if ((param_2 & 3) == 0) {
LAB_ram_4204d6cc:
    if ((uVar4 & 3) == 0) goto LAB_ram_4204d6ee;
    iVar6 = 0x138;
  }
  else {
    uVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(uVar8);
    if (uVar4 != 0) {
      (*(code *)&SUB_ram_40010488)(uVar4,0,uVar8);
      FUN_ram_40399daa(uVar4,param_2,param_3);
      goto LAB_ram_4204d6cc;
    }
    iVar6 = 300;
  }
  FUN_ram_42033fd8(6,0x2000,2,iVar6 + 0x3c080000);
LAB_ram_4204d6ee:
  uVar3 = *(ushort *)(param_4 + 7);
  if (param_4[1] == 5) {
    uVar7 = 0x50000;
  }
  else {
    uVar7 = (param_4[1] & 7) << 0x12;
  }
  iVar6 = 7;
  if (((uVar7 & 0x1c0000) != 0x40000) && (iVar6 = 3, (int)param_1 < 4)) {
    iVar6 = 6;
  }
  bVar1 = *param_4;
  bVar2 = param_4[2];
  iVar5 = param_1 * 0x28;
  *(uint *)(iVar5 + 0x60048400) =
       (uint)param_4[6] * 0x1000000 + (uint)param_4[5] * 0x10000 + (uint)param_4[4] * 0x100 +
       (uint)param_4[3];
  *(uint *)(iVar5 + 0x60048404) =
       (uint)uVar3 |
       ((bVar1 & 3) << 8 | iVar6 << 5 | (uint)(bVar2 != 3) << 0xb | (uint)bVar2 << 0xe |
       uVar7 >> 0x10) << 0x10;
  _DAT_ram_60047814 = 1 << (param_1 & 0x1f) | _DAT_ram_60047814;
  FUN_ram_40399daa(iVar5 + 0x60048408,uVar4,uVar8);
  if (uVar4 == param_2) {
    return;
  }
  thunk_FUN_ram_40390608(uVar4);
  return;
}

