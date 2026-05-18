
void FUN_ram_420711aa(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = param_1 + 3;
  while( true ) {
    iVar2 = (*(code *)&SUB_ram_400108cc)(*puVar1);
    uVar3 = (*(code *)&SUB_ram_400108cc)(iVar2 + 1);
    *(char *)((int)puVar1 + 1) = (char)((uint)uVar3 >> 8);
    *(char *)((int)puVar1 + 2) = (char)((uint)uVar3 >> 0x10);
    *(char *)puVar1 = (char)uVar3;
    *(char *)((int)puVar1 + 3) = (char)((uint)uVar3 >> 0x18);
    if ((iVar2 + 1 != 0) || (param_1 == puVar1)) break;
    puVar1 = puVar1 + -1;
  }
  return;
}

