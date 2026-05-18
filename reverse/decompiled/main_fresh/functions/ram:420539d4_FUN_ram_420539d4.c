
void FUN_ram_420539d4(undefined4 param_1,undefined2 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint extraout_a2;
  uint uVar2;
  undefined6 uVar3;
  
  uVar3 = CONCAT24(param_2,param_1);
  uVar2 = param_3 & 0xffffffbf;
  if (uVar2 != 1) {
    uVar3 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
  }
  puVar1 = (undefined4 *)FUN_ram_420531dc(0xd);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined6 *)(puVar1 + 1) = uVar3;
    *(short *)((int)puVar1 + 10) = (short)((uint6)uVar3 >> 0x20);
    *(char *)(puVar1 + 3) = (char)param_3;
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    *(short *)((int)puVar1 + 0xe) = (short)uVar2;
  }
  return;
}

