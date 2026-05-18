
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203275c(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ushort *puVar15;
  ushort *apuStack_44 [4];
  
  iVar4 = *(int *)(gp + -0x2b8);
  if ((param_1 == (int *)0x0) || (iVar13 = *param_1, iVar13 == 0)) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07cfd0,0x3c072634,0xe30);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar14 = (int *)(iVar4 + 4);
  if ((((*(char *)(iVar4 + 0x415) != '\0') && (*(char *)(iVar4 + 0x35f) == '\0')) &&
      (DAT_ram_3fcb512d == 0xf)) &&
     (iVar4 = FUN_ram_40399d6c(iVar4 + 0x93,param_1 + 0xcb,6), iVar4 == 0)) {
    piVar14 = (int *)FUN_ram_42040f3a();
  }
  uVar3 = (*(code *)&SUB_ram_40012130)(param_1);
  iVar4 = FUN_ram_420323d4(3);
  iVar5 = FUN_ram_42031b5e(3);
  uVar11 = (uint)*(byte *)(iVar13 + 0x13d);
  if (uVar11 < 8) {
    uVar11 = uVar11 + 0x2e & 0xff;
LAB_ram_4203281a:
    uVar10 = 0;
  }
  else {
    if (uVar11 == 8) {
      uVar11 = 0x36;
      goto LAB_ram_4203281a;
    }
    uVar10 = uVar11 - 6 & 0xffff;
    uVar11 = 0x36;
  }
  uVar1 = 0;
  if (_DAT_ram_3fcb4fa0 != (ushort *)0x0) {
    uVar1 = (uint)*_DAT_ram_3fcb4fa0;
  }
  uVar6 = 0;
  if (_DAT_ram_3fcb4fb4 == (ushort *)0x0) {
    uVar6 = 0;
    if (_DAT_ram_3fcb4fa8 != (ushort *)0x0) {
      uVar6 = (uint)*_DAT_ram_3fcb4fa8;
    }
    if (_DAT_ram_3fcb4fac == (ushort *)0x0) goto LAB_ram_4203284e;
    uVar12 = (uint)*_DAT_ram_3fcb4fac;
  }
  else {
LAB_ram_4203284e:
    uVar12 = 0;
  }
  uVar8 = 0;
  if (_DAT_ram_3fcb4fd8 != (ushort *)0x0) {
    uVar8 = (uint)*_DAT_ram_3fcb4fd8;
  }
  uVar9 = 0;
  if (_DAT_ram_3fcb4fb4 != (ushort *)0x0) {
    uVar9 = (uint)*_DAT_ram_3fcb4fb4;
  }
  iVar2 = 0;
  if ((_DAT_ram_3fcb5004 != 0) && (*(int *)(_DAT_ram_3fcb5004 + 4) != 0)) {
    iVar2 = *(byte *)(_DAT_ram_3fcb5004 + 8) + 10;
  }
  uVar11 = iVar2 + uVar9 + uVar8 + (uint)(_DAT_ram_3fcb51a4 != 0) * 0x20 + iVar5 + iVar4 + uVar10 +
                                   uVar11 + uVar1 + uVar6 + uVar12 & 0xffff;
  if (DAT_ram_3fcb512d == 0xf) {
    DAT_ram_3fcb36cc = 0x25;
    uVar11 = uVar11 + 0x8f;
  }
  else {
    uVar11 = uVar11 + 0x6a;
  }
  if ((uVar3 & 0x100) == 0) {
    uVar11 = (uVar11 & 0xffff) + 0xb;
  }
  else {
    uVar11 = (uVar11 & 0xffff) + 0xf;
  }
  uVar11 = uVar11 & 0xffff;
  iVar4 = FUN_ram_42033f1c(apuStack_44,0x18,uVar11);
  if (iVar4 == 0) {
    FUN_ram_42033fd8(1,0x40,2,0x3c07f5e8,uVar11);
    return 0;
  }
  *(undefined2 *)(iVar4 + 0x14) = 0x18;
  iVar5 = *(int *)(gp + -0x2b8);
  *apuStack_44[0] = uVar3;
  puVar7 = apuStack_44[0] + 2;
  apuStack_44[0][1] = *(ushort *)(iVar5 + 0x9a);
  if (param_2 == 0x20) {
    puVar15 = apuStack_44[0] + 5;
    apuStack_44[0] = puVar7;
    FUN_ram_40399daa(puVar7,param_1 + 1,6);
    puVar7 = puVar15;
  }
  apuStack_44[0] = puVar7;
  iVar5 = *piVar14;
  *(undefined1 *)apuStack_44[0] = 0;
  *(char *)((int)apuStack_44[0] + 1) = (char)iVar5;
  puVar7 = apuStack_44[0] + 1;
  if (iVar5 != 0) {
    puVar7 = (ushort *)FUN_ram_40399daa(puVar7,piVar14 + 1,iVar5);
  }
  apuStack_44[0] =
       (ushort *)
       (*(code *)&SUB_ram_40012054)((undefined1 *)((int)puVar7 + iVar5),(int)param_1 + 0x73);
  puVar7 = _DAT_ram_3fcb4fac;
  uVar10 = (uint)DAT_ram_3fcb512d;
  if (uVar10 < 0x11) {
    if (((-0x167b1 >> (uVar10 & 0x1f) & 1U) != 0) &&
       ((uVar10 != 0xf || (*(char *)(*(int *)(gp + -0x2b8) + 0x415) == '\0'))))
    goto LAB_ram_420329f0;
  }
  else if (uVar10 != 0x11) goto LAB_ram_420329f0;
  if ((_DAT_ram_3fcb4fac != (ushort *)0x0) && (_DAT_ram_3fcb4fb4 == (ushort *)0x0)) {
    iVar5 = FUN_ram_40399daa(apuStack_44[0],_DAT_ram_3fcb4fac + 1,
                             *(byte *)((int)_DAT_ram_3fcb4fac + 3) + 2);
    apuStack_44[0] = (ushort *)(*(byte *)((int)puVar7 + 3) + 2 + iVar5);
  }
LAB_ram_420329f0:
  if ((uVar3 & 0x100) != 0) {
    apuStack_44[0] = (ushort *)FUN_ram_4203220e(apuStack_44[0],param_1);
  }
  apuStack_44[0] = (ushort *)FUN_ram_420320ee(apuStack_44[0],(int)param_1 + 0x73);
  if ((((*(uint *)(iVar13 + 300) & 0x80000) != 0) && ((param_1[3] & 0xc0U) != 0)) &&
     (iVar5 = (*(code *)&SUB_ram_4001205c)(), iVar5 != 0)) {
    apuStack_44[0] = (ushort *)FUN_ram_420371d6(apuStack_44[0],param_1);
  }
  iVar5 = FUN_ram_42040e52();
  if (iVar5 != 0) {
    apuStack_44[0] = (ushort *)FUN_ram_42032704(apuStack_44[0],param_1);
  }
  iVar5 = FUN_ram_420390d0();
  puVar7 = _DAT_ram_3fcb4fa8;
  if (((iVar5 != 0) && (_DAT_ram_3fcb4fa8 != (ushort *)0x0)) && (_DAT_ram_3fcb4fb4 == (ushort *)0x0)
     ) {
    iVar5 = FUN_ram_40399daa(apuStack_44[0],_DAT_ram_3fcb4fa8 + 1,
                             *(byte *)((int)_DAT_ram_3fcb4fa8 + 3) + 2);
    apuStack_44[0] = (ushort *)(iVar5 + *(byte *)((int)puVar7 + 3) + 2);
  }
  if (((DAT_ram_3fcb512c == '\a') || ((byte)(DAT_ram_3fcb512d - 0xb) < 2)) &&
     ((_DAT_ram_3fcb51a4 != 0 && (*(code **)(_DAT_ram_3fcb51a4 + 8) != (code *)0x0)))) {
    iVar5 = (**(code **)(_DAT_ram_3fcb51a4 + 8))(apuStack_44[0]);
    apuStack_44[0] = (ushort *)((int)apuStack_44[0] + iVar5);
  }
  if ((DAT_ram_3fcb512d == 0xf) && (*(char *)(*(int *)(gp + -0x2b8) + 0x415) != '\0')) {
    apuStack_44[0] = (ushort *)FUN_ram_420321b4(apuStack_44[0]);
  }
  if (((*(uint *)(iVar13 + 0xa4) & 0x2000) != 0) && ((param_1[3] & 2U) != 0)) {
    iVar5 = FUN_ram_40399daa(apuStack_44[0],0x3c078c20,9);
    apuStack_44[0] = (ushort *)(iVar5 + 9);
  }
  if (((*(uint *)(iVar13 + 300) & 0x10000000) != 0) && ((param_1[3] & 0xc0U) != 0)) {
    apuStack_44[0] = (ushort *)FUN_ram_42037214(apuStack_44[0],param_1);
  }
  if (_DAT_ram_3fcb4fd8 != (ushort *)0x0) {
    apuStack_44[0] = (ushort *)FUN_ram_42031b34(apuStack_44[0]);
  }
  apuStack_44[0] = (ushort *)(*(code *)&SUB_ram_40012160)(apuStack_44[0],&DAT_ram_3fcb4f74);
  apuStack_44[0] = (ushort *)FUN_ram_4203225e(apuStack_44[0],param_1);
  if ((_DAT_ram_3fcb4fb4 != (ushort *)0x0) && (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 2)) {
    apuStack_44[0] = (ushort *)FUN_ram_42031b34();
  }
  if ((_DAT_ram_3fcb5004 != 0) && (*(int *)(_DAT_ram_3fcb5004 + 4) != 0)) {
    apuStack_44[0] =
         (ushort *)
         FUN_ram_42035374(apuStack_44[0],_DAT_ram_3fcb5004 + 1,*(int *)(_DAT_ram_3fcb5004 + 4),
                          *(undefined1 *)(_DAT_ram_3fcb5004 + 8));
  }
  apuStack_44[0] = (ushort *)(*(code *)&SUB_ram_400120bc)(apuStack_44[0],3);
  apuStack_44[0] = (ushort *)FUN_ram_42032352(apuStack_44[0],3);
  uVar10 = (int)apuStack_44[0] -
           (*(int *)(*(int *)(iVar4 + 4) + 4) + (uint)*(ushort *)(iVar4 + 0x14));
  *(short *)(iVar4 + 0x16) = (short)(uVar10 * 0x10000 >> 0x10);
  if ((uVar10 & 0xffff) <= uVar11) {
    return iVar4;
  }
  FUN_ram_42033fd8(1,0x800,1,0x3c07cfd8,0x3c072634,0xf2c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

