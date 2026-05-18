
void FUN_ram_42010a04(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  for (puVar1 = (undefined4 *)&DAT_ram_3c07aa9c; puVar1 < (undefined4 *)0x3c07ab3c;
      puVar1 = puVar1 + 2) {
    if (((*(ushort *)((int)puVar1 + 6) == param_1) && ((*(ushort *)(puVar1 + 1) & 1) != 0)) &&
       (iVar2 = (*(code *)*puVar1)(), iVar2 != 0)) {
      FUN_ram_40399b58();
    }
  }
  return;
}

