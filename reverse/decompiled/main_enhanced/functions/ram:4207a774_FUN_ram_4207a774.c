
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4207a774(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_31 [13];
  
  iVar2 = *(int *)(param_1 + 0x34);
  auStack_31[0] = 0;
  if ((iVar2 != 0) && (bVar4 = *(byte *)(iVar2 + 1), *(short *)(iVar2 + 6) == 1)) {
    DAT_ram_3fcc41bc = 3;
    DAT_ram_3fcc41c0 = FUN_ram_4207a102(iVar2 + 8,auStack_31);
    uVar1 = *(ushort *)(iVar2 + 0xc);
    iVar8 = iVar2 + 0xe;
    uVar7 = 0;
    for (iVar6 = bVar4 - 0xc; 0 < iVar6; iVar6 = iVar6 + -4) {
      if (uVar1 <= uVar7) {
        puVar3 = (ushort *)(iVar2 + (uint)uVar1 * 4 + 0xe);
        uVar5 = iVar6 - 2;
        for (uVar7 = 0; (0 < (int)uVar5 && (uVar7 < *puVar3)); uVar7 = uVar7 + 1) {
          iVar2 = *(int *)((int)puVar3 + (iVar6 - uVar5));
          if (iVar2 == 0x1f25000) {
            DAT_ram_3fcc41bd = 4;
          }
          else if (iVar2 == 0x2f25000) {
            DAT_ram_3fcc41bd = 3;
          }
          uVar5 = uVar5 - 4;
        }
        if (_DAT_ram_3fcc417c == 0) {
          *(undefined1 *)(param_1 + 0x60) = 2;
        }
        else {
          if ((9 < (DAT_ram_3fcc41bd - 4 & 0xff)) ||
             ((-0x242 >> (DAT_ram_3fcc41bd - 4 & 0x1f) & 1U) != 0)) {
            FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fbe50);
            *(undefined1 *)(param_1 + 0x6c) = 1;
            return 0;
          }
          *(undefined1 *)(param_1 + 0x60) = 0x10;
          DAT_ram_3fcc41bc = 5;
        }
        return ~uVar5 >> 0x1f;
      }
      bVar4 = FUN_ram_4207a102(iVar8,auStack_31);
      if (DAT_ram_3fcc41be < 2) {
        DAT_ram_3fcc41be = bVar4;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    }
  }
  return 0;
}

