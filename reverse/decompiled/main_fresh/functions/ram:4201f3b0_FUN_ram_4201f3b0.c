
undefined4 FUN_ram_4201f3b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 uStack_1c;
  
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_ram_4039c11e(auStack_24,param_2,0x14);
    uStack_1c = 0;
    if (1 < *(byte *)(param_2 + 8)) {
      uStack_1c = 3;
    }
    uVar2 = FUN_ram_4201f76a(iVar1,param_1,auStack_24);
  }
  return uVar2;
}

