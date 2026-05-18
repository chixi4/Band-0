
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420883e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puStack_14;
  
  FUN_ram_4208ecce();
  puStack_14 = (undefined1 *)0x0;
  iVar1 = *(int *)(_DAT_ram_3fcc4014 + 0xe4);
  iVar2 = FUN_ram_42085a58();
  if (iVar2 == 0) {
    puVar6 = &DAT_ram_3c0fcf18;
LAB_ram_4208840c:
    uVar5 = 4;
  }
  else {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fcfec);
    if ((*(uint *)(iVar1 + 0x2e0) == 0) && (*(uint *)(iVar1 + 0x2e4) == 0)) {
      puVar6 = &DAT_ram_3c0fd09c;
      goto LAB_ram_4208840c;
    }
    *(uint *)(iVar1 + 0x2e4) = *(uint *)(iVar1 + 0x2e4) | 4;
    iVar2 = 0;
    uVar8 = 0;
    do {
      if ((1 << (uVar8 & 0x1f) & *(uint *)(iVar1 + 0x2e0)) != 0) {
        iVar2 = iVar2 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x20);
    uVar8 = iVar2 + 8;
    iVar3 = FUN_ram_42079edc(&puStack_14,0x18,uVar8);
    if (iVar3 != 0) {
      uVar7 = 0;
      *puStack_14 = 4;
      puStack_14[2] = 0x48;
      puStack_14[1] = 0;
      puStack_14[3] = 1;
      uVar5 = *(undefined4 *)(iVar1 + 0x2e4);
      puStack_14[7] = 0;
      puStack_14[4] = (char)uVar5;
      puStack_14[5] = 0x49;
      puStack_14[6] = (char)iVar2 + '\x01';
      uVar4 = *(uint *)(iVar1 + 0x2e0);
      iVar2 = 0;
      do {
        if ((1 << (uVar7 & 0x1f) & uVar4) != 0) {
          puStack_14[iVar2 + 8] = (char)uVar7;
          iVar2 = iVar2 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x20);
      *(undefined2 *)(iVar3 + 0x14) = 0x18;
      *(short *)(iVar3 + 0x16) = (short)uVar8;
      FUN_ram_4207a038(1,8,3,&DAT_ram_3c0fff1c,0x18,uVar8 & 0xffff);
      (*(code *)&SUB_ram_40011fc8)(iVar1,iVar3,7,0,0);
      FUN_ram_420743c0(iVar1,iVar3,0xd0);
      goto LAB_ram_42088416;
    }
    puVar6 = &DAT_ram_3c0fefc8;
    uVar5 = 1;
  }
  FUN_ram_4207a038(1,8,uVar5,puVar6);
LAB_ram_42088416:
  FUN_ram_4208830a();
  return;
}

