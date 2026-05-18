
void FUN_ram_4204478c(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 0x32);
  if (bVar1 == 3) {
    if (*(char *)(param_1 + 0x28a) == '\0') {
      puVar2 = (undefined1 *)0x3c072f0c;
    }
    else {
      puVar2 = (undefined1 *)0x3c072f04;
    }
  }
  else if (bVar1 < 4) {
    if (bVar1 == 1) {
      if (*(char *)(param_1 + 0x28a) == '\0') {
        puVar2 = (undefined1 *)0x3c072ef4;
      }
      else {
        puVar2 = (undefined1 *)0x3c072ef0;
      }
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      if (*(char *)(param_1 + 0x28a) == '\0') {
        puVar2 = &DAT_ram_3c072f00;
      }
      else {
        puVar2 = &DAT_ram_3c072ef8;
      }
    }
  }
  else {
    if (bVar1 != 4) {
      return;
    }
    puVar2 = (undefined1 *)0x3c072ee4;
  }
  FUN_ram_4039a182(param_2,puVar2);
  return;
}

