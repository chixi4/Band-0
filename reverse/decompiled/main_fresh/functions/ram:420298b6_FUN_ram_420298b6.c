
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_420298b6(undefined4 param_1,undefined1 param_2,undefined1 param_3,short *param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)(*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6b84 + 0x24);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 6;
  }
  else {
    (*(code *)&SUB_ram_40010488)(puVar2,0,0x14);
    iVar1 = _DAT_ram_3fcb6b84;
    *(undefined1 *)(puVar2 + 2) = param_2;
    *(undefined1 *)((int)puVar2 + 9) = param_3;
    sVar4 = *(short *)(iVar1 + 0x50);
    puVar2[1] = param_1;
    puVar5 = *(undefined4 **)(iVar1 + 0x44);
    sVar4 = sVar4 + 1;
    *(short *)(iVar1 + 0x50) = sVar4;
    *(short *)((int)puVar2 + 10) = sVar4;
    puVar2[3] = param_5;
    puVar2[4] = param_6;
    *puVar2 = 0;
    *puVar5 = puVar2;
    *(undefined4 **)(iVar1 + 0x44) = puVar2;
    if (param_4 != (short *)0x0) {
      *param_4 = sVar4;
    }
    uVar3 = 0;
  }
  return uVar3;
}

