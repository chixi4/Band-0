
void FUN_ram_420515d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  while( true ) {
    FUN_ram_420599c2();
    puVar1 = *(undefined4 **)(param_1 + 0x48);
    if (puVar1 == (undefined4 *)0x0) break;
    uVar3 = 1;
    for (puVar5 = puVar1; *(short *)((int)puVar5 + 10) != *(short *)(puVar5 + 2);
        puVar5 = (undefined4 *)*puVar5) {
      uVar3 = uVar3 + 1 & 0xff;
    }
    *(ushort *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) - uVar3;
    if (*(undefined4 **)(param_1 + 0x4c) == puVar5) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar5;
    }
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    *puVar5 = 0;
    FUN_ram_420599ec();
    *(char *)((int)puVar1 + 0xf) = *(char *)(param_1 + 0x3c) + '\x01';
    iVar2 = FUN_ram_42058b04(puVar1,param_1);
    if (iVar2 != 0) {
      FUN_ram_42051d02(puVar1);
    }
  }
  FUN_ram_420599ec();
  return;
}

