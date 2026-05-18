
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42021542(void)

{
  int in_a4;
  int in_a5;
  
  if (in_a5 < 8) {
    if (_DAT_ram_3fcc5168 == 3) {
      *(int *)(in_a4 + 0x158) = in_a5 + 1;
      FUN_ram_40398498(0x32);
      thunk_FUN_ram_4208475e();
      return;
    }
  }
  FUN_ram_42021346(5);
  FUN_ram_403979ba(_DAT_ram_3fcc5164,2);
  thunk_FUN_ram_42021358((_DAT_ram_3fcc5168 != 4) + '\a',0);
  return;
}

