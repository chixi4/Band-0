
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039d194(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar5 = *(char *)((int)param_1 + 0x12);
  if (param_3 != 0) {
    if (1 < (byte)(cVar5 - 1U)) {
      FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff700,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac10,0x4db);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (param_2 == 0) {
      *(undefined1 *)((int)param_1 + 0x12) = 3;
      (*(code *)&SUB_ram_40011db8)();
      uVar3 = 5;
    }
    else {
      iVar2 = *param_1;
      if ((**(uint **)(iVar2 + 0x24) & 0x400000) != 0) {
        bVar1 = *(byte *)((int)*(uint **)(iVar2 + 0x24) + 5);
        if (*(byte *)(gp + 0x70f) <= bVar1) {
          iVar8 = (*(code *)&SUB_ram_40011b24)(iVar2);
          if ((iVar8 != 0) || (*(byte *)(gp + 0x710) <= bVar1)) {
            (*(code *)&LAB_ram_40011da4)(param_1,iVar2);
            return;
          }
        }
      }
      *(undefined1 *)((int)param_1 + 0x12) = 3;
      (*(code *)&SUB_ram_40011db8)(param_1,0);
      uVar3 = 7;
    }
    goto LAB_ram_4039d366;
  }
  if (cVar5 == '\x06') {
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    iVar2 = *param_1;
    if (param_2 == 0) {
      uVar3 = 9;
      if (iVar2 == 0) {
        FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff6d0,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac10,0x48a);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    else {
      uVar3 = 10;
    }
    *(undefined1 *)((int)param_1 + 0x13) = uVar3;
    puVar6 = *(uint **)(iVar2 + 0x24);
    if ((*puVar6 & 0x200000) != 0) {
      (*(code *)&SUB_ram_40011c0c)(puVar6[4] >> 0x14 & 0xf,*(char *)((int)puVar6 + 5) + '\x02');
      (*(code *)&SUB_ram_40011c20)(*(uint *)(*(int *)(iVar2 + 0x24) + 0x10) >> 0x14 & 0xf);
      return;
    }
    if ((*puVar6 & 0x400000) != 0) {
      (*(code *)&SUB_ram_40011c18)(iVar2,1);
      return;
    }
    if (*(byte *)((int)puVar6 + 6) < *(byte *)(gp + 0x6f9)) {
      if (*(byte *)((int)puVar6 + 7) < *(byte *)(gp + 0x6f8)) {
        uVar4 = 4;
      }
      else {
        uVar4 = 3;
      }
    }
    else {
      uVar4 = 2;
    }
    FUN_ram_42093faa(param_1,iVar2,uVar4,1);
    return;
  }
  if (cVar5 != '\x05') {
    FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff6f4,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac10,0x4d8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = *param_1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  if (iVar2 == 0) {
    FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff6dc,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac10,0x4aa);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar7 = **(uint **)(iVar2 + 0x24);
  if ((uVar7 & 0x80000) == 0) {
    if ((uVar7 & 0x400000) != 0) {
      FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff6e8,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac10,0x4c9);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(undefined1 *)((int)param_1 + 0x13) = 3;
    (*(code *)&SUB_ram_40011b44)(param_1,iVar2,1);
    return;
  }
  uStack_1c = (uint)((byte)(*(uint **)(iVar2 + 0x24))[1] & 0xf);
  uStack_18 = 0;
  uStack_14 = 0;
  (*(code *)&SUB_ram_40011af4)((char)param_1[1],&uStack_1c);
  iVar2 = _DAT_ram_3fcdfdec;
  puVar6 = *(uint **)(*param_1 + 0x24);
  uVar7 = puVar6[4];
  if ((*puVar6 & 0x200000) == 0) {
    uVar3 = FUN_ram_4039d9e0((char)param_1[1]);
    cVar5 = '\0';
    iVar8 = *(int *)(*param_1 + 0x24);
    *(undefined1 *)(iVar2 + (uVar7 >> 0x14 & 0xf) * 0x30 + 0x4d) = uVar3;
    uVar7 = *(uint *)(iVar8 + 0x10);
  }
  else {
    cVar5 = *(char *)((int)puVar6 + 5) + '\x01';
  }
  (*(code *)&SUB_ram_40011c50)(uVar7 >> 0x14 & 0xf,uStack_1c._2_2_,uStack_18,uStack_14,cVar5);
  iVar2 = *param_1;
  if ((**(uint **)(iVar2 + 0x24) & 0x20000) == 0) {
LAB_ram_4039d384:
    (*(code *)&SUB_ram_40011c20)((*(uint **)(iVar2 + 0x24))[4] >> 0x14 & 0xf);
  }
  else {
    if (*(char *)(iVar2 + 0x1a) == '\x05') goto LAB_ram_4039d384;
    (*(code *)&SUB_ram_40011c18)(iVar2,1);
  }
  uVar3 = 1;
LAB_ram_4039d366:
  *(undefined1 *)((int)param_1 + 0x13) = uVar3;
  return;
}

