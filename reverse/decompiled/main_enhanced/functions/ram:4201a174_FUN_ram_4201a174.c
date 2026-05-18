
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201a174(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [24];
  
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 != 0) {
    if (_DAT_ram_3fcc506c == 0) {
      FUN_ram_4201eeb2(0);
    }
    else {
      FUN_ram_4039c11e(iVar1,_DAT_ram_3fcc506c,5000);
    }
    iVar1 = _DAT_ram_3fcc5068;
    if (param_1 != 0) {
      iVar1 = _DAT_ram_3fcc5064;
    }
    if (iVar1 != 0) {
      FUN_ram_4201f2b0(0x14,0x14,0xa0);
    }
    (*(code *)&SUB_ram_400106ac)(auStack_34,0x10,0x3c0ad104,param_2);
    FUN_ram_4039c11e(auStack_24,
                     "eOcABygFQeAA5w7PA6IB//wB//+AAcIe7QNDf/wB/+0DMR4A4PAAAwsEUQ4AcAABpAEBMwQBRwQz/AH4RwQBZQQz/AHwZQQBgwQBDwABgwQBmAQy///wqgQCvwR0///wAAOAD90ENP//8N0EdDwcPAD///D7BDEeDx8PAAMZBQs3BQtVBZID4Pg/AAAA/h9zBSMB8JEFIQ+AoQUKrwU5AD8CzQUCtgUiAAGNAQQJBhEHrgUNJwYLRQYMYwYLgQYRAHcBAYQAAQIAC70GC9sGoAAP//AAAAAAAAA="
                     ,0x14);
    FUN_ram_4201f3b0(auStack_34,auStack_24);
  }
  return;
}

