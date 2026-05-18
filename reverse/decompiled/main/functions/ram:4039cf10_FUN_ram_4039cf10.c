
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039cf10(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  
  iVar3 = _DAT_ram_3ff4fbbc;
  puVar8 = *(uint **)(param_1 + 0x24);
  uVar9 = *puVar8;
  puVar4 = (undefined4 *)(param_2 * 0x28 + _DAT_ram_3ff4fbbc);
  if (((uVar9 & 0x10000) != 0) && (iVar6 = FUN_ram_42093cd0(), iVar6 == 0)) {
    *puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 0x12) = 0;
    FUN_ram_4207a038(6,0x40,4,&DAT_ram_3c0fe418);
    if ((**(uint **)(param_1 + 0x24) & 0x400000) == 0) {
      (*(code *)&SUB_ram_40011b14)(puVar4,param_1,0);
    }
    else {
      (*(code *)&SUB_ram_40011c18)(param_1,0);
    }
    (*(code *)&SUB_ram_40011c5c)(param_2,0);
    return;
  }
  piVar7 = (int *)(param_2 * 0x28 + iVar3);
  cVar1 = *(char *)((int)piVar7 + 0x12);
  if ((cVar1 == '\0') || (cVar1 == '\x03')) {
    *(int *)(param_2 * 0x28 + iVar3) = param_1;
    if ((uVar9 & 0x2102) == 0x2000) {
      *puVar8 = uVar9 | 0x1000;
    }
    iVar6 = (*(code *)&SUB_ram_40011b24)(param_1);
    if ((iVar6 != 0) && ((*puVar8 & 2) == 0)) {
      *puVar8 = *puVar8 & 0xffffefff | 0x100;
    }
    if ((((*puVar8 & 0x1000) != 0) && (cVar1 == '\x03')) &&
       (*(byte *)(gp + 0x70e) <= *(byte *)((int)puVar8 + 5))) {
      *puVar8 = *puVar8 & 0xffffefff | 0x100;
      uVar2 = *(undefined1 *)((int)puVar8 + 6);
      *(undefined1 *)((int)puVar8 + 6) = 0;
      *(undefined1 *)((int)puVar8 + 7) = uVar2;
    }
    if ((*puVar8 & 0x20000000) != 0) {
      FUN_ram_42094ce8(param_1);
    }
    FUN_ram_420b238a(puVar4,0);
  }
  else {
    if (cVar1 != '\x04') {
      FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff724,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac04,0x8b6);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (*piVar7 != param_1) {
      FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff73c,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac04,0x8be);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  if (((uint)*(byte *)((int)puVar4 + 9) << 1 < (uint)*(byte *)(puVar4 + 2)) &&
     (iVar6 = (*(code *)&SUB_ram_40011b24)(param_1), iVar6 == 0)) {
    uVar5 = FUN_ram_4039d994();
    uVar9 = (uint)*(byte *)((int)puVar4 + 9) << 1;
  }
  else {
    uVar5 = FUN_ram_4039d994();
    uVar9 = (uint)*(byte *)(puVar4 + 2);
  }
  *(ushort *)((int)puVar4 + 6) = ~(ushort)(-1 << (uVar9 & 0x1f)) & uVar5;
  FUN_ram_4039d932(puVar4);
  *(undefined1 *)(iVar3 + param_2 * 0x28 + 0x12) = 1;
  if (*(char *)(puVar4 + 1) == '\x04') {
    FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff748,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac04,0x8ff);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_ram_40393cee(9,2);
  FUN_ram_4039d97a(*(undefined1 *)(puVar4 + 1));
  return;
}

