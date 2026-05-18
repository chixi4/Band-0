
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420272ec(int param_1,int *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined1 auStack_5b [27];
  undefined1 auStack_40 [16];
  undefined2 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  bVar9 = *(byte *)(param_1 + 0x1c);
  bVar10 = *(byte *)(param_1 + 0x1d);
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    bVar9 = bVar9 & 0xfe;
    bVar10 = bVar10 & 0xfe;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    bVar10 = bVar9;
  }
  if ((bVar10 & 1) == 0) {
LAB_ram_42027328:
    if ((bVar10 & 2) != 0) {
      iVar4 = FUN_ram_4202fef8(8,0x10,&uStack_64);
      if (iVar4 != 0) {
        iVar5 = FUN_ram_42030408(&uStack_60);
        if (iVar5 != 0) goto LAB_ram_42027606;
        FUN_ram_4039c11e(iVar4,uStack_60,0x10);
        *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 4;
        iVar5 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),uStack_64);
        if (iVar5 != 0) goto LAB_ram_420275e0;
        puVar6 = (undefined1 *)FUN_ram_4202fef8(9,7,&uStack_64);
        if (puVar6 != (undefined1 *)0x0) {
          uVar7 = thunk_FUN_ram_420365de(*(undefined2 *)(param_1 + 10));
          FUN_ram_42036658(uVar7,&uStack_5c);
          *puVar6 = uStack_5c;
          FUN_ram_4039c11e(puVar6 + 1,auStack_5b,6);
          *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 0x10;
          FUN_ram_4039c11e(param_1 + 0x9a,uStack_60,0x10);
          *(undefined1 *)(param_1 + 0x88) = *puVar6;
          FUN_ram_4039c11e(param_1 + 0xba,puVar6 + 1,6);
          iVar5 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),uStack_64);
          if (iVar5 != 0) goto LAB_ram_420275e0;
          goto LAB_ram_420273f2;
        }
      }
      goto LAB_ram_420276be;
    }
LAB_ram_420273f2:
    if ((bVar10 & 4) == 0) goto LAB_ram_42027486;
    iVar4 = FUN_ram_4202fef8(10,0x10,&uStack_64);
    pcVar3 = _DAT_ram_3fcb69cc;
    if (iVar4 == 0) goto LAB_ram_420276be;
    if (_DAT_ram_3fcb69cc == (code *)0x0) {
LAB_ram_4202768e:
      iVar5 = FUN_ram_420337cc(iVar4,0x10);
      if (iVar5 != 0) goto LAB_ram_42027606;
      iVar5 = param_1 + 0xaa;
      iVar8 = iVar4;
    }
    else {
      (*(code *)&SUB_ram_40010488)(auStack_40,0,0x20);
      iVar5 = (*pcVar3)(3,auStack_40,*(undefined2 *)(param_1 + 10));
      if (iVar5 != 0) goto LAB_ram_4202768e;
      iVar8 = FUN_ram_4039c11e(param_1 + 0xaa,auStack_40,0x10);
      iVar5 = iVar4;
    }
    FUN_ram_4039c11e(iVar5,iVar8,0x10);
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 8;
    *(undefined4 *)(param_1 + 0x74) = 0;
    FUN_ram_4039c11e(param_1 + 0xaa,iVar4,0x10);
    iVar5 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),uStack_64);
    if (iVar5 == 0) {
LAB_ram_42027486:
      if (((*(byte *)(param_1 + 8) & 1) == 0) && (*(char *)(param_1 + 0xe) != '\0')) {
        return;
      }
      FUN_ram_42027020(param_1,param_2);
      return;
    }
  }
  else {
    iVar4 = FUN_ram_4202fef8(6,0x10,&uStack_64);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_1 + 0xf);
      pcVar3 = _DAT_ram_3fcb69cc;
      if (_DAT_ram_3fcb69cc == (code *)0x0) {
LAB_ram_420275f8:
        iVar5 = FUN_ram_420337cc(iVar4,*(undefined1 *)(param_1 + 0xf));
        if (iVar5 == 0) {
          (*(code *)&SUB_ram_40010488)
                    ((uint)*(byte *)(param_1 + 0xf) + iVar4,0,0x10 - (uint)*(byte *)(param_1 + 0xf))
          ;
          FUN_ram_4039c11e(param_1 + 0x8a,iVar4,0x10);
          bVar2 = false;
          goto LAB_ram_4202752e;
        }
LAB_ram_42027606:
        (*(code *)&SUB_ram_40011a08)(uStack_64);
        goto LAB_ram_420275e0;
      }
      (*(code *)&SUB_ram_40010488)(auStack_40,0,0x20);
      iVar5 = (*pcVar3)(1,auStack_40,*(undefined2 *)(param_1 + 10));
      if (iVar5 != 0) goto LAB_ram_420275f8;
      (*(code *)&SUB_ram_40010488)
                (auStack_40 + *(byte *)(param_1 + 0xf),0,0x10 - (uint)*(byte *)(param_1 + 0xf));
      *(undefined2 *)(param_1 + 0x78) = uStack_30;
      *(undefined4 *)(param_1 + 0x80) = uStack_28;
      *(undefined4 *)(param_1 + 0x84) = uStack_24;
      uVar7 = FUN_ram_4039c11e(param_1 + 0x8a,auStack_40,0x10);
      FUN_ram_4039c11e(iVar4,uVar7,0x10);
      bVar2 = true;
LAB_ram_4202752e:
      *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 1;
      iVar5 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),uStack_64);
      if (iVar5 != 0) goto LAB_ram_420275e0;
      puVar6 = (undefined1 *)FUN_ram_4202fef8(7,10,&uStack_64);
      if (puVar6 != (undefined1 *)0x0) {
        if (bVar2) {
          *puVar6 = *(undefined1 *)(param_1 + 0x78);
          puVar6[1] = *(undefined1 *)(param_1 + 0x79);
          puVar6[2] = *(undefined1 *)(param_1 + 0x80);
          puVar6[3] = *(undefined1 *)(param_1 + 0x81);
          puVar6[4] = *(undefined1 *)(param_1 + 0x82);
          puVar6[5] = *(undefined1 *)(param_1 + 0x83);
          puVar6[6] = *(undefined1 *)(param_1 + 0x84);
          puVar6[7] = *(undefined1 *)(param_1 + 0x85);
          puVar6[8] = *(undefined1 *)(param_1 + 0x86);
          puVar6[9] = *(undefined1 *)(param_1 + 0x87);
        }
        else {
          iVar5 = FUN_ram_420337cc(puVar6,2);
          if ((iVar5 != 0) || (iVar5 = FUN_ram_420337cc(puVar6 + 2,8), iVar5 != 0))
          goto LAB_ram_42027606;
          uVar7 = *(undefined4 *)(puVar6 + 6);
          *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(puVar6 + 2);
          uVar1 = *puVar6;
          *(undefined4 *)(param_1 + 0x84) = uVar7;
          *(ushort *)(param_1 + 0x78) = CONCAT11(puVar6[1],uVar1);
        }
        *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 2;
        iVar5 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),uStack_64);
        if (iVar5 != 0) goto LAB_ram_420275e0;
        goto LAB_ram_42027328;
      }
    }
LAB_ram_420276be:
    iVar5 = 6;
  }
LAB_ram_420275e0:
  *(undefined1 *)(param_2 + 1) = 8;
  *param_2 = iVar5;
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  return;
}

