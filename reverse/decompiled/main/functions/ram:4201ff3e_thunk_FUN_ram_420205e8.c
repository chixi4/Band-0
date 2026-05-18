
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_420205e8(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = DAT_ram_3fcc5145;
  if (DAT_ram_3fcc5145 != '\0') {
    FUN_ram_4202053c();
  }
  if (DAT_ram_3fcc5147 == '\0') {
    DAT_ram_3fcc5146 = 0;
  }
  FUN_ram_420201a0(param_1,0x3fcbdb5c);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
    uVar2 = _DAT_ram_3fcc5148;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
  }
  FUN_ram_4201ffda(uVar2,0x3fcbdb5c,uVar3,0);
  FUN_ram_4202034e();
  return;
}

