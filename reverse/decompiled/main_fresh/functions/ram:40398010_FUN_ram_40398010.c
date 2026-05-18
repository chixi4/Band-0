
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_40398010(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_40396966();
  cVar1 = '\0';
  if (_DAT_ram_3fcc4e9c != param_1) {
    puVar2 = *(undefined1 **)(param_1 + 0x14);
    cVar1 = '\x02';
    if ((puVar2 != _DAT_ram_3fcc4e98) && (puVar2 != _DAT_ram_3fcc4e94)) {
      if (puVar2 == &DAT_ram_3fcb8c64) {
        if (*(int *)(param_1 + 0x28) == 0) {
          cVar1 = (*(char *)(param_1 + 0x14c) != '\x01') + '\x02';
        }
      }
      else {
        cVar1 = '\x04';
        if (puVar2 != (undefined1 *)0x3fcb8c78) {
          cVar1 = (-(puVar2 == (undefined1 *)0x0) & 3U) + 1;
        }
      }
    }
  }
  FUN_ram_40396994();
  return cVar1;
}

