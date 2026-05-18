
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ecc8(void)

{
  char cVar1;
  
  thunk_FUN_ram_42020424();
  cVar1 = '\x01';
  if (DAT_ram_3fcc511c == '\0') {
    cVar1 = DAT_ram_3fcc511d;
  }
  if (DAT_ram_3fcc5116 != '\0') {
    thunk_FUN_ram_4202066e();
    thunk_FUN_ram_420205e8(_DAT_ram_3fcc5134);
    _DAT_ram_3fcc5118 = 0;
    DAT_ram_3fcc5116 = '\0';
    goto LAB_ram_4201ed14;
  }
  if (cVar1 == '\0') {
LAB_ram_4201ed86:
    if (DAT_ram_3fcc511c == '\0') {
      if (DAT_ram_3fcc511d == '\0') goto LAB_ram_4201ed7c;
      thunk_FUN_ram_4202068e(_DAT_ram_3fcc5134,DAT_ram_3fcc511f,DAT_ram_3fcc511e);
    }
    else {
      thunk_FUN_ram_42020762
                (_DAT_ram_3fcc5134,DAT_ram_3fcc5121,DAT_ram_3fcc5120,DAT_ram_3fcc511f,
                 DAT_ram_3fcc511e);
    }
    _DAT_ram_3fcc5118 = _DAT_ram_3fcc5118 + 1;
  }
  else {
    if (_DAT_ram_3fcc5118 < 9) goto LAB_ram_4201ed86;
    thunk_FUN_ram_4202066e();
LAB_ram_4201ed7c:
    thunk_FUN_ram_420205e8(_DAT_ram_3fcc5134);
    _DAT_ram_3fcc5118 = 0;
  }
LAB_ram_4201ed14:
  if (DAT_ram_3fcc5115 != '\0') {
    thunk_FUN_ram_42020360();
  }
  DAT_ram_3fcc5130 = 0;
  DAT_ram_3fcc511d = 0;
  DAT_ram_3fcc511c = 0;
  FUN_ram_40397156(_DAT_ram_3fcc5128,0,0,0);
  _DAT_ram_3fcc512c = 0;
  FUN_ram_40397f1c(0);
  return;
}

