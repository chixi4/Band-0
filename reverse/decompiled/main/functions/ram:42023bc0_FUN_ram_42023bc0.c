
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42023bc0(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 uStack_61;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar5 = _DAT_ram_3fcc518c;
  if (*param_1 == '\0') {
    iVar2 = FUN_ram_4202e30c(*(undefined2 *)(param_1 + 8),&uStack_4c);
    puVar5 = _DAT_ram_3fcc518c;
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    uVar1 = *(undefined2 *)(param_1 + 8);
    *(undefined1 *)((int)_DAT_ram_3fcc518c + 0x26) = 1;
    *(undefined2 *)(puVar5 + 10) = uVar1;
    uStack_60 = *puVar5;
    uStack_58 = 0;
    uStack_5c = *(undefined4 *)(param_1 + 4);
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_61 = 1;
    uVar3 = FUN_ram_4202d4f8(&uStack_61);
    for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(_DAT_ram_3fcc518c + 0x16); iVar2 = iVar2 + 1) {
      FUN_ram_4202aa60(*(undefined2 *)(_DAT_ram_3fcc518c[0x15] + iVar2 * 0x18 + 0x14),uVar3);
    }
    uVar4 = _DAT_ram_3fcc518c[1];
    puVar5 = &uStack_60;
    uVar3 = 1;
  }
  else {
    if (*param_1 != '\x01') {
      return 0;
    }
    if (*(char *)((int)_DAT_ram_3fcc518c + 0x26) == '\0') {
      return 0;
    }
    uStack_4c = *_DAT_ram_3fcc518c;
    *(undefined1 *)((int)_DAT_ram_3fcc518c + 0x26) = 0;
    uStack_48 = *(undefined4 *)(param_1 + 4);
    uVar4 = puVar5[1];
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    puVar5 = &uStack_4c;
    uVar3 = 6;
  }
  FUN_ram_420b392e(uVar4,0x50633444,uVar3,puVar5,0x14,0xffffffff);
  return 0;
}

