
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079ff8(int param_1,undefined4 param_2)

{
  uint local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (DAT_ram_3fcc29b0 != '\0') {
    uStack_1c = _DAT_ram_3fcc29b4;
    local_20 = (uint)(param_1 != 0);
    uStack_14 = DAT_ram_3fcc29bc;
    uStack_13 = DAT_ram_3fcc29b2;
    uStack_18 = param_2;
    FUN_ram_4208344a(0x13,&local_20,0x10);
    return;
  }
  return;
}

