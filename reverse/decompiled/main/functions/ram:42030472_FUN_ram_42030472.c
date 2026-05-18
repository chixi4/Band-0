
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42030472(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uStack_50;
  undefined1 auStack_4f [7];
  undefined1 uStack_48;
  undefined1 auStack_47 [6];
  undefined1 auStack_41 [16];
  undefined1 auStack_31 [29];
  
  FUN_ram_4202fc30();
  iVar1 = 0x12;
  if (param_2 < 2) {
    uStack_48 = (char)param_2;
    FUN_ram_4039c11e(auStack_47,param_1,6);
    FUN_ram_4039c11e(auStack_31,_DAT_ram_3fcb6ba8 + 1,0x10);
    FUN_ram_4039c11e(auStack_41,param_3,0x10);
    iVar1 = FUN_ram_420332b4(0x2027,&uStack_48,0x27,0,0);
    if (iVar1 == 0) {
      uStack_50 = (char)param_2;
      FUN_ram_4039c11e(auStack_4f,param_1,6);
      iVar1 = FUN_ram_42030424(&uStack_50,1);
    }
  }
  FUN_ram_4202fc4a();
  return iVar1;
}

