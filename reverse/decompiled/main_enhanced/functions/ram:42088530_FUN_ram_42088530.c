
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_ram_42088530(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [32];
  undefined1 uStack_54;
  undefined1 auStack_50 [32];
  undefined1 uStack_30;
  undefined1 auStack_2f [6];
  undefined1 uStack_29;
  undefined4 uStack_28;
  
  iVar2 = _DAT_ram_3fcc4014;
  iVar1 = _DAT_ram_3fcc3f78;
  iVar10 = *(int *)(gp + -0xb4);
  puVar3 = (undefined4 *)FUN_ram_420894a2();
  iVar12 = *(int *)(iVar2 + 0xe4);
  puVar11 = (undefined4 *)(iVar10 + 4);
  if (((*(char *)(*(int *)(gp + -0xb4) + 0x415) != '\0') &&
      (*(char *)(*(int *)(gp + -0xb4) + 0x35f) == '\0')) &&
     (iVar10 = FUN_ram_4039c0e0(puVar3 + 9,iVar12 + 4,6), iVar10 == 0)) {
    puVar11 = puVar3;
  }
  if (iVar12 == 0) {
    FUN_ram_4207a038(1,4,2,&DAT_ram_3c101ec8);
    uVar4 = 0;
  }
  else {
    if ((*(uint *)(iVar12 + 0xc) & 1) == 0) {
      FUN_ram_42078e7e(iVar12,auStack_7c);
      puVar3 = puVar11 + 1;
      uStack_54 = 0;
      FUN_ram_4039c11e(auStack_74,puVar3,0x20);
      iVar10 = *(int *)(iVar2 + 0xe4);
      if (*(char *)(iVar10 + 0xac) == '\0') {
        puVar9 = &UNK_ram_3c0c488c;
      }
      else if (*(char *)(iVar10 + 0xac) == '\x01') {
        puVar9 = &DAT_ram_3c0c4888;
      }
      else {
        puVar9 = &DAT_ram_3c0c4880;
      }
      uVar5 = (uint)*(byte *)(iVar10 + 9);
      uVar6 = (uint)*(byte *)(iVar10 + 8);
      uVar7 = (uint)*(byte *)(iVar10 + 7);
      FUN_ram_4207a038(1,4,3,&DAT_ram_3c0ffe78,auStack_74,*(ushort *)(iVar10 + 0x26) & 0x3fff,
                       *(undefined1 *)(iVar10 + 0xab),puVar9,*(undefined1 *)(iVar10 + 4),
                       *(undefined1 *)(iVar10 + 5),*(undefined1 *)(iVar10 + 6),uVar7,uVar6,uVar5);
      if ((byte)(DAT_ram_3fcc41be - 6) < 3) {
        uVar4 = *(undefined4 *)(&DAT_ram_3c0fab40 + (uint)(byte)(DAT_ram_3fcc41be - 6) * 4);
      }
      else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(DAT_ram_3fcc41bd + -1) {
        case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          uVar4 = 0x3c0a82b0;
        }
      }
      if (DAT_ram_3fcc41bc == '\x06') {
        if (DAT_ram_3fcc4250 == '\0') {
          pcVar8 = "est.";
        }
        else {
          pcVar8 = &DAT_ram_3c0c497c;
        }
      }
      else {
        pcVar8 = &DAT_ram_3c0c39bc;
      }
      FUN_ram_4207a038(1,4,3,&DAT_ram_3c0ffecc,uVar4,pcVar8,auStack_7c,(int)*(char *)(iVar1 + 0xa4),
                       DAT_ram_3fcc41be,DAT_ram_3fcc41c0,_DAT_ram_3fcc41c4,uVar7,uVar6,uVar5);
      FUN_ram_42086fc2(iVar1);
      FUN_ram_420864f8();
      if ((*(int *)(_DAT_ram_3fcdfaf0 + 4) == 0) || (*(int *)(_DAT_ram_3fcdfaf0 + 8) != 2)) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar2 + 4);
        FUN_ram_420919c6(0);
        iVar10 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
        if (iVar10 != 0) {
          (*(code *)&SUB_ram_40011ee4)();
        }
      }
      if (*(char *)(*(int *)(gp + -0xb4) + 0x92) == '\0') {
        FUN_ram_4039c11e(*(int *)(gp + -0xb4) + 0x93,*(int *)(iVar2 + 0xe4) + 4,6);
      }
      FUN_ram_420801be(*(undefined1 *)(*(int *)(iVar2 + 0xe4) + 0xab));
      *(uint *)(*(int *)(iVar2 + 0xe4) + 0xc) = *(uint *)(*(int *)(iVar2 + 0xe4) + 0xc) | 1;
      DAT_ram_3fcdfad4 = 1;
      FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fc870,7);
      FUN_ram_4207f554(7);
      *(undefined1 *)(*(int *)(iVar2 + 0xe4) + 0x24) = 0;
      FUN_ram_4208581a(iVar1);
      (*(code *)&SUB_ram_40011d48)();
      FUN_ram_4039c11e(auStack_50,puVar3,0x20);
      uStack_30 = (undefined1)*puVar11;
      FUN_ram_4039c11e(auStack_2f,iVar2 + 0x9c,6);
      uStack_29 = *(undefined1 *)(*(int *)(iVar2 + 0xe4) + 0xab);
      if (2 < DAT_ram_3fcc41be - 6) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(DAT_ram_3fcc41bd + -1) {
        case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          uVar4 = FUN_ram_420888fe();
          return uVar4;
        }
      }
      uStack_28 = 1;
      FUN_ram_4039c11e(*(int *)(iVar2 + 0xe4) + 0x380,puVar3,0x20);
      (**(code **)(_DAT_ram_3fcc4178 + 0xc))(iVar1 + 4);
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc88c);
      FUN_ram_4208344a(4,auStack_50,0x30);
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc8a8,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),5);
      *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 5;
      DAT_ram_3fcc41db = 0;
      *(undefined1 *)(iVar1 + 0x33c) = 0;
    }
    FUN_ram_4208830a();
    uVar4 = 1;
  }
  return uVar4;
}

