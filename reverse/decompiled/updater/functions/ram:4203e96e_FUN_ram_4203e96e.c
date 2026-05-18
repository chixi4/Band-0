
undefined4 FUN_ram_4203e96e(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = (uint)DAT_ram_3fcb4ee6;
  if (3 < uVar3) {
    return 0xffffffff;
  }
  if (uVar3 < 2) {
    *(int *)((uVar3 + 0x3b8) * 4 + 0x3fcb3ff0) = param_1;
  }
  else {
    piVar1 = (int *)&DAT_ram_3fcb4ed0;
    uVar4 = 0;
    do {
      if (*(char *)(*piVar1 + 0xab) == *(char *)(param_1 + 0xab)) break;
      uVar4 = uVar4 + 1 & 0xff;
      piVar1 = piVar1 + 1;
    } while (uVar3 != uVar4);
    for (uVar2 = uVar3; uVar4 + 1 < uVar2; uVar2 = uVar2 - 1 & 0xff) {
      *(undefined4 *)((uVar2 + 0x3b8) * 4 + 0x3fcb3ff0) =
           *(undefined4 *)((uVar2 + 0x3b7) * 4 + 0x3fcb3ff0);
    }
    if (uVar3 == uVar4) {
      iVar5 = uVar3 + 0x3b8;
    }
    else {
      iVar5 = uVar4 + 0x3b9;
    }
    *(int *)(iVar5 * 4 + 0x3fcb3ff0) = param_1;
  }
  DAT_ram_3fcb4ee6 = DAT_ram_3fcb4ee6 + 1;
  return 0;
}

