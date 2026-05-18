
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420334da(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iStack_28;
  undefined1 auStack_24 [2];
  undefined1 auStack_22 [6];
  
  iStack_28 = *param_2;
  *param_2 = 0;
  uVar2 = *(uint *)(param_1 + 0x34) >> 2 & 1;
  while( true ) {
    if (iStack_28 == 0) {
      *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfb;
      return 0;
    }
    if ((*(short *)(_DAT_ram_3fcb6bc4 + 0x22) == 0) ||
       (iVar3 = FUN_ram_420376c2(&iStack_28,0xff,&LAB_ram_420231fe,0), iVar3 == 0)) {
      *param_2 = iStack_28;
      return 1;
    }
    uVar4 = FUN_ram_420337b4(*(undefined2 *)(param_1 + 6),uVar2,0);
    (*(code *)&SUB_ram_40011aac)(auStack_24,uVar4);
    (*(code *)&SUB_ram_40011aac)(auStack_22,*(undefined2 *)(iVar3 + 0x10));
    iVar3 = (*(code *)&SUB_ram_40011a28)(iVar3,4);
    if ((iVar3 == 0) ||
       (puVar5 = (undefined4 *)(*(code *)&SUB_ram_40011a30)(iVar3,4), puVar5 == (undefined4 *)0x0))
    break;
    FUN_ram_4039c11e(*puVar5,auStack_24,4);
    (*(code *)&SUB_ram_40011938)(auStack_22);
    FUN_ram_4202d72e(puVar5);
    iVar3 = _DAT_ram_3fcb6bc4;
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
    *(short *)(iVar3 + 0x22) = *(short *)(iVar3 + 0x22) + -1;
    iVar3 = thunk_FUN_ram_42034eb8(puVar5);
    iVar1 = _DAT_ram_3fcb6bc4;
    if (iVar3 != 0) {
      *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + -1;
      *(short *)(iVar1 + 0x22) = *(short *)(iVar1 + 0x22) + 1;
      goto LAB_ram_4203357a;
    }
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 4;
    uVar2 = 1;
  }
  iVar3 = 6;
LAB_ram_4203357a:
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfb;
  (*(code *)&SUB_ram_40011a08)(iStack_28);
  return iVar3;
}

