
uint FUN_ram_4206f01c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_4206e894(*(undefined1 *)(*param_1 + 0xc));
  if (((undefined1 *)param_1[0xb] != (undefined1 *)0x0) &&
     (uVar2 = FUN_ram_4206e894(*(undefined1 *)param_1[0xb]), uVar2 < uVar1)) {
    uVar1 = uVar2;
  }
  if (((undefined1 *)param_1[0xd] != (undefined1 *)0x0) &&
     (uVar2 = FUN_ram_4206e894(*(undefined1 *)param_1[0xd]), uVar2 < uVar1)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

