
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4207515a(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined2 *puStack_38;
  int iStack_34;
  
  iStack_34 = 0;
  iVar17 = *(int *)(gp + -0xb4);
  if ((param_1 == (int *)0x0) || (iVar16 = *param_1, iVar16 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe4b0,&DAT_ram_3c0c4114,0x1166);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar4 = (undefined1 *)FUN_ram_4207940a();
  iVar1 = 0;
  iVar5 = FUN_ram_420794ea(*puVar4);
  if ((iVar5 != 0) && ((*(uint *)(iVar5 + 8) & 0x80) != 0)) {
    iVar1 = 3;
  }
  iVar6 = 0;
  if (*(int *)(iVar16 + 0x124) != 0) {
    iVar6 = (**(code **)(_DAT_ram_3fcc4178 + 0x2c))(&iStack_34);
  }
  iVar7 = FUN_ram_420742c0(2);
  iVar8 = FUN_ram_42073a14(2);
  uVar12 = (uint)*(byte *)(iVar16 + 0x13d);
  uVar14 = 10;
  if (uVar12 < 7) {
    uVar14 = uVar12 + 2 & 0xff;
  }
  uVar15 = 0;
  if (7 < uVar12) {
    uVar15 = uVar12 - 5 & 0xffff;
  }
  iVar11 = 5;
  if (DAT_ram_3fcc41a7 != '\x01') {
    iVar11 = 0;
  }
  uVar12 = 0;
  if (_DAT_ram_3fcc4068 != (ushort *)0x0) {
    uVar12 = (uint)*_DAT_ram_3fcc4068;
  }
  uVar13 = 0;
  if (_DAT_ram_3fcc4240 != (ushort *)0x0) {
    uVar13 = (uint)*_DAT_ram_3fcc4240;
  }
  iVar2 = 0;
  if ((_DAT_ram_3fcc4090 != 0) && (*(int *)(_DAT_ram_3fcc4090 + 4) != 0)) {
    iVar2 = *(byte *)(_DAT_ram_3fcc4090 + 8) + 10;
  }
  uVar12 = iVar2 + uVar13 + uVar12 + iVar11 + uVar15 + uVar14 + (iVar1 + iStack_34 + 0x93 +
                                                                         (uint)*(ushort *)
                                                                                (iVar17 + 0x368) &
                                                                0xffff) + iVar7 + iVar8 & 0xffff;
  iVar1 = FUN_ram_42079edc(&puStack_38,0x18,uVar12);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x14) = 0x18;
    (*(code *)&SUB_ram_40010488)(puStack_38,0,8);
    puStack_38[4] = *(undefined2 *)(*(int *)(gp + -0xb4) + 0x3f8);
    puStack_38 = puStack_38 + 5;
    uVar3 = (*(code *)&SUB_ram_40012130)(param_1);
    iVar7 = *(int *)(iVar17 + 0x368);
    *puStack_38 = uVar3;
    *(undefined1 *)(puStack_38 + 1) = 0;
    *(char *)((int)puStack_38 + 3) = (char)iVar7;
    puVar9 = puStack_38 + 2;
    if (iVar7 != 0) {
      puVar9 = (undefined2 *)FUN_ram_4039c11e(puVar9,iVar17 + 0x36c,iVar7);
    }
    uVar10 = (*(code *)&SUB_ram_40012054)((int)puVar9 + iVar7);
    uVar10 = FUN_ram_42073fa4(uVar10,iVar16 + 0x13d);
    puStack_38 = (undefined2 *)FUN_ram_42073f82(uVar10,iVar5);
    if ((DAT_ram_3fcc41a7 == '\x01') && (DAT_ram_3fcc41a8 != '\0')) {
      puStack_38 = (undefined2 *)(*(code *)&SUB_ram_400120c8)();
    }
    puStack_38 = (undefined2 *)(*(code *)&SUB_ram_400120d4)(puStack_38,&DAT_ram_3fcc4004);
    if ((*(int *)(iVar16 + 0x124) != 0) && (iVar6 != 0)) {
      FUN_ram_4039c11e(puStack_38,iVar6,iStack_34);
      puStack_38 = (undefined2 *)((int)puStack_38 + iStack_34);
    }
    if ((*(char *)(iVar16 + 0x13c) == '\x03') && (param_2 != 1)) {
      puStack_38 = (undefined2 *)FUN_ram_4207d256(puStack_38,param_1);
      puStack_38 = (undefined2 *)FUN_ram_4207d3fc(puStack_38,param_1);
    }
    puStack_38 = (undefined2 *)FUN_ram_4207414a(puStack_38,param_1);
    if ((*(uint *)(iVar16 + 0xa4) & 0x2000) != 0) {
      puStack_38 = (undefined2 *)(*(code *)&SUB_ram_400120c0)(puStack_38,0);
    }
    if (_DAT_ram_3fcc4068 != (ushort *)0x0) {
      puStack_38 = (undefined2 *)FUN_ram_420739ea(puStack_38);
    }
    puStack_38 = (undefined2 *)FUN_ram_42074002(puStack_38,&DAT_ram_3fcc4004);
    if ((_DAT_ram_3fcc4090 != 0) && (*(int *)(_DAT_ram_3fcc4090 + 4) != 0)) {
      puStack_38 = (undefined2 *)
                   FUN_ram_4207b3d4(puStack_38,_DAT_ram_3fcc4090 + 1,*(int *)(_DAT_ram_3fcc4090 + 4)
                                    ,*(undefined1 *)(_DAT_ram_3fcc4090 + 8));
    }
    puStack_38 = (undefined2 *)(*(code *)&SUB_ram_400120bc)(puStack_38,2);
    puStack_38 = (undefined2 *)FUN_ram_4207423e(puStack_38,2);
    *(undefined2 *)(iVar1 + 0x14) = 0x18;
    uVar14 = (int)puStack_38 - (*(int *)(*(int *)(iVar1 + 4) + 4) + 0x18);
    *(short *)(iVar1 + 0x16) = (short)(uVar14 * 0x10000 >> 0x10);
    if (uVar12 < (uVar14 & 0xffff)) {
      FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe4b8,&DAT_ram_3c0c4114,0x1267);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return iVar1;
}

