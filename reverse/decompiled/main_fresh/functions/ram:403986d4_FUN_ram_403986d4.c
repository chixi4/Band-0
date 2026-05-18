
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403986d4(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    uVar1 = FUN_ram_40397dfa();
  }
  FUN_ram_40396d32((int)uVar1,_DAT_ram_3fcc4e9c + 0x18);
  FUN_ram_40397b7e((int)((ulonglong)uVar1 >> 0x20),1);
  return;
}

