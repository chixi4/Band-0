
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42041b80(undefined2 *param_1,int param_2)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bStack_22;
  byte abStack_21 [9];
  
  if (param_2 == 7) {
    puVar2 = (uint *)(**(code **)(_DAT_ram_3fcdfecc + 0x388))(*param_1);
    if (puVar2 == (uint *)0x0) {
      return 2;
    }
    if ((int)(*puVar2 << 9) < 0) {
      return 0xc;
    }
    uVar1 = *(ushort *)((int)param_1 + 5);
    uVar7 = (uint)uVar1;
    if (uVar7 < 3) {
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x740))
                        (*(undefined1 *)(param_1 + 1),*(undefined1 *)((int)param_1 + 3),
                         *(undefined1 *)(param_1 + 2),&bStack_22,abStack_21,
                         *(code **)(_DAT_ram_3fcdfecc + 0x740));
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = puVar2[10];
      uVar5 = (uVar7 & 3) << 0x18;
      puVar2[10] = uVar4 & 0xfcffffff | uVar5;
      uVar6 = (bStack_22 & 7) << 0xc;
      puVar2[10] = uVar4 & 0xfcff8fff | uVar5 | uVar6;
      puVar2[10] = uVar4 & 0xfcfc0fff | uVar5 | uVar6 | (abStack_21[0] & 7) << 0xf;
      if ((((uVar4 & 0x30) == 0x30) && ((bStack_22 & 4) != 0)) && ((uVar1 & 3) != 0)) {
        uVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0xa10))
                          ((uVar4 & 0x30) >> 4,uVar7,bStack_22 & 4,0x1000,
                           *(code **)(_DAT_ram_3fcdfecc + 0xa10));
        puVar2[10] = puVar2[10] & 0xfffffffc | uVar7 & 3;
        *puVar2 = *puVar2 | 0x2000000;
        return 0;
      }
      if (((ushort)puVar2[0x17] & 0x200) != 0) {
        if ((char)puVar2[0x14] != '\t') {
          *puVar2 = *puVar2 & 0xfeffffff;
        }
        *puVar2 = *puVar2 | 0x400000;
        return 0;
      }
      if ((int)(*puVar2 << 5) < 0) {
        *(ushort *)(puVar2 + 0x17) = (ushort)puVar2[0x17] | 0x200;
        *puVar2 = *puVar2 | 0x400000;
        return 0;
      }
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x35c))(puVar2);
      if (iVar3 == 0) {
        *puVar2 = *puVar2 | 0x400000;
        return 0;
      }
      *puVar2 = *puVar2 | 0x2000000;
      return 0;
    }
  }
  return 0x12;
}

