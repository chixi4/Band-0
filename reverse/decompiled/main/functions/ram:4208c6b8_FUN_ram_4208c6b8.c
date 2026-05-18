
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208c6b8(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined1 auStack_4c [6];
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 auStack_40 [16];
  
  iVar11 = 0x10;
  if (param_3 == 9) {
    iVar11 = 8;
  }
  puVar12 = *(undefined1 **)(*(int *)(param_2 + 4) + 4);
  puVar10 = puVar12 + 0x18 + *(ushort *)(param_2 + 0x16);
  *(ushort *)(param_2 + 0x16) = *(ushort *)(param_2 + 0x16) + 10 + (short)iVar11;
  *puVar10 = 0x4c;
  puVar10[1] = (char)iVar11 + '\b';
  iVar2 = FUN_ram_4207fc22(param_1);
  puVar10[3] = (char)((uint)iVar2 >> 8);
  puVar10[2] = (char)iVar2;
  if (((iVar2 - 4U & 0xffff) < 2) && (iVar2 = FUN_ram_4207fc3c(param_1,iVar2), iVar2 != 0)) {
    pbVar13 = (byte *)(iVar2 + 8);
    uVar9 = 0;
    uVar7 = 0;
    pbVar8 = (byte *)(iVar2 + 2);
    do {
      bVar1 = *pbVar8;
      uVar3 = uVar9 >> 0x18;
      pbVar8 = pbVar8 + 1;
      uVar9 = (uint)bVar1 | uVar9 << 8;
      uVar7 = uVar7 << 8 | uVar3;
    } while (pbVar8 != pbVar13);
    uVar3 = uVar9 + 1;
    uVar7 = (uVar3 < uVar9) + uVar7;
    iVar6 = iVar2;
    do {
      *(char *)(iVar6 + 7) = (char)uVar3;
      iVar6 = iVar6 + -1;
      uVar3 = uVar3 >> 8 | uVar7 << 0x18;
      uVar7 = uVar7 >> 8;
    } while (iVar2 + -6 != iVar6);
    FUN_ram_4039c11e(puVar10 + 4,(byte *)(iVar2 + 2),6);
    iVar6 = 0x101;
    puVar4 = (undefined1 *)
             (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(*(ushort *)(param_2 + 0x16) + 0x14);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = *puVar12;
      puVar4[1] = puVar12[1] & 199;
      FUN_ram_4039c11e(puVar4 + 2,puVar12 + 4,0x12);
      iVar6 = FUN_ram_4039c11e(puVar4 + 0x14,puVar12 + 0x18,
                               (uint)*(ushort *)(param_2 + 0x16) - iVar11);
      iVar6 = (iVar6 + (uint)*(ushort *)(param_2 + 0x16)) - (int)puVar4;
      if (param_3 == 9) {
        iVar6 = (*_DAT_ram_3fcc4288)(pbVar13,puVar4,iVar6,auStack_40,_DAT_ram_3fcc4288);
      }
      else {
        FUN_ram_4039c11e(auStack_4c,puVar12 + 10,6);
        uStack_46 = *(undefined1 *)(iVar2 + 7);
        uStack_45 = *(undefined1 *)(iVar2 + 6);
        uVar5 = 0x20;
        uStack_44 = *(undefined1 *)(iVar2 + 5);
        uStack_43 = *(undefined1 *)(iVar2 + 4);
        uStack_42 = *(undefined1 *)(iVar2 + 3);
        uStack_41 = *(undefined1 *)(iVar2 + 2);
        if (param_3 != 0xe) {
          uVar5 = 0x10;
        }
        iVar6 = (*_DAT_ram_3fcc4294)
                          (pbVar13,uVar5,auStack_4c,0xc,puVar4,iVar6,auStack_40,_DAT_ram_3fcc4294);
      }
      if (iVar6 == 0) {
        FUN_ram_4039c11e(puVar10 + 10,auStack_40,iVar11);
      }
      else {
        FUN_ram_4207a038(1,0x20,1,&DAT_ram_3c0ff280,iVar6);
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar4);
    }
  }
  else {
    iVar6 = -1;
  }
  return iVar6;
}

